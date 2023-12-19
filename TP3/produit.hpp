#pragma once
#include <string>
#include <iostream>

class Produit{
    private:
        const std::string _titre;
        const std::string _description;
        float _prix;
        int _quantite;
    public:
        Produit(std::string titre, std::string description, float prix, int quantite);
        std::string getTitre(){return _titre;}
        std::string getDescription(){return _description;}
        float getPrix(){return _prix;}
        int getQuantite(){return _quantite;}
        void setQuantite(int quantite){_quantite=quantite;}
        void setPrix(float prix);
        friend std::ostream& operator<<(std::ostream& os, const Produit& p);
};
