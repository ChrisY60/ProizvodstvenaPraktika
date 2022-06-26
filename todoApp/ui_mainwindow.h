/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *mainFrame;
    QVBoxLayout *verticalLayout_2;
    QFrame *topMenu;
    QHBoxLayout *horizontalLayout;
    QFrame *leftBtns;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *homeBtn;
    QPushButton *statisticsBtn;
    QPushButton *settingsBtn;
    QFrame *rightBtns;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *minimizeBtn;
    QPushButton *maximizeBtn;
    QPushButton *closeBtn;
    QFrame *contentBox;
    QVBoxLayout *verticalLayout_3;
    QStackedWidget *pagesStack;
    QWidget *homePage;
    QVBoxLayout *verticalLayout_4;
    QFrame *homeTitle;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QFrame *homeContent;
    QHBoxLayout *horizontalLayout_11;
    QFrame *todoFrame;
    QVBoxLayout *verticalLayout_6;
    QFrame *todoTopContent;
    QHBoxLayout *horizontalLayout_5;
    QLabel *todoTitle;
    QFrame *todoBtns;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *sortTodoBtn;
    QPushButton *addTodoBtn;
    QScrollArea *scrollArea;
    QWidget *todoContent;
    QVBoxLayout *verticalLayout_8;
    QFrame *todoBox;
    QVBoxLayout *todoBoxLayout;
    QFrame *missedFrame;
    QVBoxLayout *verticalLayout_7;
    QFrame *missedTopContent;
    QHBoxLayout *horizontalLayout_6;
    QLabel *missedTitle;
    QFrame *missedBtns;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *sortMissedBtn;
    QScrollArea *scrollArea_2;
    QWidget *missedContent;
    QVBoxLayout *verticalLayout_9;
    QFrame *missedBox;
    QVBoxLayout *missedBoxLayout;
    QFrame *doneFrame;
    QVBoxLayout *verticalLayout_10;
    QFrame *doneTopContent;
    QHBoxLayout *horizontalLayout_9;
    QLabel *doneTitle;
    QFrame *doneBtns;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *sortDoneBtn;
    QScrollArea *scrollArea_3;
    QWidget *doneContent;
    QVBoxLayout *verticalLayout_11;
    QFrame *doneBox;
    QVBoxLayout *doneBoxLayout;
    QWidget *statsPage;
    QWidget *settingsPage;
    QFrame *bottomBar;
    QHBoxLayout *horizontalLayout_4;
    QLabel *credits;
    QFrame *frameGrip;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1280, 720);
        MainWindow->setMinimumSize(QSize(1280, 720));
        MainWindow->setStyleSheet(QString::fromUtf8(""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	color: #ffffff;\n"
"	/*Add font*/\n"
"}\n"
"\n"
"#mainFrame {\n"
"	background-color: #0e1011;\n"
"	border: 2px solid #1a1e21;\n"
"}\n"
"\n"
"#topMenu {	\n"
"	background-color: #0e1011;\n"
"}\n"
"\n"
"#contentBox {\n"
"	border-top: 3px solid #1a1e21;\n"
"	border-bottom: 2px solid #1a1e21;\n"
"}\n"
"\n"
"#rightBtns QPushButton, #leftBtns QPushButton { \n"
"	background-position: center;\n"
"	background-repeat: no-repeat;\n"
"	border: none;\n"
"	background-color: transparent;\n"
"}\n"
"\n"
"#leftBtns QPushButton:hover, #minimizeBtn:hover, #maximizeBtn:hover { \n"
"	background-color: #08a7f3;\n"
"}\n"
"\n"
"#leftBtns QPushButton:pressed, #minimizeBtn:pressed, #maximizeBtn:pressed { \n"
"	background-color: #08a7f3;\n"
"}\n"
"\n"
"#closeBtn:hover {\n"
"	background-color: #ff0000;\n"
"}\n"
"\n"
"#closeBtn:pressed {\n"
"	background-color: #ff0000;\n"
"}\n"
"\n"
"#bottomBar { \n"
"	background-color: #0e1011;  \n"
"}\n"
"\n"
"#bottomBar QLabel { \n"
"	font-size: 11px; \n"
"	/*Add color*/ \n"
"	padding-left"
                        ": 10px; \n"
"	padding-right: 10px; \n"
"	padding-bottom: 2px; \n"
"}\n"
"\n"
"QScrollBar:horizontal {\n"
"	border: none;\n"
"	background: rgb(52, 59, 72);\n"
"	height: 8px;	\n"
"	margin: 0px 20px 0 20px;\n"
"	border-radius: 0px;\n"
"}\n"
"\n"
"QScrollBar::handle:horizontal {\n"
"	background: #2970ff;\n"
"	min-width: 25px;\n"
"	border-radius: 4px\n"
"}\n"
"\n"
"QScrollBar::add-line:horizontal {\n"
"    border: none;\n"
"	background: rgb(55, 63, 77);\n"
"	width: 20px;\n"
"	border-top-right-radius: 4px;\n"
"	border-bottom-right-radius: 4px;\n"
"	subcontrol-position: right;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::sub-line:horizontal {\n"
"    border: none;\n"
"    background: rgb(55, 63, 77);\n"
"	width: 20px;\n"
"	border-top-left-radius: 4px;\n"
" 	border-bottom-left-radius: 4px;\n"
" 	subcontrol-position: left;\n"
"	subcontrol-origin: margin;\n"
"}\n"
"\n"
"QScrollBar::up-arrow:horizontal, QScrollBar::down-arrow:horizontal {\n"
"     background: none;\n"
"}\n"
"\n"
"QScrollBar::add-page:horizo"
                        "ntal, QScrollBar::sub-page:horizontal {\n"
"     background: none;\n"
"}\n"
"\n"
" QScrollBar:vertical {\n"
"	border: none;\n"
"	background: rgb(52, 59, 72);\n"
"	width: 8px;\n"
"	margin: 21px 0 21px 0;\n"
"	border-radius: 0px;\n"
" }\n"
"\n"
" QScrollBar::handle:vertical {	\n"
"	background: #2970ff;\n"
"	min-height: 25px;\n"
"	border-radius: 4px\n"
" }\n"
"\n"
" QScrollBar::add-line:vertical {\n"
" 	border: none;\n"
"	background: rgb(55, 63, 77);\n"
"	height: 20px;\n"
"	border-bottom-left-radius: 4px;\n"
"	border-bottom-right-radius: 4px;\n"
"	subcontrol-position: bottom;\n"
" 	subcontrol-origin: margin;\n"
" }\n"
"\n"
" QScrollBar::sub-line:vertical {\n"
"	border: none;\n"
"    background: rgb(55, 63, 77);\n"
"	height: 20px;\n"
"	border-top-left-radius: 4px;\n"
"	border-top-right-radius: 4px;\n"
" 	subcontrol-position: top;\n"
" 	subcontrol-origin: margin;\n"
" }\n"
"\n"
" QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical {\n"
"     background: none;\n"
" }\n"
"\n"
" QScrollBar::add-page:vertica"
                        "l, QScrollBar::sub-page:vertical {\n"
"     background: none;\n"
" }\n"
""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        mainFrame = new QFrame(centralwidget);
        mainFrame->setObjectName(QString::fromUtf8("mainFrame"));
        mainFrame->setFrameShape(QFrame::NoFrame);
        mainFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(mainFrame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        topMenu = new QFrame(mainFrame);
        topMenu->setObjectName(QString::fromUtf8("topMenu"));
        topMenu->setMinimumSize(QSize(0, 50));
        topMenu->setMaximumSize(QSize(16777215, 50));
        topMenu->setFrameShape(QFrame::NoFrame);
        topMenu->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(topMenu);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        leftBtns = new QFrame(topMenu);
        leftBtns->setObjectName(QString::fromUtf8("leftBtns"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(leftBtns->sizePolicy().hasHeightForWidth());
        leftBtns->setSizePolicy(sizePolicy);
        leftBtns->setFrameShape(QFrame::NoFrame);
        leftBtns->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(leftBtns);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        homeBtn = new QPushButton(leftBtns);
        homeBtn->setObjectName(QString::fromUtf8("homeBtn"));
        homeBtn->setMinimumSize(QSize(70, 50));
        homeBtn->setMaximumSize(QSize(70, 50));
        homeBtn->setStyleSheet(QString::fromUtf8("background-image: url(../icons/home.png);\n"
""));

        horizontalLayout_3->addWidget(homeBtn);

        statisticsBtn = new QPushButton(leftBtns);
        statisticsBtn->setObjectName(QString::fromUtf8("statisticsBtn"));
        statisticsBtn->setMinimumSize(QSize(70, 50));
        statisticsBtn->setMaximumSize(QSize(70, 50));
        statisticsBtn->setStyleSheet(QString::fromUtf8("background-image: url(../icons/statistics.png);\n"
""));

        horizontalLayout_3->addWidget(statisticsBtn);

        settingsBtn = new QPushButton(leftBtns);
        settingsBtn->setObjectName(QString::fromUtf8("settingsBtn"));
        settingsBtn->setMinimumSize(QSize(70, 50));
        settingsBtn->setMaximumSize(QSize(70, 50));
        settingsBtn->setStyleSheet(QString::fromUtf8("background-image: url(../icons/settings.png);\n"
""));

        horizontalLayout_3->addWidget(settingsBtn);


        horizontalLayout->addWidget(leftBtns, 0, Qt::AlignLeft);

        rightBtns = new QFrame(topMenu);
        rightBtns->setObjectName(QString::fromUtf8("rightBtns"));
        rightBtns->setFrameShape(QFrame::NoFrame);
        rightBtns->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(rightBtns);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        minimizeBtn = new QPushButton(rightBtns);
        minimizeBtn->setObjectName(QString::fromUtf8("minimizeBtn"));
        minimizeBtn->setMinimumSize(QSize(70, 50));
        minimizeBtn->setMaximumSize(QSize(70, 50));
        minimizeBtn->setStyleSheet(QString::fromUtf8("background-image: url(../icons/minimize.png);\n"
""));

        horizontalLayout_2->addWidget(minimizeBtn);

        maximizeBtn = new QPushButton(rightBtns);
        maximizeBtn->setObjectName(QString::fromUtf8("maximizeBtn"));
        maximizeBtn->setMinimumSize(QSize(70, 50));
        maximizeBtn->setMaximumSize(QSize(70, 50));
        maximizeBtn->setStyleSheet(QString::fromUtf8("background-image: url(../icons/maximize.png);"));

        horizontalLayout_2->addWidget(maximizeBtn);

        closeBtn = new QPushButton(rightBtns);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));
        closeBtn->setMinimumSize(QSize(70, 50));
        closeBtn->setMaximumSize(QSize(70, 50));
        closeBtn->setStyleSheet(QString::fromUtf8("background-image: url(../icons/close.png);\n"
""));

        horizontalLayout_2->addWidget(closeBtn);


        horizontalLayout->addWidget(rightBtns, 0, Qt::AlignRight);


        verticalLayout_2->addWidget(topMenu);

        contentBox = new QFrame(mainFrame);
        contentBox->setObjectName(QString::fromUtf8("contentBox"));
        contentBox->setStyleSheet(QString::fromUtf8(""));
        contentBox->setFrameShape(QFrame::NoFrame);
        contentBox->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(contentBox);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(10, 10, 10, 10);
        pagesStack = new QStackedWidget(contentBox);
        pagesStack->setObjectName(QString::fromUtf8("pagesStack"));
        pagesStack->setStyleSheet(QString::fromUtf8("background: transparent;"));
        homePage = new QWidget();
        homePage->setObjectName(QString::fromUtf8("homePage"));
        homePage->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(homePage);
        verticalLayout_4->setSpacing(15);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(20, 20, 20, 20);
        homeTitle = new QFrame(homePage);
        homeTitle->setObjectName(QString::fromUtf8("homeTitle"));
        homeTitle->setMinimumSize(QSize(0, 70));
        homeTitle->setMaximumSize(QSize(16777215, 70));
        homeTitle->setStyleSheet(QString::fromUtf8("background-color: #1d232a;\n"
"border-radius: 10px;\n"
"\n"
""));
        homeTitle->setFrameShape(QFrame::NoFrame);
        homeTitle->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(homeTitle);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(homeTitle);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8(""));
        label->setAlignment(Qt::AlignCenter);
        label->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        verticalLayout_5->addWidget(label);


        verticalLayout_4->addWidget(homeTitle);

        homeContent = new QFrame(homePage);
        homeContent->setObjectName(QString::fromUtf8("homeContent"));
        homeContent->setFrameShape(QFrame::NoFrame);
        homeContent->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(homeContent);
        horizontalLayout_11->setSpacing(15);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        todoFrame = new QFrame(homeContent);
        todoFrame->setObjectName(QString::fromUtf8("todoFrame"));
        todoFrame->setStyleSheet(QString::fromUtf8("background-color: #1d232a;\n"
"border-radius: 10px;\n"
"\n"
""));
        todoFrame->setFrameShape(QFrame::NoFrame);
        todoFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(todoFrame);
        verticalLayout_6->setSpacing(10);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(10, 10, 10, 10);
        todoTopContent = new QFrame(todoFrame);
        todoTopContent->setObjectName(QString::fromUtf8("todoTopContent"));
        todoTopContent->setMaximumSize(QSize(16777215, 40));
        todoTopContent->setStyleSheet(QString::fromUtf8("border: none;"));
        todoTopContent->setFrameShape(QFrame::NoFrame);
        todoTopContent->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(todoTopContent);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        todoTitle = new QLabel(todoTopContent);
        todoTitle->setObjectName(QString::fromUtf8("todoTitle"));
        todoTitle->setMaximumSize(QSize(16777215, 30));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(false);
        todoTitle->setFont(font1);
        todoTitle->setStyleSheet(QString::fromUtf8("padding-left: 10px;\n"
"color: rgb(255, 255, 255);"));
        todoTitle->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_5->addWidget(todoTitle, 0, Qt::AlignLeft);

        todoBtns = new QFrame(todoTopContent);
        todoBtns->setObjectName(QString::fromUtf8("todoBtns"));
        todoBtns->setFrameShape(QFrame::NoFrame);
        todoBtns->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(todoBtns);
        horizontalLayout_7->setSpacing(15);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        sortTodoBtn = new QPushButton(todoBtns);
        sortTodoBtn->setObjectName(QString::fromUtf8("sortTodoBtn"));
        sortTodoBtn->setMinimumSize(QSize(30, 30));
        sortTodoBtn->setMaximumSize(QSize(30, 30));
        sortTodoBtn->setStyleSheet(QString::fromUtf8("background-position: center;\n"
"background-repeat: no-repeat;\n"
"border: none;	"));

        horizontalLayout_7->addWidget(sortTodoBtn);

        addTodoBtn = new QPushButton(todoBtns);
        addTodoBtn->setObjectName(QString::fromUtf8("addTodoBtn"));
        addTodoBtn->setMinimumSize(QSize(30, 30));
        addTodoBtn->setMaximumSize(QSize(30, 30));
        addTodoBtn->setStyleSheet(QString::fromUtf8("background-position: center;\n"
"background-repeat: no-repeat;\n"
"border: none;\n"
"background-image: url(../icons/plus.png);"));

        horizontalLayout_7->addWidget(addTodoBtn);


        horizontalLayout_5->addWidget(todoBtns, 0, Qt::AlignRight);


        verticalLayout_6->addWidget(todoTopContent);

        scrollArea = new QScrollArea(todoFrame);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        todoContent = new QWidget();
        todoContent->setObjectName(QString::fromUtf8("todoContent"));
        todoContent->setGeometry(QRect(0, 0, 375, 426));
        verticalLayout_8 = new QVBoxLayout(todoContent);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        todoBox = new QFrame(todoContent);
        todoBox->setObjectName(QString::fromUtf8("todoBox"));
        todoBox->setFrameShape(QFrame::NoFrame);
        todoBox->setFrameShadow(QFrame::Raised);
        todoBoxLayout = new QVBoxLayout(todoBox);
        todoBoxLayout->setSpacing(10);
        todoBoxLayout->setObjectName(QString::fromUtf8("todoBoxLayout"));
        todoBoxLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout_8->addWidget(todoBox, 0, Qt::AlignTop);

        scrollArea->setWidget(todoContent);

        verticalLayout_6->addWidget(scrollArea);


        horizontalLayout_11->addWidget(todoFrame);

        missedFrame = new QFrame(homeContent);
        missedFrame->setObjectName(QString::fromUtf8("missedFrame"));
        missedFrame->setStyleSheet(QString::fromUtf8("background-color: #1d232a;\n"
"border-radius: 10px;"));
        missedFrame->setFrameShape(QFrame::NoFrame);
        missedFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(missedFrame);
        verticalLayout_7->setSpacing(10);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(10, 10, 10, 10);
        missedTopContent = new QFrame(missedFrame);
        missedTopContent->setObjectName(QString::fromUtf8("missedTopContent"));
        missedTopContent->setMaximumSize(QSize(16777215, 40));
        missedTopContent->setStyleSheet(QString::fromUtf8("border: none;"));
        missedTopContent->setFrameShape(QFrame::NoFrame);
        missedTopContent->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(missedTopContent);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        missedTitle = new QLabel(missedTopContent);
        missedTitle->setObjectName(QString::fromUtf8("missedTitle"));
        missedTitle->setMaximumSize(QSize(16777215, 30));
        missedTitle->setStyleSheet(QString::fromUtf8("padding-left: 10px;\n"
"color: rgb(255, 255, 255);"));
        missedTitle->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_6->addWidget(missedTitle, 0, Qt::AlignLeft);

        missedBtns = new QFrame(missedTopContent);
        missedBtns->setObjectName(QString::fromUtf8("missedBtns"));
        missedBtns->setFrameShape(QFrame::NoFrame);
        missedBtns->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(missedBtns);
        horizontalLayout_8->setSpacing(15);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        sortMissedBtn = new QPushButton(missedBtns);
        sortMissedBtn->setObjectName(QString::fromUtf8("sortMissedBtn"));
        sortMissedBtn->setMinimumSize(QSize(30, 30));
        sortMissedBtn->setMaximumSize(QSize(30, 30));
        sortMissedBtn->setStyleSheet(QString::fromUtf8("background-position: center;\n"
"background-repeat: no-repeat;\n"
"border: none;	"));

        horizontalLayout_8->addWidget(sortMissedBtn);


        horizontalLayout_6->addWidget(missedBtns, 0, Qt::AlignRight);


        verticalLayout_7->addWidget(missedTopContent);

        scrollArea_2 = new QScrollArea(missedFrame);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        missedContent = new QWidget();
        missedContent->setObjectName(QString::fromUtf8("missedContent"));
        missedContent->setGeometry(QRect(0, 0, 376, 426));
        verticalLayout_9 = new QVBoxLayout(missedContent);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        missedBox = new QFrame(missedContent);
        missedBox->setObjectName(QString::fromUtf8("missedBox"));
        missedBox->setFrameShape(QFrame::NoFrame);
        missedBox->setFrameShadow(QFrame::Raised);
        missedBoxLayout = new QVBoxLayout(missedBox);
        missedBoxLayout->setSpacing(10);
        missedBoxLayout->setObjectName(QString::fromUtf8("missedBoxLayout"));
        missedBoxLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout_9->addWidget(missedBox, 0, Qt::AlignTop);

        scrollArea_2->setWidget(missedContent);

        verticalLayout_7->addWidget(scrollArea_2);


        horizontalLayout_11->addWidget(missedFrame);

        doneFrame = new QFrame(homeContent);
        doneFrame->setObjectName(QString::fromUtf8("doneFrame"));
        doneFrame->setStyleSheet(QString::fromUtf8("background-color: #1d232a;\n"
"border-radius: 10px;"));
        doneFrame->setFrameShape(QFrame::NoFrame);
        doneFrame->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(doneFrame);
        verticalLayout_10->setSpacing(10);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(10, 10, 10, 10);
        doneTopContent = new QFrame(doneFrame);
        doneTopContent->setObjectName(QString::fromUtf8("doneTopContent"));
        doneTopContent->setMaximumSize(QSize(16777215, 40));
        doneTopContent->setStyleSheet(QString::fromUtf8("border: none;"));
        doneTopContent->setFrameShape(QFrame::NoFrame);
        doneTopContent->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(doneTopContent);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        doneTitle = new QLabel(doneTopContent);
        doneTitle->setObjectName(QString::fromUtf8("doneTitle"));
        doneTitle->setMaximumSize(QSize(16777215, 30));
        doneTitle->setStyleSheet(QString::fromUtf8("padding-left: 10px;\n"
"color: rgb(255, 255, 255);"));
        doneTitle->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_9->addWidget(doneTitle, 0, Qt::AlignLeft);

        doneBtns = new QFrame(doneTopContent);
        doneBtns->setObjectName(QString::fromUtf8("doneBtns"));
        doneBtns->setFrameShape(QFrame::NoFrame);
        doneBtns->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(doneBtns);
        horizontalLayout_10->setSpacing(15);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        sortDoneBtn = new QPushButton(doneBtns);
        sortDoneBtn->setObjectName(QString::fromUtf8("sortDoneBtn"));
        sortDoneBtn->setMinimumSize(QSize(30, 30));
        sortDoneBtn->setMaximumSize(QSize(30, 30));
        sortDoneBtn->setStyleSheet(QString::fromUtf8("background-position: center;\n"
"background-repeat: no-repeat;\n"
"border: none;	"));

        horizontalLayout_10->addWidget(sortDoneBtn);


        horizontalLayout_9->addWidget(doneBtns, 0, Qt::AlignRight);


        verticalLayout_10->addWidget(doneTopContent);

        scrollArea_3 = new QScrollArea(doneFrame);
        scrollArea_3->setObjectName(QString::fromUtf8("scrollArea_3"));
        scrollArea_3->setWidgetResizable(true);
        doneContent = new QWidget();
        doneContent->setObjectName(QString::fromUtf8("doneContent"));
        doneContent->setGeometry(QRect(0, 0, 375, 426));
        verticalLayout_11 = new QVBoxLayout(doneContent);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        doneBox = new QFrame(doneContent);
        doneBox->setObjectName(QString::fromUtf8("doneBox"));
        doneBox->setFrameShape(QFrame::NoFrame);
        doneBox->setFrameShadow(QFrame::Raised);
        doneBoxLayout = new QVBoxLayout(doneBox);
        doneBoxLayout->setSpacing(10);
        doneBoxLayout->setObjectName(QString::fromUtf8("doneBoxLayout"));
        doneBoxLayout->setContentsMargins(0, 0, 0, 0);

        verticalLayout_11->addWidget(doneBox, 0, Qt::AlignTop);

        scrollArea_3->setWidget(doneContent);

        verticalLayout_10->addWidget(scrollArea_3);


        horizontalLayout_11->addWidget(doneFrame);


        verticalLayout_4->addWidget(homeContent);

        pagesStack->addWidget(homePage);
        statsPage = new QWidget();
        statsPage->setObjectName(QString::fromUtf8("statsPage"));
        pagesStack->addWidget(statsPage);
        settingsPage = new QWidget();
        settingsPage->setObjectName(QString::fromUtf8("settingsPage"));
        pagesStack->addWidget(settingsPage);

        verticalLayout_3->addWidget(pagesStack);


        verticalLayout_2->addWidget(contentBox);

        bottomBar = new QFrame(mainFrame);
        bottomBar->setObjectName(QString::fromUtf8("bottomBar"));
        bottomBar->setMinimumSize(QSize(0, 30));
        bottomBar->setMaximumSize(QSize(16777215, 30));
        bottomBar->setFrameShape(QFrame::NoFrame);
        bottomBar->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(bottomBar);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        credits = new QLabel(bottomBar);
        credits->setObjectName(QString::fromUtf8("credits"));
        credits->setTextFormat(Qt::PlainText);
        credits->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        horizontalLayout_4->addWidget(credits, 0, Qt::AlignLeft);

        frameGrip = new QFrame(bottomBar);
        frameGrip->setObjectName(QString::fromUtf8("frameGrip"));
        frameGrip->setMaximumSize(QSize(30, 30));
        frameGrip->setFrameShape(QFrame::NoFrame);
        frameGrip->setFrameShadow(QFrame::Raised);

        horizontalLayout_4->addWidget(frameGrip);


        verticalLayout_2->addWidget(bottomBar);


        verticalLayout->addWidget(mainFrame);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        pagesStack->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        homeBtn->setText(QString());
        statisticsBtn->setText(QString());
        settingsBtn->setText(QString());
        minimizeBtn->setText(QString());
        maximizeBtn->setText(QString());
        closeBtn->setText(QString());
        label->setText(QApplication::translate("MainWindow", "Task Manager", nullptr));
        todoTitle->setText(QApplication::translate("MainWindow", "To-Do", nullptr));
        sortTodoBtn->setText(QApplication::translate("MainWindow", "Sort", nullptr));
        addTodoBtn->setText(QString());
        missedTitle->setText(QApplication::translate("MainWindow", "Missed", nullptr));
        sortMissedBtn->setText(QApplication::translate("MainWindow", "Sort", nullptr));
        doneTitle->setText(QApplication::translate("MainWindow", "Done", nullptr));
        sortDoneBtn->setText(QApplication::translate("MainWindow", "Sort", nullptr));
        credits->setText(QApplication::translate("MainWindow", "By: Kristiyan Yankov, Kristiyan Bogdanov & Simeon Angelov", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
