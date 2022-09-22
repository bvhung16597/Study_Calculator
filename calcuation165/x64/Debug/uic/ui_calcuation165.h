/********************************************************************************
** Form generated from reading UI file 'calcuation165.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCUATION165_H
#define UI_CALCUATION165_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calcuation165Class
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QGridLayout *gridLayout;
    QPushButton *pushButton_minus;
    QPushButton *pushButton_7;
    QPushButton *pushButton_plus;
    QPushButton *pushButton_8;
    QPushButton *pushButton_1;
    QPushButton *pushButton_9;
    QPushButton *pushButton_0;
    QPushButton *pushButton_6;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_multiply;
    QPushButton *pushButton_2;
    QPushButton *pushButton_point;
    QPushButton *pushButton_divide;
    QPushButton *pushButton_squared;
    QPushButton *pushButton_negative;
    QPushButton *pushButton_4;
    QPushButton *pushButton_equals;
    QPushButton *pushButton_5;
    QPushButton *pushButton_3;
    QPushButton *pushButton_sqrt;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *calcuation165Class)
    {
        if (calcuation165Class->objectName().isEmpty())
            calcuation165Class->setObjectName(QString::fromUtf8("calcuation165Class"));
        calcuation165Class->resize(394, 426);
        calcuation165Class->setLayoutDirection(Qt::RightToLeft);
        centralWidget = new QWidget(calcuation165Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_minus = new QPushButton(centralWidget);
        pushButton_minus->setObjectName(QString::fromUtf8("pushButton_minus"));

        gridLayout->addWidget(pushButton_minus, 4, 0, 1, 1);

        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(pushButton_7, 3, 1, 1, 1);

        pushButton_plus = new QPushButton(centralWidget);
        pushButton_plus->setObjectName(QString::fromUtf8("pushButton_plus"));

        gridLayout->addWidget(pushButton_plus, 5, 0, 1, 1);

        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        gridLayout->addWidget(pushButton_8, 3, 2, 1, 1);

        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));

        gridLayout->addWidget(pushButton_1, 5, 1, 1, 1);

        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        gridLayout->addWidget(pushButton_9, 3, 4, 1, 1);

        pushButton_0 = new QPushButton(centralWidget);
        pushButton_0->setObjectName(QString::fromUtf8("pushButton_0"));

        gridLayout->addWidget(pushButton_0, 7, 2, 1, 1);

        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 4, 4, 1, 1);

        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));

        gridLayout->addWidget(pushButton_clear, 7, 4, 1, 1);

        pushButton_multiply = new QPushButton(centralWidget);
        pushButton_multiply->setObjectName(QString::fromUtf8("pushButton_multiply"));

        gridLayout->addWidget(pushButton_multiply, 3, 0, 1, 1);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 5, 2, 1, 1);

        pushButton_point = new QPushButton(centralWidget);
        pushButton_point->setObjectName(QString::fromUtf8("pushButton_point"));

        gridLayout->addWidget(pushButton_point, 7, 1, 1, 1);

        pushButton_divide = new QPushButton(centralWidget);
        pushButton_divide->setObjectName(QString::fromUtf8("pushButton_divide"));

        gridLayout->addWidget(pushButton_divide, 2, 0, 1, 1);

        pushButton_squared = new QPushButton(centralWidget);
        pushButton_squared->setObjectName(QString::fromUtf8("pushButton_squared"));
        pushButton_squared->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(pushButton_squared, 2, 4, 1, 1);

        pushButton_negative = new QPushButton(centralWidget);
        pushButton_negative->setObjectName(QString::fromUtf8("pushButton_negative"));

        gridLayout->addWidget(pushButton_negative, 2, 2, 1, 1);

        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 4, 1, 1, 1);

        pushButton_equals = new QPushButton(centralWidget);
        pushButton_equals->setObjectName(QString::fromUtf8("pushButton_equals"));

        gridLayout->addWidget(pushButton_equals, 7, 0, 1, 1);

        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 4, 2, 1, 1);

        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setEnabled(true);
        QFont font;
        font.setPointSize(9);
        pushButton_3->setFont(font);

        gridLayout->addWidget(pushButton_3, 5, 4, 1, 1);

        pushButton_sqrt = new QPushButton(centralWidget);
        pushButton_sqrt->setObjectName(QString::fromUtf8("pushButton_sqrt"));

        gridLayout->addWidget(pushButton_sqrt, 2, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        calcuation165Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(calcuation165Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 394, 22));
        calcuation165Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(calcuation165Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        calcuation165Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(calcuation165Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        calcuation165Class->setStatusBar(statusBar);

        retranslateUi(calcuation165Class);

        QMetaObject::connectSlotsByName(calcuation165Class);
    } // setupUi

    void retranslateUi(QMainWindow *calcuation165Class)
    {
        calcuation165Class->setWindowTitle(QCoreApplication::translate("calcuation165Class", "calcuation165", nullptr));
        pushButton_minus->setText(QCoreApplication::translate("calcuation165Class", "-", nullptr));
        pushButton_7->setText(QCoreApplication::translate("calcuation165Class", "7", nullptr));
        pushButton_plus->setText(QCoreApplication::translate("calcuation165Class", "+", nullptr));
        pushButton_8->setText(QCoreApplication::translate("calcuation165Class", "8", nullptr));
        pushButton_1->setText(QCoreApplication::translate("calcuation165Class", "1", nullptr));
        pushButton_9->setText(QCoreApplication::translate("calcuation165Class", "9", nullptr));
        pushButton_0->setText(QCoreApplication::translate("calcuation165Class", "0", nullptr));
        pushButton_6->setText(QCoreApplication::translate("calcuation165Class", "6", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("calcuation165Class", "AC", nullptr));
        pushButton_multiply->setText(QCoreApplication::translate("calcuation165Class", "*", nullptr));
        pushButton_2->setText(QCoreApplication::translate("calcuation165Class", "2", nullptr));
        pushButton_point->setText(QCoreApplication::translate("calcuation165Class", ".", nullptr));
        pushButton_divide->setText(QCoreApplication::translate("calcuation165Class", "/", nullptr));
        pushButton_squared->setText(QCoreApplication::translate("calcuation165Class", "^2", nullptr));
        pushButton_negative->setText(QCoreApplication::translate("calcuation165Class", "+/-", nullptr));
        pushButton_4->setText(QCoreApplication::translate("calcuation165Class", "4", nullptr));
        pushButton_equals->setText(QCoreApplication::translate("calcuation165Class", "=", nullptr));
        pushButton_5->setText(QCoreApplication::translate("calcuation165Class", "5", nullptr));
        pushButton_3->setText(QCoreApplication::translate("calcuation165Class", "3", nullptr));
        pushButton_sqrt->setText(QCoreApplication::translate("calcuation165Class", "sqrt", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calcuation165Class: public Ui_calcuation165Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCUATION165_H
