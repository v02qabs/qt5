#include "Counter.h"
 
Counter::Counter(const QString sname) 
{
	m_value = 0;
	m_name = sname;
}
 
int Counter::value() const
{
	return m_value;
}
 
void Counter::setValue(int value) 
{
	QTextStream out(stdout);
	if (value != m_value) {
		m_value = value;
		out << "send:[" << m_name << "] " << value << endl;
		emit valueChanged(value);
		out << "completed:[" << m_name << "] " << value << endl;
	} else {
		out << "Ignore:[" << m_name << "] " << value << endl;
	}
}
