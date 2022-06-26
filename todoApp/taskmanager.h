#ifndef TASKMANAGER_H
#define TASKMANAGER_H

#include <unordered_map>
#include <vector>

#define TITLE_MAX_LEN 32

using namespace std;

///////////////////////////
// Interface of Task class
///////////////////////////

class Task {
private:
    string title;
    string description;
    string deadline;
    string type;
public:
    Task(const string& title, const string& description, const string& deadline, const string& type);
    Task(const Task& other);
    Task& operator=(const Task& other);

    const string& getTitle() const;
    const string& getDescription() const;
    const string& getDeadline() const;
    const string& getType() const;

    void setType(const string& type);
};

//////////////////////////////////
// Interface of TaskManager class
/////////////////////////////////

class TaskManager {
private:
    unordered_map<string, vector<Task>> tasks;
public:
    TaskManager();
    TaskManager(const vector<Task>& tasks);
    TaskManager(const TaskManager& other);
    TaskManager& operator=(const TaskManager& other);

    void addTask(const string& title, const string& description, const string& deadline, const string& type);
    void deleteTask(const string& title, const string& type);
    void markTaskAsDone(const string& title);
    Task searchTask(const string& title, const string& type);
    void sortTasks(const string& type, const string& way);

    const unordered_map<string, vector<Task>>& getTasks() const;
};

#endif // TASKMANAGER_H
