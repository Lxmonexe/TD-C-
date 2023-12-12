#include "hotel.h"
#include <iostream>

Hotel::Hotel(std::string identifiant, std::string nom, std::string ville)
    : _identifiant(identifiant), _nom(nom), _vile(ville)
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

void Hotel::AjouterChambre(Chambre chambre)
{
    for (int i = 0; i < _chambres.size(); i++)
    {
        if (_chambres.at(i).getNumero() == chambre.getNumero())
        {
            std::cout << "Chambre deja existante" << std::endl;
            return;
        }
    }
    _chambres.push_back(chambre);

}

void Hotel::SupprimerChambre(int numero)
{
    for (int i = 0; i < _chambres.size(); i++)
    {
        if (_chambres.at(i).getNumero() == numero)
        {
            _chambres.erase(_chambres.begin() + i);
        }
    }
}


int Hotel::getPrixChambre(int numero)
{
    for (int i = 0; i < _chambres.size(); i++)
    {
        if (_chambres.at(i).getNumero() == numero)
        {
            return _chambres.at(i).getPrix();
        }
    }
    return -1;
}

std::string Hotel::getTypeChambre(int numero)
{
    for (int i = 0; i < _chambres.size(); i++)
    {
        if (_chambres.at(i).getNumero() == numero)
        {
            return _chambres.at(i).getType();
        }
    }
    return "Unknown";
}

std::string Hotel::getIdentifiant()
{
    return _identifiant;
}