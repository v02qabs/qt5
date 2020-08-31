#include <QApplication>
#include <QWindow>
#include <QPushButton>
#include <QtWebKitWidgets/QWebView>
#include <QHBoxLayout>
#include <QUrl>
#include <QLineEdit>
#include "inc.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	    QWidget *myActivity = new QWidget();
    myActivity->setWindowTitle("MyViewer");
    Myprint p;
        QPushButton *back_page = new QPushButton("Back",myActivity);
        	QObject::connect(back_page, SIGNAL(clicked()),
	              &p, SLOT(myprint()));
	     	
        QVBoxLayout *vbox = new QVBoxLayout(myActivity);
        vbox -> addWidget(back_page);
        myActivity -> setLayout(vbox);
        myActivity -> show();
  return a.exec();
}

    
    
    
    
    
