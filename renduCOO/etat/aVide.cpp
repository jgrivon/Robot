//
// Created by user on 14/11/16.
//

#include "aVide.h"
#include "aVideFacePlot.h"
aVide* aVide::instanceUnique = new aVide();
Etat* aVide::tourner() {return this;}
Etat* aVide::avancer() {return this;}
Etat* aVide::rencontrerPlot() {return aVideFacePlot::instance();}
std::string aVide::afficher(){return "Etat:aVide";}