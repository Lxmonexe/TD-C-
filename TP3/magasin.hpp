#pragma once
#include <vector>
#include "produit.hpp"

class Magasin{
    private:
        std::vector<Produit> _produits;
    public:
        Magasin();
        void ajouterProduit(Produit p);
        void afficherProduits();
        void afficherProduits(std::string titre);
        void changerQuantite(std::string titre, int quantite);
};