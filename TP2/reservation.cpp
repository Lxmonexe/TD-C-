#include "reservation.h"
#include <iostream>

Reservation::Reservation(Date dateArrivee, Hotel hotel, Client client, int numeroChambre, int duree)
    : _dateArrivee(dateArrivee), _hotel(hotel), _client(client), _numeroChambre(numeroChambre), _duree(duree)
{
}

void Reservation::changerDateArrivee(Date dateArrivee){
    _dateArrivee=dateArrivee;
}

int Reservation::getMontant(){
    
    return _hotel.getPrixChambre(_numeroChambre)*_duree;
}

void Reservation::afficher(){
    std::cout<<"*************************************"<<std::endl;
    std::cout<<"Reservation du "<<_dateArrivee.getDay()<<"/"<<_dateArrivee.getMonth()<<"/"<<_dateArrivee.getYear()<<std::endl;
    std::cout<<"Identifiant hotel : "<<_hotel.getIdentifiant()<<std::endl;
    std::cout<<"Identifiant client : "<<_client.getIdentifiant()<<std::endl;
    std::cout<<"Nombre de nuits : "<<_duree<<std::endl;
    std::cout<<"Chambre : "<<_numeroChambre<<" ("<<_hotel.getTypeChambre(_numeroChambre)<<")"<<std::endl;
    std::cout<<"Montant : "<<getMontant()<<std::endl;
    std::cout<<"*************************************"<<std::endl;
}