/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *first_label;
    QLabel *second_label;
    QLineEdit *first_txt;
    QLineEdit *second_txt;
    QPushButton *add_button;
    QPushButton *subtract_button;
    QPushButton *multiply_button;
    QPushButton *divide_button;
    QLabel *result_label;
    QLineEdit *result_txt;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(691, 306);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        first_label = new QLabel(centralwidget);
        first_label->setObjectName("first_label");
        first_label->setGeometry(QRect(80, 80, 101, 41));
        second_label = new QLabel(centralwidget);
        second_label->setObjectName("second_label");
        second_label->setGeometry(QRect(80, 140, 111, 41));
        first_txt = new QLineEdit(centralwidget);
        first_txt->setObjectName("first_txt");
        first_txt->setGeometry(QRect(200, 90, 113, 24));
        second_txt = new QLineEdit(centralwidget);
        second_txt->setObjectName("second_txt");
        second_txt->setGeometry(QRect(200, 150, 113, 24));
        add_button = new QPushButton(centralwidget);
        add_button->setObjectName("add_button");
        add_button->setGeometry(QRect(260, 230, 31, 31));
        subtract_button = new QPushButton(centralwidget);
        subtract_button->setObjectName("subtract_button");
        subtract_button->setGeometry(QRect(320, 230, 31, 31));
        multiply_button = new QPushButton(centralwidget);
        multiply_button->setObjectName("multiply_button");
        multiply_button->setGeometry(QRect(380, 230, 31, 31));
        divide_button = new QPushButton(centralwidget);
        divide_button->setObjectName("divide_button");
        divide_button->setGeometry(QRect(440, 230, 31, 31));
        result_label = new QLabel(centralwidget);
        result_label->setObjectName("result_label");
        result_label->setGeometry(QRect(380, 110, 101, 41));
        result_txt = new QLineEdit(centralwidget);
        result_txt->setObjectName("result_txt");
        result_txt->setGeometry(QRect(450, 120, 113, 24));
        result_txt->setReadOnly(true);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        first_label->setText(QCoreApplication::translate("MainWindow", "First number:", nullptr));
        second_label->setText(QCoreApplication::translate("MainWindow", "Second number:", nullptr));
        add_button->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        subtract_button->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        multiply_button->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        divide_button->setText(QCoreApplication::translate("MainWindow", "\\", nullptr));
        result_label->setText(QCoreApplication::translate("MainWindow", "Result:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
