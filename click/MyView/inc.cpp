#include <QObject>
#include <QTextStream>

class MyPrintA : public QObject
{
	Q_OBJECT
 
public:
	MyPrintA(const QString sname);
 
public slots:
	void click();
 
signals:
	void valueChanged(int newValue);
 
private:
	int m_value;
	QString m_name;
 
};
