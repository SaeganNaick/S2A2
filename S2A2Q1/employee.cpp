#include "employee.h"


int Employee::nextID = 1001;

Employee::Employee(QString fn, QString sn)
{
    firstName = fn;
    surname = sn;
    id = nextID;
    nextID++;

}

Employee::Employee(const Employee &e)
{

}

Employee::~Employee()
{

}

int Employee::getID() const
{
    return id;
}

QString Employee::getName() const
{
    return firstName + " " + surname;
}

void Employee::setPayment(Payment* pay)
{

}

double Employee::getPayment() const
{
    int foo, bar;
    foo = 1;
    bar = 2;

    return 0;
}
