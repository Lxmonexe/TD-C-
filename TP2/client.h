#pragma once
#include <string>

class Client{
    private:
        std::string _nom;
        std::string _prenom;
        std::string _identifiant;
    public:
        Client(std::string nom, std::string prenom, std::string identifiant);
        std::string getIdentifiant();
        std::string getNom();
        std::string getPrenom();
};