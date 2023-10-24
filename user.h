#include <string>
#include "bankaccount.h"
#include "date.h"

class User
{
    public :
    User(std::string name, std::string surname, Bankaccount bankaccount, Date birthdate);
    std::string getName() const;
    std::string getSurname() const;
    Date getBirthdate() const;
    std::string getBankaccountNumber() const;
    private :
    std::string _name;
    std::string _surname;
    Bankaccount _bankaccount;
    Date _birthdate;

};