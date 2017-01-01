//
// Created by user on 14/11/16.
//

#include "aVideFacePlot.h"
#include "enChargeFacePlot.h"
#include "aVide.h"

aVideFacePlot* aVideFacePlot::instanceUnique = new aVideFacePlot();
Etat* aVideFacePlot::tourner(){ return aVide::instance();}
Etat* aVideFacePlot::saisir(){ return enChargeFacePlot::instance();}
Etat* aVideFacePlot::evaluerPlot(){ return this;}
std::string aVideFacePlot::afficher(){return "Etat:aVideFacePlot";}