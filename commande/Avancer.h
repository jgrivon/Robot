//
// Created by user on 22/11/16.
//

#ifndef ROBOT_AVANCER_H
#define ROBOT_AVANCER_H


#include <iostream>
#include "CommandeRobot.h"


class Avancer: public CommandeRobot {
public:
    static Avancer* exemplaire;
    Avancer(Invocateur* i);
    Avancer() : CommandeRobot("AVANCER"){ reversible = true;}
    virtual void execute();
    virtual void unexecute();
    virtual Commande* constructeurVirtuel(Invocateur* i);
    int x,y,old_x,old_y;
};


#endif //ROBOT_AVANCER_H
