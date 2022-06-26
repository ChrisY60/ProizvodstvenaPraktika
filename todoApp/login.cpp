#include <login.h>

void printMenu() {
    cout << "*********************************************************" << endl
        << "||               WELCOME TO TASK MANAGER               ||" << endl
        << "||                                                     ||" << endl
        << "||  Created by: K. Yankov, K. Bogdanov and S. Angelov  ||" << endl
        << "*********************************************************" << endl
        << "                     [1]: LOG IN" << endl
        << "                     [2]: REGISTER" << endl;
}

void validateUsername(const string& username) {
    size_t usernameLen = username.length();

    if (usernameLen > 8 || usernameLen < 3) {
        throw invalid_argument("Username must be between 3 and 8 characters!");
    }

    for (size_t i = 0; i < usernameLen; ++i) {
        if (username[i] == ' ' || username[i] == '/') {
            throw invalid_argument("Username must not contains spaces and '/'!");
        }
    }
}

void validatePassword(const string& password){
    bool hasUpper = false, hasLower = false, hasDigit = false;
    size_t passwordLen = password.length();

    if(password.length() < 8 || password.length() > 20){
        throw invalid_argument("Password must be between 8 and 20 characters!");
    }

    for (size_t i = 0; i < passwordLen; ++i) {
        if (islower(password[i]) != 0) {
            hasLower = true;
        } else if(isupper(password[i]) != 0){
            hasUpper = true;
        } else if(isdigit(password[i]) != 0){
            hasDigit = true;
        }
    }

    if(!hasDigit || !hasLower || !hasUpper){
        throw invalid_argument("Password must contain an upper letter, a lower letter and a number!");
    }
}

string generateID(const string& username){
    srand(time(NULL));

    string characters = "1234567890qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM";
    string id = "aaaaaaaaaaaaaaaa";
    size_t usernameLen = username.length();

    for (size_t i = 0; i < usernameLen; ++i) {
        id[i] = username[i];
    }

    id[usernameLen] = '/';

    for (size_t i = usernameLen + 1; i < 16; ++i) {
        id[i] = characters[rand() % 62];
    }

    return id;
}

User logIn(FileManager& fileManager) {
    string username, password;

    cout << "*******************************************************" << endl
         << "||                      LOG IN                       ||" << endl
         << "*******************************************************" << endl;
    cout << "         Enter username: "; cin >> username;
    cout << "         Enter password: "; cin >> password;

    User user = fileManager.readUser(username);

    if (user.getPassword() == hashPassword(password, user.getId())) {
        return user;
    } else {
        throw invalid_argument("Wrong password!");
    }

}

User registerUser(FileManager& fileManager) {
    string username, password, id;

    cout << "*******************************************************" << endl
         << "||                    REGISTER                       ||" << endl
         << "*******************************************************" << endl;
    cout << "         Enter username: "; cin >> username;
    cout << "         Enter password: "; cin >> password;

    validateUsername(username);
    validatePassword(password);

    if (fileManager.checkUser(username)) {
        throw invalid_argument("Username is taken");
    }

    id = generateID(username);

    return User(id, username, hashPassword(password, id), {});
}

User startApp(FileManager& fileManager) {
    while (true) {
        printMenu();
        int option; cout << "Choose option: "; cin >> option;
        system("clear");

        try {
            if (option == 1) {
               return logIn(fileManager);
            } else if (option == 2) {
                return registerUser(fileManager);
            }
        } catch(exception& e) {
            cout << e.what() << endl;
        }

        cout << "\n";
    }
}
