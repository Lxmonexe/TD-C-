#include "bankaccount.h"
#include <string>

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
    _balance += amount;
}

void Bankaccount::withdraw(double amount)
{
    _balance -= amount;
}

double Bankaccount::get_balance() const
{
    return _balance;
}

std::string Bankaccount::get_account_number() const
{
    return _account_number;
}

std::string Bankaccount::get_card_number() const
{
    return _card_number;
}

std::string Bankaccount::get_card_type() const
{
    return _card_type;
}

double Bankaccount::get_balance_max() const
{
    return _balance_max;
}
