#pragma once
#include "chambre.h"
#include <string>
#include <vector>

class Hotel{
    private:
        std::string _identifiant;
        std::string _nom;
        std::string _vile;
        std::vector<Chambre> _chambres;
    public:
        Hotel(std::string identifiant, std::string nom, std::string ville, std::vector<Chambre> chambres);
        std::string getNom();
        std::string getVille();
        std::string getIdentifiant();

};