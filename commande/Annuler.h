//
// Created by user on 06/12/16.
//

#ifndef ROBOT_ANNULER_H
#define ROBOT_ANNULER_H


#include "CommandeRobot.h"

class Annuler : public CommandeRobot{

    static Annuler* exemplaire;
    Annuler(Invocateur* i);
    Annuler() : CommandeRobot("ANNULER"){}
    virtual void execute();
    virtual void unexecute(){};
    virtual Commande* constructeurVirtuel(Invocateur* i);
};


#endif //ROBOT_ANNULER_H
