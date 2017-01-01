//
// Created by user on 14/11/16.
//

#include "Enroute.h"
#include "Fige.h"
Enroute* Enroute::instanceUnique = new Enroute();
Etat* Enroute::figer(){
    Fige::nouvel_etat(this);
    return Fige::instance();
}
std::string Enroute::afficher(){return "Etat:Enroute";}