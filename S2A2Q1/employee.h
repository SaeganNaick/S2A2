#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <QString>
#include "payment.h"

class Employee
{
public:
    Employee(QString fn, QString sn);
    Employee(const Employee &e);
    ~Employee();
    int getID() const;
    QString getName() const;
    void setPayment(Payment* pay);
    double getPayment() const;

private:
    int id;
    QString firstName;
    QString surname;
    Payment* payment;
    static int nextID;
};

#endif // EMPLOYEE_H
