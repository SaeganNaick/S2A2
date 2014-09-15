#include <QCoreApplication>
#include <QTextStream>
#include <employeelist.h>
#include <employee.h>

QTextStream cout(stdout);
QTextStream cin(stdin);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Employee drone("John", "Doe");

    cout << drone.getID() << endl;

    return a.exec();
}
