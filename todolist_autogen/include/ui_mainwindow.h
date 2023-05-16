/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButtonDel;
    QLabel *labelYourTask;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 609);
        MainWindow->setStyleSheet(QString::fromUtf8("QWidget {\n"
"	background:rgb(192, 192, 192);\n"
"	font-size: 100%;\n"
"}\n"
"\n"
"QLabel {\n"
"	border:2px solid gray;\n"
"	background:rgb(105, 105, 105);\n"
"	font: 700 24pt ;\n"
"}\n"
"\n"
"QListWidget {\n"
"	border:2px solid gray;\n"
"	background:rgb(105, 105, 105);\n"
"	font: 700 24pt ;\n"
"}\n"
"\n"
"\n"
"QLineEdit {\n"
"	border:2px solid gray;\n"
"	border-radius:15px;\n"
"	background:rgb(105, 105, 105);\n"
"	font: 700 18pt ;\n"
"}\n"
"\n"
"\n"
"QPushButton#pushButtonDel{\n"
"	border:2px solid gray;\n"
"	border-radius:15px;\n"
"	background:rgb(73, 77, 78);\n"
"}\n"
"QPushButton#pushButtonDel:hover {\n"
"	border:2px solid gray;\n"
"	border-radius:15px;\n"
"	background:rgb(144, 52, 53);\n"
"}\n"
"\n"
"\n"
"QPushButton#pushButton{\n"
"	border:2px solid gray;\n"
"	border-radius:15px;\n"
"	background:rgb(73, 77, 78);\n"
"}\n"
"QPushButton#pushButton:hover {\n"
"	border:2px solid gray;\n"
"	border-radius:15px;\n"
"	background:rgb(53, 132, 41);\n"
"}\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 60, 781, 471));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(10, 540, 491, 41));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(510, 540, 100, 41));
        pushButtonDel = new QPushButton(centralwidget);
        pushButtonDel->setObjectName("pushButtonDel");
        pushButtonDel->setGeometry(QRect(690, 540, 100, 41));
        labelYourTask = new QLabel(centralwidget);
        labelYourTask->setObjectName("labelYourTask");
        labelYourTask->setGeometry(QRect(10, 10, 781, 51));
        MainWindow->setCentralWidget(centralwidget);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        QWidget::setTabOrder(lineEdit, listWidget);
        QWidget::setTabOrder(listWidget, pushButtonDel);
        QWidget::setTabOrder(pushButtonDel, pushButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lineEdit->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        pushButtonDel->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        labelYourTask->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
