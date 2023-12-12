#pragma once
#include <string>

enum class TypeChambre {Single, Double, Suite};

class Chambre{
    private:
        int _numero;
        TypeChambre _type;
        int _prix;
    public:
        Chambre(int numero, TypeChambre type);
        int getNumero();
        std::string getType();
        int getPrix();
        void changerPrix(int prix);
        
};