#include "date.h"

Date::Date(int year, int month, int day)
{
    _year = year;
    _month = month;
    _day = day;
}

int Date::getYear()
{
    return _year;
}

int Date::getMonth()
{
    return _month;
}

int Date::getDay()
{
    return _day;
}