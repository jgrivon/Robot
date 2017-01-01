//
// Created by user on 22/11/16.
//

#include "Figer.h"
Figer* Figer::exemplaire = new Figer();
Commande* Figer::constructeurVirtuel(Invocateur* i) {
    return new Figer(i);
}
Figer::Figer(Invocateur* i ) {
    robot = i->robot;
}
void Figer::execute(){
    robot->figer();
}

void Figer::unexecute() {
    robot->repartir();
}