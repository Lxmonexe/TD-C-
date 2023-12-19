#pragma once
#include <string>
#include <vector>
#include "produit.hpp"

class Client{
    private:
        std::string _identifiant;
        std::string _nom;
        std::string _prenom;
        std::vector<Produit> _panier;
    public:
        Client(std::string nom,std::string prenom);
        std::string getIdentifiant(){return _identifiant;}
        void ajouterProduit(Produit p);
        void supprimerPanier();
        void setQuantite(std::string titre, int quantite);
        void supprimerProduit(std::string titre);
        int getNbProduits(){return _panier.size();}
        friend std::ostream& operator<<(std::ostream& os, const Client& c);
};