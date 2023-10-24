#include "bankaccount.h"
#include <iostream>

Bankaccount::Bankaccount(std::string account_number, std::string card_number, std::string card_type, double balance_max)
{
    _balance = 0;
    _account_number = account_number;
    _card_number = card_number;
    _card_type = card_type;
    _balance_max = balance_max;
}

Bankaccount::Bankaccount(double balance, std::string account_number, std::string card_number, std::string card_type, double balance_max)
{
    _balance = balance;
    _account_number = account_number;
    _card_number = card_number;
    _card_type = card_type;
    _balance_max = balance_max;
}

void Bankaccount::deposit(double amount)
{
    if((_balance += amount)>_balance_max)
    {
        std::cout << "Balance max exceeded, your balance max is : " << _balance_max << std::endl;
    }
    else
    {
        _balance += amount;
    }
}

void Bankaccount::withdraw(double amount)
{
    _balance -= amount;
}

double Bankaccount::getBalance() const
{
    return _balance;
}

std::string Bankaccount::getAccountNumber() const
{
    return _account_number;
}

std::string Bankaccount::getCardNumber() const
{
    return _card_number;
}

std::string Bankaccount::getCardType() const
{
    return _card_type;
}

double Bankaccount::getBalanceMax() const
{
    return _balance_max;
}
