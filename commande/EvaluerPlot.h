//
// Created by user on 22/11/16.
//

#ifndef ROBOT_EVALUERPLOT_H
#define ROBOT_EVALUERPLOT_H


#include <iostream>
#include "CommandeRobot.h"

class EvaluerPlot : public CommandeRobot{
public:
    static EvaluerPlot* exemplaire;
    EvaluerPlot() : CommandeRobot("EVALUERPLOT"){reversible = false;}
    EvaluerPlot(Invocateur* i);
    virtual void execute();
    virtual void unexecute(){}
    virtual Commande* constructeurVirtuel(Invocateur* i);

};


#endif //ROBOT_EVALUERPLOT_H
