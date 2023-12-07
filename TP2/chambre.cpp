#include "chambre.h"

Chambre::Chambre(int numero, TypeChambre type, int prix)
    : _numero(numero), _type(type), _prix(prix)
{
}


int Chambre::getNumero()
{
    return _numero;
}


std::string Chambre::getType()
{
    switch(_type)
    {
        case TypeChambre::Single:
            return "Single";
        case TypeChambre::Double:
            return "Double";
        case TypeChambre::Suite:
            return "Suite";
        default:
            return "Unknown";
    }
}
    

int Chambre::getPrix()
{
    return _prix;
}


