#include "magasin.hpp"

Magasin::Magasin(){
    
}

void Magasin::ajouterProduit(Produit p){
    _produits.push_back(p);
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

void Magasin::ajouterClient(Client c){
    _clients.push_back(c);
}

void Magasin::afficherClients(std::string identifiant){
    for(auto i=0; i<_clients.size(); i++){
        if(_clients[i].getIdentifiant()==identifiant){
            std::cout<<_clients[i]<<std::endl;
        }
    }
}


void Magasin::changerQuantitePanier(std::string identifiant,std::string titre, int quantite){
    for(auto i=0; i<_clients.size(); i++){
        if(_clients.at(i).getIdentifiant()==identifiant){
            _clients.at(i).setQuantite(titre, quantite);
        }
    }
}

void Magasin::supprimerProduitPanierClient(std::string identifiant, std::string titre){
    for(auto i=0; i<_clients.size(); i++){
        if(_clients.at(i).getIdentifiant()==identifiant){
            _clients.at(i).supprimerProduit(titre);
        }
    }
}

void Magasin::supprimerPanierClient(std::string identifiant){
    for(auto i=0; i<_clients.size(); i++){
        if(_clients.at(i).getIdentifiant()==identifiant){
            _clients.at(i).supprimerPanier();
        }
    }
}

void Magasin::supprimerClient(std::string identifiant){
    for(auto i=0; i<_clients.size(); i++){
        if(_clients.at(i).getIdentifiant()==identifiant){
            _clients.erase(_clients.begin()+i);
        }
    }
}

std::ostream& operator<<(std::ostream& os, const Magasin& m){
    os<<"Liste des produits: "<<std::endl;
    for(auto i=0; i<m._produits.size(); i++){
        os<<m._produits.at(i)<<std::endl;
    }
    os<<std::endl;
    os<<"Listes des clients: "<<std::endl;
    for(auto i=0; i<m._clients.size(); i++){
        os<<m._clients.at(i)<<std::endl;
    }
    return os;
}

