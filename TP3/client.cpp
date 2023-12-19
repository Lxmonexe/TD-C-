#include "client.hpp"

Client::Client(std::string nom,std::string prenom):_nom(nom), _prenom(prenom){
    _identifiant=_nom[0]+_prenom;
    _panier=std::vector<Produit>();
}

void Client::ajouterProduit(Produit p){
    _panier.push_back(Produit(p));
}

void Client::supprimerPanier(){
    _panier.clear();
}

void Client::changerQuantite(std::string titre, int quantite){
    for(auto i=0; i<_panier.size(); i++){
        if(_panier[i].getTitre()==titre){
            _panier[i].setQuantite(quantite);
        }
    }
}

void Client::supprimerProduit(std::string titre){
    for(auto i=0; i<_panier.size(); i++){
        if(_panier[i].getTitre()==titre){
            _panier.erase(_panier.begin()+i);
        }
    }
}

std::ostream& operator<<(std::ostream& os, const Client& c){
    os<<"Identifiant: "<<c._identifiant<<std::endl;
    os<<"Nom: "<<c._nom<<std::endl;
    os<<"Prenom: "<<c._prenom<<std::endl;
    os<<"Panier: "<<std::endl;
    for(auto i=0; i<c._panier.size(); i++){
        os<<c._panier[i]<<std::endl;
    }
    return os;
}