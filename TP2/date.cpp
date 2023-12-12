#include "date.h"
#include <iostream>

Date::Date(int year, int month, int day)
    : _year(year), _month(month), _day(day)
{
    validDate();
}

void Date::validDate()
{
    if (_year < 1 || _year > 9999)
    {
        std::cout << "Invalid year!" << std::endl;
    }
    if (_month < 1 || _month > 12)
    {
        std::cout << "Invalid month!" << std::endl;
    }
    if (_day < 1 || _day > 31)
    {
        std::cout << "Invalid day!" << std::endl;
    }
    else if (_month == 2)
    {
        if (_day > 29)
        {
            std::cout << "Invalid day!" << std::endl;
        }
        if (_day == 29)
        {
            if (_year % 4 != 0)
            {
                std::cout << "Invalid day!" << std::endl;
            }
            if (_year % 100 == 0 && _year % 400 != 0)
            {
                std::cout << "Invalid day!" << std::endl;
            }
        }
    }
    else if (_month == 4 || _month == 6 || _month == 9 || _month == 11)
    {
        if (_day > 30)
        {
           std::cout << "Invalid day!" << std::endl;
        }
    }
}

void Date::afficher()
{
    std::cout << _year << "/" << _month << "/" << _day << std::endl;
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