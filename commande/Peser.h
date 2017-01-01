//
// Created by user on 22/11/16.
//

#ifndef ROBOT_PESER_H
#define ROBOT_PESER_H

#include "CommandeRobot.h"

class Peser : public CommandeRobot {
public:
    virtual void execute();
    virtual void unexecute(){reversible = false;}
    static Peser* exemplaire;
    Peser(Invocateur* i);
    Peser() : CommandeRobot("PESER"){}
    virtual Commande* constructeurVirtuel(Invocateur* i);

};


#endif //ROBOT_PESER_H
