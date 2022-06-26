#ifndef USER_H
#define USER_H

#include "taskmanager.h"
#include "dataprotection.h"

///////////////////////////
// Interface of User class
//////////////////////////

class User {
private:
    string id;
    string username;
    uint32_t password;
    TaskManager taskManager;
public:
    User();
    User(const string& id, const string& username, const uint32_t& password, const vector<Task>& tasks);
    User(const User& other);
    User& operator=(const User& other);

    const unordered_map<string, vector<Task>>& getTasks() const;
    void addTask(const string& title, const string& description, const string& deadline, const string& type);
    void deleteTask(const string& title, const string& type);
    void markTaskAsDone(const string& title);
    void sortTasks(const string& type, const string& way);

    void updateId();
    void updatePassword(const string& newPassword);

    const string& getId() const;
    const string& getUsername() const;
    const uint32_t& getPassword() const;
};

#endif // USER_H
