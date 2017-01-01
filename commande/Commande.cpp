//
// Created by user on 22/11/16.
//

#include "Commande.h"



std::map<std::string, Commande *> &Commande::commandesInscrites() {
     static std::map<std::string,Commande*>*comInscrits = new std::map<std::string,Commande*>;
    return *comInscrits;
}
std::stack<Commande*> Commande::commandesExecutees;

Commande::Commande(std::string c){
    commandesInscrites()[c] = this;
}
