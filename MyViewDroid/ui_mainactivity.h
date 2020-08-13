/********************************************************************************
** Form generated from reading UI file 'mainactivity.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINACTIVITY_H
#define UI_MAINACTIVITY_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainActivity
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QWebView *webView;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainActivity)
    {
        if (MainActivity->objectName().isEmpty())
            MainActivity->setObjectName(QStringLiteral("MainActivity"));
        MainActivity->resize(800, 600);
        centralwidget = new QWidget(MainActivity);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(710, 0, 89, 25));
        webView = new QWebView(centralwidget);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setGeometry(QRect(10, 30, 781, 541));
        webView->setUrl(QUrl(QStringLiteral("about:blank")));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 0, 691, 21));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        MainActivity->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainActivity);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 28));
        MainActivity->setMenuBar(menubar);
        statusbar = new QStatusBar(MainActivity);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainActivity->setStatusBar(statusbar);

        retranslateUi(MainActivity);

        QMetaObject::connectSlotsByName(MainActivity);
    } // setupUi

    void retranslateUi(QMainWindow *MainActivity)
    {
        MainActivity->setWindowTitle(QApplication::translate("MainActivity", "MainActivity", nullptr));
        pushButton->setText(QApplication::translate("MainActivity", "Go", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainActivity: public Ui_MainActivity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINACTIVITY_H
