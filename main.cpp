#include <iostream>
#include "date.h"

int main()
{
    Date date(2014, 3, 1);
    std::cout << date.getYear() << std::endl;
    std::cout << date.getMonth() << std::endl;
    std::cout << date.getDay() << std::endl;
    return 0;
}