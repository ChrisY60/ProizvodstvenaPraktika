#include "taskmanager.h"
#include <exception>
#include <iostream>

using namespace std;

////////////////////////////////
// Implementation of Task class
///////////////////////////////

Task::Task(const string& title, const string& description, const string& deadline, const string& type)
:title(title)
,description(description)
,deadline(deadline)
,type(type)
{
    if (title.empty()) {
        throw invalid_argument("Provided title is invalid!");
    }

    if (title.size() > TITLE_MAX_LEN) {
        throw invalid_argument("Provided title is too long!");
    }

    if (description.empty()) {
        throw invalid_argument("Provided description is invalid!");
    }

    if (deadline.empty()) {
        throw invalid_argument("Provided deadline is invalid!");
    }

    if (type != "todo" && type != "missed" && type != "done") {
        throw invalid_argument("Provided type is invalid!");
    }
}

Task::Task(const Task& other) {
    this->title = other.title;
    this->description = other.description;
    this->deadline = other.deadline;
    this->type = other.type;
}

Task& Task::operator=(const Task& other) {
    if (this != &other) {
        this->title = other.title;
        this->description = other.description;
        this->deadline = other.deadline;
        this->type = other.type;
    } return *this;
}

const string& Task::getTitle() const {
    return this->title;
}

const string& Task::getDescription() const {
    return this->description;
}

const string& Task::getDeadline() const {
    return this->deadline;
}

const string& Task::getType() const {
    return this->type;
}

void Task::setType(const string& type) {
    if (type != "todo" && type != "missed" && type != "done") {
        throw invalid_argument("Provided type is invalid!");
    } this->type = type;
}

///////////////////////////////////////
// Implementation of TaskManager class
//////////////////////////////////////

TaskManager::TaskManager() {};

TaskManager::TaskManager(const vector<Task>& tasks) {
    vector<Task> todo, missed, done;

    for (Task task: tasks) {
        if (task.getType() == "todo") {
            todo.push_back(task);
        } else if (task.getType() == "missed") {
            missed.push_back(task);
        } else {
            done.push_back(task);
        }
    }

    this->tasks["todo"] = todo;
    this->tasks["missed"] = missed;
    this->tasks["done"] = done;
}

TaskManager& TaskManager::operator=(const TaskManager& other) {
    if (this != &other) {
        this->tasks = other.tasks;
    } return *this;
}

void TaskManager::addTask(const string& title, const string& description, const string& deadline, const string& type) {
    for (const Task& task: this->tasks[type]) {
        if (task.getTitle() == title) {
            throw invalid_argument("There is already a task with such a title!");
        }
    } this->tasks[type].push_back(Task(title, description, deadline, type));
}

void TaskManager::deleteTask(const string& title, const string& type) {
    int size = this->tasks[type].size();

    for (int i = 0; i < size; ++i) {
        if (this->tasks[type][i].getTitle() == title) {
            this->tasks[type].erase(this->tasks[type].begin() + i); return;
        }
    } throw invalid_argument("There is no task with such a title!");
}

void TaskManager::markTaskAsDone(const string& title) {
    size_t size = this->tasks["todo"].size();

    for (size_t i = 0; i < size; ++i) {
        if (this->tasks["todo"][i].getTitle() == title) {
            this->tasks["todo"][i].setType("done");
            this->tasks["done"].push_back(this->tasks["todo"][i]);
            this->tasks["todo"].erase(this->tasks["todo"].begin() + i);
            return;
        }
    } throw invalid_argument("There is no task with such a title!");
}

Task TaskManager::searchTask(const string& title, const string& type) {
    for (const auto& column: this->tasks) {
        for (const Task& task: column.second) {
            if (task.getTitle() == title) {
                return task;
            }
        }
    } throw invalid_argument("There is no task with such a title!");
}

// Not works
void TaskManager::sortTasks(const string& type, const string& way) {
    size_t days[this->tasks[type].size()];
    size_t months[this->tasks[type].size()];

    for (size_t i = 0; i < this->tasks[type].size(); ++i) {
        string deadline = this->tasks[type][i].getDeadline();
        string word;
        for (auto c: deadline) {
            if (c == '/') {
                days[i] = stoi(word);
                word = "";
            } else {
                word += c;
            }
        } months[i] = stoi(word);
    }

    if (way == "ascending") {
        for (size_t i = 0; i < this->tasks[type].size(); ++i) {
            for (size_t j = 0; j < this->tasks[type].size() - i - 1; ++j) {
                if (months[j] < months[j + 1]) {
                    swap(months[j], months[j + 1]);
                } else if (months[j] == months[j + 1]) {
                    if (days[j] < days[j + 1]) {
                        swap(days[j], days[j + 1]);
                    }
                }
            }
        }
    } else if (way == "descending") {
        for (size_t i = 0; i < this->tasks[type].size(); ++i) {
            for (size_t j = 0; j < this->tasks[type].size() - i - 1; ++j) {
                if (months[j] > months[j + 1]) {
                    swap(months[j], months[j + 1]);
                } else if (months[j] == months[j + 1]) {
                    if (days[j] > days[j + 1]) {
                        swap(days[j], days[j + 1]);
                    }
                }
            }
        }
    } else {
        throw invalid_argument("There is no such a way!");
    }
}

const unordered_map<string, vector<Task>>& TaskManager::getTasks() const {
    return this->tasks;
}
