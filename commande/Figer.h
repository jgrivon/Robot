//
// Created by user on 22/11/16.
//

#ifndef ROBOT_FIGER_H
#define ROBOT_FIGER_H


#include "CommandeRobot.h"

class Figer : public CommandeRobot{
public:
    static Figer* exemplaire;
    Figer(Invocateur* i);
    Figer() : CommandeRobot("FIGER"){reversible = true;}
    virtual void execute();
    virtual void unexecute();
    virtual Commande* constructeurVirtuel(Invocateur* i);

};


#endif //ROBOT_FIGER_H
