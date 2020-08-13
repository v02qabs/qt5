#ifndef MAINACTIVITY_H
#define MAINACTIVITY_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainActivity; }
QT_END_NAMESPACE

class MainActivity : public QMainWindow
{
    Q_OBJECT

public:
    MainActivity(QWidget *parent = nullptr);
    ~MainActivity();

private:
    Ui::MainActivity *ui;
};
#endif // MAINACTIVITY_H
