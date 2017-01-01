//
// Created by user on 22/11/16.
//

#include "Peser.h"

Peser* Peser::exemplaire = new Peser();
Commande* Peser::constructeurVirtuel(Invocateur* i) {
    return new Peser(i);
}
Peser::Peser(Invocateur* i ) {
    robot = i->robot;
}
void Peser::execute(){
    robot->peser();
}