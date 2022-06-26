#ifndef TASKFRAME_H
#define TASKFRAME_H

#include "mainwindow.h"
#include <QFrame>
#include <iostream>

using namespace std;

namespace Ui { class TaskFrame; }

class TaskFrame: public QFrame {
    Q_OBJECT
private slots:
    void on_deleteBtn_clicked();
    void on_doneBtn_clicked();
    void on_readMoreBtn_clicked();
private:
    Ui::TaskFrame* ui;
    MainWindow* parent;
    QString title;
    QString description;
    QString deadline;
    string type;
public:
    explicit TaskFrame(MainWindow* parent = nullptr, const QString& title = "", const QString& description = "", const QString& deadline = "", const string& type = "");
    ~TaskFrame();
};

#endif // TASKFRAME_H
