#include "client.hpp"
#include <random>



Client::Client(std::string nom,std::string prenom):_nom(nom), _prenom(prenom){
    std::mt19937 generator(std::random_device{}());
    std::uniform_int_distribution<int> distribution(10, 100);

    int nombre = distribution(generator);
    _identifiant=_nom[0]+_prenom+std::to_string(nombre);

    _panier=std::vector<Produit>();
}

void Client::ajouterProduit(Produit p){
    p.setQuantite(1);
    _panier.push_back(p);
}

void Client::supprimerPanier(){
    _panier.clear();
}

void Client::setQuantite(std::string titre, int quantite){
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
        os<<"Produit "<<i+1<<" :"<<std::endl;
        os<<c._panier[i]<<std::endl;
    }
    return os;
}