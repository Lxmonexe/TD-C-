#include "magasin.hpp"

Magasin::Magasin(){
    
}

void Magasin::ajouterProduit(Produit p){
    _produits.push_back(p);
}

void Magasin::afficherProduits(){
    for(auto i=0; i<_produits.size(); i++){
        std::cout<<_produits[i]<<std::endl;
    }
}

void Magasin::afficherProduits(std::string titre){
    for(auto i=0; i<_produits.size(); i++){
        if(_produits[i].getTitre()==titre){
            std::cout<<_produits[i]<<std::endl;
        }
    }
}

void Magasin::changerQuantite(std::string titre, int quantite){
    for(auto i=0; i<_produits.size(); i++){
        if(_produits[i].getTitre()==titre){
            _produits[i].setQuantite(quantite);
        }
    }
}