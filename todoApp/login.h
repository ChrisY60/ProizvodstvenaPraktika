#ifndef LOGIN_H
#define LOGIN_H

#include "filemanager.h"
#include "dataprotection.h"
#include <iostream>
#include <exception>
#include <ctime>

using namespace std;

void printMenu();

void validateUsername(const string& username);
void validatePassword(const string& password);
string generateID(const string& username);

User logIn(FileManager& fileManager);
User registerUser(FileManager& fileManager);
User startApp(FileManager& fileManager);

#endif // LOGIN_H
