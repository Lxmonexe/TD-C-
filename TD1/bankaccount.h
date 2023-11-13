#include <string>

class Bankaccount
{   
    public:
        Bankaccount(std::string account_number, std::string card_number, std::string card_type, double balance_max);
        Bankaccount(double balance, std::string account_number, std::string card_number, std::string card_type, double balance_max);
        void deposit(double amount);
        void withdraw(double amount);
        double getBalance() const;
        std::string getAccountNumber() const;
        std::string getCardNumber() const;
        std::string getCardType() const;
        double getBalanceMax() const;
    private:
        double _balance;
        std::string _account_number;
        std::string _card_number;
        std::string _card_type;
        double _balance_max;

};