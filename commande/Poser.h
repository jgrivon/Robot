//
// Created by user on 22/11/16.
//

#ifndef ROBOT_POSER_H
#define ROBOT_POSER_H


#include "CommandeRobot.h"

class Poser : public CommandeRobot {
public:
    virtual void execute();
    virtual void unexecute();
    static Poser* exemplaire;
    Poser(Invocateur* i);
    Poser() : CommandeRobot("POSER"){reversible = true;}
    virtual Commande* constructeurVirtuel(Invocateur* i);
    Objet dernier_objet;

};


#endif //ROBOT_POSER_H
