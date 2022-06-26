#include "taskframe.h"
#include "ui_taskframe.h"

TaskFrame::TaskFrame(MainWindow* parent, const QString& title, const QString& description, const QString& deadline, const string& type)
:QFrame(parent)
,ui(new Ui::TaskFrame)
,parent(parent)
,title(title)
,description(description)
,type(type)
{
    ui->setupUi(this);
    this->ui->heading->setText(title);
    this->ui->deadline->setText(deadline);

    if (type != "todo") {
        this->ui->doneBtn->deleteLater();
    }
}

TaskFrame::~TaskFrame() {
    delete ui;
}

void TaskFrame::on_deleteBtn_clicked() {
    this->parent->user.deleteTask(this->title.toStdString(), this->type);
    this->deleteLater();
}

void TaskFrame::on_doneBtn_clicked() {
    this->parent->user.markTaskAsDone(this->title.toStdString());
    QFrame* doneBox = this->nativeParentWidget()->findChild<QFrame*>("doneBox");
    doneBox->layout()->addWidget(new TaskFrame(this->parent, this->title, this->description, this->deadline, "done"));
    this->deleteLater();
}

void TaskFrame::on_readMoreBtn_clicked() {
    QMessageBox::information(
                this,
                "To-Do Desktop App",
                "The task information was displayed in the console!");

    system("clear");
    cout << "*******************************************************" << endl
         << "||                     TASK INFO                     ||" << endl
         << "*******************************************************" << endl
         << "         Title: " << this->title.toStdString() << endl
         << "         Description: " << this->description.toStdString() << endl
         << "         Deadline: " << this->deadline.toStdString() << endl
         << "         Type: " << this->title.toStdString() << endl;
}

