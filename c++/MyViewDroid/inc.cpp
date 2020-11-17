#include <QObject>
#include <QTextStream>

class MyPrintA : public QObject
{
	Q_OBJECT
 
public:
	MyPrintA();
 
public slots:
	void click();
 
signals:
	void Myprintf();
 
 
};
