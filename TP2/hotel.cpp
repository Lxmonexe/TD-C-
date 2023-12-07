#include "hotel.h"

Hotel::Hotel(std::string identifiant, std::string nom, std::string ville, std::vector<Chambre> chambres)
    : _identifiant(identifiant), _nom(nom), _vile(ville), _chambres(chambres)
{
}

std::string Hotel::getNom()
{
    return _nom;
}


std::string Hotel::getVille()
{
    return _vile;
}


std::string Hotel::getIdentifiant()
{
    return _identifiant;
}
