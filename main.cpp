#include <iostream>
#include <string>
#include "user.h"

int main()
{
    Date birthdate(2000, 1, 1);
    Bankaccount bankaccount("123456789", "123456789", "VISA", 1000);
    User user("John", "Doe", bankaccount, birthdate);
    std::cout << user.getName() << std::endl;
    std::cout << user.getSurname() << std::endl;
    std::cout << user.getBirthdate().getYear() << std::endl;
    std::cout << user.getBirthdate().getMonth() << std::endl;
    std::cout << user.getBirthdate().getDay() << std::endl;
    std::cout << user.getBankaccountNumber() << std::endl;
    return 0;
}