#include <QApplication>
#include <QMainWindow>
#include <QPushButton>
#include <QtWebKitWidgets/QWebView>
#include <QHBoxLayout>
#include <QUrl>
int main(int argc, char *argv[])
{
		if(argc < 2)
		{
						qDebug() << "error";
		}
		else
		{
						qDebug() << argv[1];
		}

		char *address = argv[1];

    QApplication a(argc, argv);
    QWidget *myActivity = new QWidget();
    myActivity->setWindowTitle("HelloGUi");
    //Qtlayout
    QHBoxLayout *layout = new QHBoxLayout;
		QVBoxLayout *command = new QVBoxLayout;

		//command
    QPushButton *push_OK = new QPushButton("OK", myActivity);
		QLineEdit *url_my = new QLineEdit;
		command->addWidget(url_my);
		command->addWidget(push_ok);
		
	
		


		//webview
		QWebView *web_view = new QWebView();
		web_view -> load(QUrl(address));
    //layout->addWidget(push_OK);
    layout->addWidget(web_view);
    myActivity->setLayout(layout);
    myActivity->show();
    return a.exec();
}
