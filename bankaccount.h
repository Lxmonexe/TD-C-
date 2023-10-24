#include <string>

class Bankaccount
{   
    public:
        Bankaccount(std::string account_number, std::string card_number, std::string card_type, double balance_max);
        Bankaccount(double balance, std::string account_number, std::string card_number, std::string card_type, double balance_max);
        void deposit(double amount);
        void withdraw(double amount);
        double get_balance() const;
        std::string get_name() const;
        std::string get_account_number() const;
        std::string get_card_number() const;
        std::string get_card_type() const;
        double get_balance_max() const;
    private:
        double _balance;
        std::string _account_number;
        std::string _card_number;
        std::string _card_type;
        double _balance_max;

};