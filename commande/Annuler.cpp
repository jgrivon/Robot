//
// Created by user on 06/12/16.
//

#include "Annuler.h"
Annuler* Annuler::exemplaire = new Annuler();
Commande* Annuler::constructeurVirtuel(Invocateur* i) {
    return new Annuler(i);
}
Annuler::Annuler(Invocateur* i ) {
}
void Annuler::execute(){
    if(Commande::commandesExecutees.top()->reversible) {
        Commande::commandesExecutees.top()->unexecute();
        Commande::commandesExecutees.pop();
    }
}