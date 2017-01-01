//
// Created by user on 14/11/16.
//

#include "enCharge.h"
#include "enChargeFacePlot.h"
enCharge* enCharge::instanceUnique = new enCharge();
Etat* enCharge::peser() {return this;}
Etat* enCharge::tourner() {return this;}
Etat* enCharge::rencontrerPlot() {return enChargeFacePlot::instance();}
Etat* enCharge::avancer(){return this;}
std::string enCharge::afficher(){return "Etat:enCharge";}