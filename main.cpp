#include <QCoreApplication>
#include <QTcpSocket>
#include <QSqlDatabase>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTcpSocket s;
    QSqlDatabase db = QSqlDatabase::addDatabase("QPSQL", "mydb") ;
    return a.exec();
}
