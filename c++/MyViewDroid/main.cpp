#include <QCoreApplication>
#include <QApplication>
#include <QWindow>
#include <QPushButton>
#include <QtWebKitWidgets/QWebView>
#include <QHBoxLayout>
#include <QUrl>
#include <QLineEdit>
#include <QApplication>
#include "inc.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *myActivity = new QWidget();
    myActivity->setWindowTitle("MyViewer");
    //Qtlayout
    QHBoxLayout *v_layout = new QHBoxLayout;
    QHBoxLayout *h_layout = new QHBoxLayout;
    QVBoxLayout *main_layout = new QVBoxLayout;
		//h_layout
    QPushButton *push_ok = new QPushButton("GO", myActivity);
    QPushButton *back_page = new QPushButton("Back",myActivity);
    Myprint p;
    QObject::connect(back_page, SIGNAL(clicked()), &p, SLOT(myprint()));
    QLineEdit *editor = new QLineEdit(myActivity);
   // editor.setS
    v_layout->addWidget(back_page);
    v_layout->addWidget(push_ok);
    v_layout->addWidget(editor);
		//QLineEdit *url_my = new QLineEdit;
		//h_layout->addLayout(v_layout);
		//h_layout->addWidget(push_ok);
		//webview
		QWebView *web_view = new QWebView();
		web_view->load(QUrl("https://www.google.co.jp"));
		
		
    //h_layout -> addLayout(v_layout);
    h_layout->addWidget(web_view);
    main_layout -> addLayout(v_layout);
    main_layout -> addLayout(h_layout);
    myActivity -> setLayout(main_layout);
   myActivity->show();
    return a.exec();
}
