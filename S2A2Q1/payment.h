#ifndef PAYMENT_H
#define PAYMENT_H
#include <QString>

class Payment
{
protected:
    QString type;
public:
    Payment(QString typ);
    QString getType() const;
    virtual double pay();
};

#endif // PAYMENT_H
