//
// Created by user on 22/11/16.
//

#include "RencontrerPlot.h"
RencontrerPlot* RencontrerPlot::exemplaire = new RencontrerPlot();
Commande* RencontrerPlot::constructeurVirtuel(Invocateur* i) {
    return new RencontrerPlot(i);
}
RencontrerPlot::RencontrerPlot(Invocateur* i ) {

    robot = i->robot;
    plot = Plot(atoi(i->l[1].c_str()));
}
void RencontrerPlot::execute(){
    robot->rencontrerPlot(plot);
}
