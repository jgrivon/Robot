//
// Created by user on 22/11/16.
//

#include "EvaluerPlot.h"
#include "../Robot.h"

EvaluerPlot* EvaluerPlot::exemplaire = new EvaluerPlot();
Commande* EvaluerPlot::constructeurVirtuel(Invocateur* i ) {
    return new EvaluerPlot(i);
}

EvaluerPlot::EvaluerPlot(Invocateur *i) {
    this->robot = i->robot;
}
void EvaluerPlot::execute(){robot->evaluerPlot();}