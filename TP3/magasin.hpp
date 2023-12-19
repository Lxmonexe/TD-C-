#pragma once
#include <vector>
#include "produit.hpp"
#include "client.hpp"

class Magasin{
    private:
        std::vector<Produit> _produits;
        std::vector<Client> _clients;
    public:
        Magasin();
        void ajouterProduit(Produit p);
        void afficherProduits(std::string titre);
        void changerQuantite(std::string titre, int quantite);
        void ajouterClient(Client c);
        void afficherClients(std::string identifiant);
        void changerQuantitePanier(std::string identifiant,std::string titre, int quantite);
        void supprimerProduitPanierClient(std::string identifiant, std::string titre);
        void supprimerPanierClient(std::string identifiant);
        void supprimerClient(std::string identifiant);
        friend std::ostream& operator<<(std::ostream& os, const Magasin& m);

};