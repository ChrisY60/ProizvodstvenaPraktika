/********************************************************************************
** Form generated from reading UI file 'taskframe.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKFRAME_H
#define UI_TASKFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TaskFrame
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *line;
    QFrame *titleBox;
    QVBoxLayout *verticalLayout_23;
    QLabel *heading;
    QFrame *bottomBox;
    QHBoxLayout *horizontalLayout_9;
    QFrame *deadlineBox;
    QHBoxLayout *horizontalLayout_10;
    QFrame *deadlineIcon;
    QLabel *deadline;
    QFrame *btnsBox;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *readMoreBtn;
    QPushButton *deleteBtn;
    QPushButton *doneBtn;

    void setupUi(QFrame *TaskFrame)
    {
        if (TaskFrame->objectName().isEmpty())
            TaskFrame->setObjectName(QString::fromUtf8("TaskFrame"));
        TaskFrame->resize(400, 120);
        TaskFrame->setMinimumSize(QSize(0, 120));
        TaskFrame->setMaximumSize(QSize(16777215, 120));
        TaskFrame->setStyleSheet(QString::fromUtf8("background-color: #1a1d25;\n"
"border-radius: 10px;\n"
"color: #ffffff;"));
        verticalLayout = new QVBoxLayout(TaskFrame);
        verticalLayout->setSpacing(5);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(10, 10, 10, 10);
        line = new QFrame(TaskFrame);
        line->setObjectName(QString::fromUtf8("line"));
        line->setMinimumSize(QSize(65, 12));
        line->setMaximumSize(QSize(16777215, 12));
        line->setStyleSheet(QString::fromUtf8("border-radius: 6px;\n"
"background-color: #26a588;"));
        line->setFrameShape(QFrame::NoFrame);
        line->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(line, 0, Qt::AlignLeft);

        titleBox = new QFrame(TaskFrame);
        titleBox->setObjectName(QString::fromUtf8("titleBox"));
        titleBox->setStyleSheet(QString::fromUtf8("border-radius: none;\n"
""));
        titleBox->setFrameShape(QFrame::NoFrame);
        titleBox->setFrameShadow(QFrame::Raised);
        verticalLayout_23 = new QVBoxLayout(titleBox);
        verticalLayout_23->setSpacing(0);
        verticalLayout_23->setObjectName(QString::fromUtf8("verticalLayout_23"));
        verticalLayout_23->setContentsMargins(0, 0, 0, 0);
        heading = new QLabel(titleBox);
        heading->setObjectName(QString::fromUtf8("heading"));
        QFont font;
        font.setPointSize(9);
        heading->setFont(font);
        heading->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_23->addWidget(heading);


        verticalLayout->addWidget(titleBox);

        bottomBox = new QFrame(TaskFrame);
        bottomBox->setObjectName(QString::fromUtf8("bottomBox"));
        bottomBox->setStyleSheet(QString::fromUtf8(""));
        bottomBox->setFrameShape(QFrame::NoFrame);
        bottomBox->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(bottomBox);
        horizontalLayout_9->setSpacing(10);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        deadlineBox = new QFrame(bottomBox);
        deadlineBox->setObjectName(QString::fromUtf8("deadlineBox"));
        deadlineBox->setStyleSheet(QString::fromUtf8("border-radius: 5px;\n"
"background-color: #08a7f3;"));
        deadlineBox->setFrameShape(QFrame::NoFrame);
        deadlineBox->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(deadlineBox);
        horizontalLayout_10->setSpacing(5);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(5, 5, 5, 5);
        deadlineIcon = new QFrame(deadlineBox);
        deadlineIcon->setObjectName(QString::fromUtf8("deadlineIcon"));
        deadlineIcon->setMinimumSize(QSize(25, 25));
        deadlineIcon->setMaximumSize(QSize(25, 25));
        deadlineIcon->setStyleSheet(QString::fromUtf8("background-image: url(../icons/clock.png);\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"border: none;	\n"
"background-color: transparent;"));
        deadlineIcon->setFrameShape(QFrame::NoFrame);
        deadlineIcon->setFrameShadow(QFrame::Raised);

        horizontalLayout_10->addWidget(deadlineIcon);

        deadline = new QLabel(deadlineBox);
        deadline->setObjectName(QString::fromUtf8("deadline"));
        QFont font1;
        font1.setPointSize(8);
        deadline->setFont(font1);
        deadline->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_10->addWidget(deadline);


        horizontalLayout_9->addWidget(deadlineBox, 0, Qt::AlignLeft);

        btnsBox = new QFrame(bottomBox);
        btnsBox->setObjectName(QString::fromUtf8("btnsBox"));
        btnsBox->setStyleSheet(QString::fromUtf8("border-radius: none;"));
        btnsBox->setFrameShape(QFrame::NoFrame);
        btnsBox->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(btnsBox);
        horizontalLayout_11->setSpacing(15);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(5, 5, 5, 5);
        readMoreBtn = new QPushButton(btnsBox);
        readMoreBtn->setObjectName(QString::fromUtf8("readMoreBtn"));
        readMoreBtn->setMinimumSize(QSize(25, 25));
        readMoreBtn->setMaximumSize(QSize(25, 25));
        readMoreBtn->setStyleSheet(QString::fromUtf8("background-image: url(../icons/readMore.png);\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"border: none;\n"
"background-color: transparent;"));

        horizontalLayout_11->addWidget(readMoreBtn);

        deleteBtn = new QPushButton(btnsBox);
        deleteBtn->setObjectName(QString::fromUtf8("deleteBtn"));
        deleteBtn->setMinimumSize(QSize(25, 25));
        deleteBtn->setMaximumSize(QSize(25, 25));
        deleteBtn->setStyleSheet(QString::fromUtf8("background-image: url(../icons/remove.png);\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"border: none;	\n"
"background-color: transparent;\n"
""));

        horizontalLayout_11->addWidget(deleteBtn);

        doneBtn = new QPushButton(btnsBox);
        doneBtn->setObjectName(QString::fromUtf8("doneBtn"));
        doneBtn->setMinimumSize(QSize(25, 25));
        doneBtn->setMaximumSize(QSize(25, 25));
        doneBtn->setStyleSheet(QString::fromUtf8("background-image: url(../icons/tick2.png);\n"
"background-position: center;\n"
"background-repeat: no-repeat;\n"
"border: none;	\n"
"background-color: transparent;\n"
""));

        horizontalLayout_11->addWidget(doneBtn);


        horizontalLayout_9->addWidget(btnsBox, 0, Qt::AlignRight);


        verticalLayout->addWidget(bottomBox);


        retranslateUi(TaskFrame);

        QMetaObject::connectSlotsByName(TaskFrame);
    } // setupUi

    void retranslateUi(QFrame *TaskFrame)
    {
        TaskFrame->setWindowTitle(QApplication::translate("TaskFrame", "Frame", nullptr));
        heading->setText(QApplication::translate("TaskFrame", "TextLabel", nullptr));
        deadline->setText(QApplication::translate("TaskFrame", "Today", nullptr));
        readMoreBtn->setText(QString());
        deleteBtn->setText(QString());
        doneBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TaskFrame: public Ui_TaskFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKFRAME_H
