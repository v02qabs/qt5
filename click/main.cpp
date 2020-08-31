#include <QCoreApplication>
#include <QDebug>
#include <QTimer>

inline void onTick()
{
   qDebug() << "onTick()";
}

struct OnTimerTickListener {
   void onTimerTick()
   {
       qDebug() << "OnTimerTickListener::onTimerTick()";
   }
};

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    OnTimerTickListener listenerObject;

    QTimer timer;
    // Connecting to a non-member function
    QObject::connect(&timer, &QTimer::timeout, onTick);
    // Connecting to an object member method
    QObject::connect(&timer, &QTimer::timeout, &listenerObject, &OnTimerTickListener::onTimerTick);
    // Connecting to a lambda
    QObject::connect(&timer, &QTimer::timeout, [](){
        qDebug() << "lambda-onTick";
    });    

    return app.exec();
}
