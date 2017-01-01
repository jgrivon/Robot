//
// Created by user on 14/11/16.
//

#ifndef ROBOT_ENCHARGEFACEPLOT_H
#define ROBOT_ENCHARGEFACEPLOT_H


#include "Etat.h"

class enChargeFacePlot : public Etat{
protected:
    enChargeFacePlot(){}
public:
    Etat* poser();
    Etat* peser();
    Etat* evaluerPlot();
    Etat* tourner();
    std::string afficher();
    static enChargeFacePlot* instance(){return instanceUnique;}
private:
    static enChargeFacePlot* instanceUnique;
};


#endif //ROBOT_ENCHARGEFACEPLOT_H
