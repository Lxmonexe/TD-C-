#pragma once
#include "date.h"
#include "client.h"
#include "hotel.h"
#include <string>

class Reservation{
    private:
        Date _dateArrivee;
        Hotel _hotel;
        Client _client;
        int _numeroChambre;
        int _duree;
    public:
        Reservation(Date dateArrivee, Hotel hotel, Client client, int numeroChambre, int duree);
        void changerDateArrivee(Date dateArrivee);
        int getMontant();
        void afficher();
};