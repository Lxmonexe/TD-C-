#include <iostream>
#include <string>
#include "date.h"
#include "bankaccount.h"

int main()
{
    Date date(2020, 2, 29);
    std::cout << date.getYear() << std::endl;
    Bankaccount bankaccount("123456789", "123456789", "VISA", 1000);
    std::cout << bankaccount.get_balance() << std::endl;
    Bankaccount bankaccount2(100, "123456789", "123456789", "VISA", 1000);
    std::cout << bankaccount2.get_balance() << std::endl;
    bankaccount2.deposit(100);
    std::cout << bankaccount2.get_balance() << std::endl;
    bankaccount2.withdraw(100);
    std::cout << bankaccount2.get_balance() << std::endl;
    return 0;
}