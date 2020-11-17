#include <QObject>
#include "Counter.h"
 
 
int main(int argc, char *argv[])
{
	Counter a("a");
	Counter b("b");
 
	QObject::connect(&a, SIGNAL(valueChanged(int)),
	              &b, SLOT(setValue(int)));
	QObject::connect(&b, SIGNAL(valueChanged(int)),
	              &a, SLOT(setValue(int)));
 
	a.setValue(12);
	b.setValue(48);
}
