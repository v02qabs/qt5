#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QDebug>
#include <QCoreApplication>


int main(int argc , char  *argv[])
{
	QSqlDatabase db;
	    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("testDB");
    if(!db.open())
    {
        qDebug() << "Can't Connect to DB !";
    }
    else
    {
        qDebug() << "Connected Successfully to DB !";
        QSqlQuery query;
        query.prepare("SELECT * FROM user");
        if(!query.exec())
        {
            qDebug() << "Can't Execute Query !";
        }
        else
        {
            qDebug() << "Query Executed Successfully !";
            while(query.next())
            {
                qDebug() << "country Name : " << query.value(0).toString();
            }
        }
    }
}

