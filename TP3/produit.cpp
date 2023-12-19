#include "produit.hpp"

Produit::Produit(std::string titre, std::string description, float prix, int quantite):_titre(titre), _description(description), _prix(prix), _quantite(quantite){}

Produit::Produit(const Produit& p):_titre(p._titre), _description(p._description), _prix(p._prix), _quantite(1){} 

void Produit::setPrix(float prix){
    if(prix>0){
        _prix=prix;
    }
    else{
        std::cout<<"Le prix doit etre positif"<<std::endl;
    }
}

std::ostream& operator<<(std::ostream& os, const Produit& p){
    os<<"Titre : "<<p._titre<<std::endl;
    os<<"Description : "<<p._description<<std::endl;
    os<<"Prix : "<<p._prix<<std::endl;
    os<<"Quantite : "<<p._quantite<<std::endl;
    return os;
}