#include <QApplication>
#include <QWidget>
#include <QTextEdit>
#include <QDebug>
#include <QVBoxLayout>
int main(int argc, char** argv)
{
	QApplication app(argc,argv);
	qDebug() << "武居";
	QWidget  *window = new  QWidget();
	window->setWindowTitle("Editor");
	QVBoxLayout *layout = new QVBoxLayout();
	QTextEdit *editor = new QTextEdit();
	layout->addWidget(editor);
	window->setLayout(layout);
	window->show();
	return app.exec();
}

