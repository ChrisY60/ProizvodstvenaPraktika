#ifndef FILEMANAGER_H
#define FILEMANAGER_H

#include "user.h"
#include <jsoncpp/json/value.h>
#include <jsoncpp/json/json.h> // sudo apt-get install libjsoncpp-dev

using namespace std;

//////////////////////////////////
// Interface of FileManager class
/////////////////////////////////

class FileManager {
private:
    string fileName;
public:
    FileManager(const string& fileName);
    FileManager(const FileManager& other);
    FileManager& operator=(const FileManager& other);

    Json::Value readJson();
    void writeJson(const Json::Value& users);

    User readUser(const string& username);
    void updateUsers(User& user);

    bool checkUser(const string& username);
    const string& getFileName() const;
};

#endif // FILEMANAGER_H
