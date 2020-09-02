#include <QObject>
#include <QDebug>
#include <QLineEdit>
class Myprint : public QObject
{
  QLineEdit url_web;
	Q_OBJECT
 
public:
	Myprint();
	public:
		
 
public slots:
	void show() ;
 
signals:
	void clicked();

};
