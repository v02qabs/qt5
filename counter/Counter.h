#include <QObject>
#include <QTextStream>

class Counter : public QObject
{
	Q_OBJECT
 
public:
	Counter(const QString sname);
 
	int value() const;
 
public slots:
	void setValue(int value) ;
 
signals:
	void valueChanged(int newValue);
 
private:
	int m_value;
	QString m_name;
 
};
