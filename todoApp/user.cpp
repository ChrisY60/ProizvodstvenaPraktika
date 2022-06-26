#include "user.h"

////////////////////////////////
// Implementation of User class
///////////////////////////////

User::User() {};

User::User(const string& id, const string& username, const uint32_t& password, const vector<Task>& tasks)
:id(id)
,username(username)
,password(password)
,taskManager(TaskManager(tasks))
{
    if (id.empty()) {
        throw invalid_argument("Provided id is invalid!");
    }

    if (username.empty()) {
        throw invalid_argument("Provided username is invalid!");
    }
}

User::User(const User& other) {
    this->id = other.id;
    this->username = other.username;
    this->password = other.password;
    this->taskManager = other.taskManager;
}

User& User::operator=(const User& other) {
    if (this != &other) {
        this->id = other.id;
        this->username = other.username;
        this->password = other.password;
        this->taskManager = other.taskManager;
    } return *this;
}

const unordered_map<string, vector<Task>>& User::getTasks() const {
    return this->taskManager.getTasks();
}

void User::addTask(const string& title, const string& description, const string& deadline, const string& type) {
    this->taskManager.addTask(title, description, deadline, type);
}

void User::deleteTask(const string& title, const string& type) {
    this->taskManager.deleteTask(title, type);
}

void User::markTaskAsDone(const string& title) {
    this->taskManager.markTaskAsDone(title);
}

void User::sortTasks(const string& type, const string& way) {
    this->taskManager.sortTasks(type, way);
}

const string& User::getId() const {
    return this->id;
}

const string& User::getUsername() const {
    return this->username;
}

const uint32_t& User::getPassword() const {
    return this->password;
};
