#include "mainwindow.h"
#include "login.cpp"
#include <QApplication>

int main(int argc, char *argv[]) {
    FileManager fileManager("db.json");
    User user = startApp(fileManager);

    QApplication a(argc, argv);
    MainWindow w(nullptr, user, fileManager);
    w.show();
    return a.exec();
}
