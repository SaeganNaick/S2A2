#include "hourly.h"

Hourly::Hourly(double hr)
{
    hourlyRate = hr;
    Payment::type = "Hourly";
}

double Hourly::addHours(double hrs)
{
    hours = hrs;
}

double Hourly::pay()
{
    return hourlyRate * hours;
}

