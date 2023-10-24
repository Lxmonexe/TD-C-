#include "user.h"


User::User(std::string name, std::string surname, Bankaccount bankaccount, Date birthdate):
 _name(name), _surname(surname), _bankaccount(bankaccount), _birthdate(birthdate)
{
    
}

std::string User::getName() const
{
    return _name;
}

std::string User::getSurname() const
{
    return _surname;
}

Date User::getBirthdate() const
{
    return _birthdate;
}

std::string User::getBankaccountNumber() const
{
    return _bankaccount.getAccountNumber();
}