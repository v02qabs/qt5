#include <QObject>
#include <QDebug>

class Myprint : public QObject
{
	Q_OBJECT
 
public:
	Myprint();
 
public slots:
	void myprint() ;
 
signals:
	void click();

};
