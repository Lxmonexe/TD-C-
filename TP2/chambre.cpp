#include "chambre.h"

Chambre::Chambre(int numero, TypeChambre type)
    : _numero(numero), _type(type)
{
    switch (_type)
    {
    case TypeChambre::Single:
        _prix = 100;
        break;
    case TypeChambre::Double:
        _prix = 125;
        break;
    case TypeChambre::Suite:
        _prix = 200;
        break;
    default:
        break;
    }
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
            break;
        case TypeChambre::Double:
            return "Double";
            break;
        case TypeChambre::Suite:
            return "Suite";
            break;
        default:
            return "Unknown";
    }
}
    

int Chambre::getPrix()
{
    return _prix;
}

void Chambre::changerPrix(int prix){
    _prix=prix;
}