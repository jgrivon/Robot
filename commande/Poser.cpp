//
// Created by user on 22/11/16.
//

#include "Poser.h"

Poser* Poser::exemplaire = new Poser();
Commande* Poser::constructeurVirtuel(Invocateur* i) {
    return new Poser(i);
}

Poser::Poser(Invocateur* i ) {
    robot = i->robot;
    dernier_objet = i->robot->getObjet();
}
void Poser::execute(){
    robot->poser();
}

void Poser::unexecute() {
    robot->saisir(dernier_objet);
}