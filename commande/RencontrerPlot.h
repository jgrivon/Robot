//
// Created by user on 22/11/16.
//

#ifndef ROBOT_RENCONTRERPLOT_H
#define ROBOT_RENCONTRERPLOT_H


#include "Commande.h"
#include "../Plot.h"
#include "CommandeRobot.h"

class RencontrerPlot : CommandeRobot {
public:
    virtual void execute();
    virtual void unexecute(){}
    static RencontrerPlot* exemplaire;
    RencontrerPlot(Invocateur* i);
    RencontrerPlot() : CommandeRobot("RENCONTRERPLOT"){reversible = false;}
    virtual Commande* constructeurVirtuel(Invocateur* i);
    Plot plot;
};



#endif //ROBOT_RENCONTRERPLOT_H
