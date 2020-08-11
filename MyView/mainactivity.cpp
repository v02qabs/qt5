#include "mainactivity.h"
#include "ui_mainactivity.h"

MainActivity::MainActivity(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainActivity)
{
    ui->setupUi(this);
}

MainActivity::~MainActivity()
{
    delete ui;
}

