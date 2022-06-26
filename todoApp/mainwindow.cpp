#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "taskframe.h"

MainWindow::MainWindow(QWidget *parent, User user, FileManager fileManager)
:QMainWindow(parent)
,ui(new Ui::MainWindow)
,fileManager(fileManager)
,user(user)
{
    ui->setupUi(this);
//    this->setWindowFlags(Qt::FramelessWindowHint);
//    this->setAttribute(Qt::WA_TranslucentBackground);

    for (const auto& column: this->user.getTasks()) {
        const string widgetName = column.first + "Box";
        QFrame* taskBox = this->findChild<QFrame*>(QString::fromUtf8(widgetName.data(), widgetName.size()));

        for (const Task& task: column.second) {
            const QString title = QString::fromUtf8(task.getTitle().data(), task.getTitle().size());
            const QString description = QString::fromUtf8(task.getDescription().data(), task.getDescription().size());
            const QString deadline = QString::fromUtf8(task.getDeadline().data(), task.getDeadline().size());

            TaskFrame* taskWidget = new TaskFrame(this, title, description, deadline, task.getType());
            taskBox->layout()->addWidget(taskWidget);
        }
    }
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::on_closeBtn_clicked() {
    fileManager.updateUsers(user);
    this->close();
}

void MainWindow::on_maximizeBtn_clicked() {
    if (this->isMaximized()) {
        this->showNormal();
    } else {
        this->showMaximized();
    }
}

void MainWindow::on_minimizeBtn_clicked() {
    this->showMinimized();
}

void MainWindow::on_addTodoBtn_clicked() {
    QMessageBox::information(
        this,
        "To-Do Desktop App",
        "Enter your new To-Do task from the console!");

    string title, description, deadline;

    system("clear");
    cout << "*******************************************************" << endl
         << "||                     TASK INFO                     ||" << endl
         << "*******************************************************" << endl;
    cout << "       Enter task title: "; cin >> title;
    cout << "       Enter task description: "; cin >> description;
    cout << "       Enter task deadline: "; cin >> deadline;

    try {
        this->addTask(title, description, deadline, "todo");
    } catch(exception& e) {
        cout << e.what() << endl;
    }
}

void MainWindow::addTask(const string& title, const string& description, const string& deadline, const string& type) {
    this->user.addTask(title, description, deadline, type);

    const QString qtitle = QString::fromUtf8(title.data(), title.size());
    const QString qdescription = QString::fromUtf8(description.data(), description.size());
    const QString qdeadline = QString::fromUtf8(deadline.data(), deadline.size());

    const string widgetName = type + "Box";
    QFrame* todoBox = this->findChild<QFrame*>(QString::fromUtf8(widgetName.data(), widgetName.size()));
    TaskFrame* todo = new TaskFrame(this, qtitle, qdescription, qdeadline, type);
    todoBox->layout()->addWidget(todo);
}

//void MainWindow::on_sortTodoBtn_clicked() {
//    this->user.sortTasks("todo", "descending");

//    for (const auto& column: this->user.getTasks()) {

//        for (const Task& task: column.second) {
//           cout << task.getDeadline() << endl;
//        }
//    }
//}

