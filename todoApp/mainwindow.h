#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "filemanager.h"
#include <QMainWindow>
#include <QMessageBox>
#include <iostream>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow: public QMainWindow {
    Q_OBJECT
private slots:
    void on_closeBtn_clicked();
    void on_maximizeBtn_clicked();
    void on_minimizeBtn_clicked();
    void on_addTodoBtn_clicked();
    //void on_sortTodoBtn_clicked();
private:
    Ui::MainWindow* ui;

    FileManager fileManager;

    void addTask(const string& title, const string& description, const string& deadline, const string& type);
public:
    User user;
    MainWindow(QWidget* parent = nullptr, User user = User("", "", 0, {}), FileManager fileManager = FileManager(""));
    ~MainWindow();
};

#endif // MAINWINDOW_H
