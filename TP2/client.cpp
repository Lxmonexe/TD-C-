#include "client.h"

Client::Client(std::string nom, std::string prenom, std::string identifiant)
    : _nom(nom), _prenom(prenom), _identifiant(identifiant)
{
}

std::string Client::getIdentifiant()
{
    return _identifiant;
}

std::string Client::getNom()
{
    return _nom;
}

std::string Client::getPrenom()
{
    return _prenom;
}