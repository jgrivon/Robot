//
// Created by user on 14/11/16.
//

#include "enChargeFacePlot.h"
#include "aVideFacePlot.h"
#include "enCharge.h"

enChargeFacePlot* enChargeFacePlot::instanceUnique = new enChargeFacePlot();

Etat* enChargeFacePlot::tourner() {return enCharge::instance();}
Etat* enChargeFacePlot::poser() {return aVideFacePlot::instance();}
Etat* enChargeFacePlot::peser() {return this;}
Etat* enChargeFacePlot::evaluerPlot() {return this;}
std::string enChargeFacePlot::afficher(){return "Etat:enChargeFacePlot";}