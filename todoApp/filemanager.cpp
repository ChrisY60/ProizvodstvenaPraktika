#include "filemanager.h"
#include <fstream>
#include <exception>
#include <iostream>

using namespace std;

///////////////////////////////////////
// Implementation of FileManager class
//////////////////////////////////////

FileManager::FileManager(const string& fileName)
:fileName(fileName)
{
    if (fileName.empty()) {
        throw invalid_argument("Provided file name is invalid!");
    }
}

FileManager::FileManager(const FileManager& other) {
    this->fileName = other.fileName;
}

FileManager& FileManager::operator=(const FileManager& other) {
    if (this != &other) {
        this->fileName = other.fileName;
    } return *this;
}

Json::Value FileManager::readJson() {
    Json::Value users;
    Json::Reader reader;

    ifstream file;
    file.open(this->fileName, ios::in);

    reader.parse(file, users);
    file.close();

    return users;
}

void FileManager::writeJson(const Json::Value& users) {
    ofstream file;
    file.open(this->fileName, ios::out);

    Json::StyledWriter styledWriter;
    file << styledWriter.write(users);

    file.close();
}

User FileManager::readUser(const string& username) {
    const Json::Value users = readJson();

    if (users.isMember(username)) {
        const Json::Value user = users[username];

        const string id = user["id"].asString();
        const uint32_t password = user["password"].asUInt();

        vector<Task> tasks;

        for (auto task: user["tasks"]) {
            tasks.push_back(Task(
                decrypt(task["title"].asString(), id),
                decrypt(task["description"].asString(), id),
                decrypt(task["deadline"].asString(), id),
                decrypt(task["type"].asString(), id)
            ));
        }

        return User(id, username, password, tasks);
    } else {
        throw invalid_argument("Provided username does not exists!");
    }
}

void FileManager::updateUsers(User& user) {
    Json::Value users = readJson();

    const string username = user.getUsername();

    users[username]["id"] = user.getId();
    users[username]["password"] = user.getPassword();

    Json::Value tasks(Json::arrayValue);

    for (const auto& column: user.getTasks()) {
        for (const Task& task: column.second) {
            Json::Value taskJson;

            taskJson["title"] = encrypt(task.getTitle(), user.getId());
            taskJson["description"] = encrypt(task.getDescription(), user.getId());
            taskJson["deadline"] = encrypt(task.getDeadline(), user.getId());
            taskJson["type"] = encrypt(task.getType(), user.getId());

            tasks.append(taskJson);
        }
    }

    users[username]["tasks"] = tasks;

    writeJson(users);
}

bool FileManager::checkUser(const string& username) {
    const Json::Value users = readJson();

    if (users.isMember(username)) {
        return true;
    } return false;
}

const string& FileManager::getFileName() const {
    return this->fileName;
}
