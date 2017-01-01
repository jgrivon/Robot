//
// Created by user on 06/12/16.
//

#ifndef ROBOT_ANNULER_H
#define ROBOT_ANNULER_H


#include "Commande.h"

class Annuler : public Commande{

    static Annuler* exemplaire;
    Annuler(Invocateur* i);
    Annuler() : Commande("ANNULER"){}
    virtual void execute();
    virtual void unexecute(){};
    virtual Commande* constructeurVirtuel(Invocateur* i);
};


#endif //ROBOT_ANNULER_H
