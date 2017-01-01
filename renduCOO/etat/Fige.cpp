//
// Created by user on 14/11/16.
//

#include "Fige.h"
#include "Enroute.h"

Fige* Fige::instanceUnique = new Fige();
Etat* Fige::ancien_etat = nullptr;
Etat* Fige::repartir(){ return Fige::ancienEtat();}
std::string Fige::afficher(){return "Etat:Fige";}