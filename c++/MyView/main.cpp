#include <QCoreApplication>
#include <QWindow> 
#include <QPushButton>
#include <QtWebKitWidgets/QWebView>
#include <QHBoxLayout>
#include <QUrl>
#include <QLineEdit>
#include "inc.h"
#include "QMainWindow.h"


int  main(int argc, char** argv)
{	
	QApplication app(argc, argv);
	QWebView *viewer = new QWebView();
	QPushButton *pageback = new QPushButton("BACK");
	viewer->load(QUrl("https://www.google.co.jp"));
	QWidget *window = new QWidget();
	QVBoxLayout *layout = new QVBoxLayout;
	layout->addWidget(viewer);
	layout->addWidget(pageback);
	QObject::connect(pageback, SIGNAL(clicked()), viewer, SLOT(back()));
	QWidget *setup_window = new QWidget();
 	QPushButton *setFinishing = new QPushButton("QUIT");
	QVBoxLayout *setlayout = new QVBoxLayout();
	setlayout->addWidget(setFinishing);
	setup_window->setLayout(setlayout);
	window->setLayout(layout);
	setup_window->setVisible(false);
//QObject::connect(pageback,  SIGNAL(clicked()),  setup_window, SLOT(show()));
	window->show();
	//QObject::connect(setFinishing, SIGNAL(clicked()), setup_window, SLOT(close()));
		
	return app.exec();
}
