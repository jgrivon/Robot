//
// Created by user on 14/11/16.
//

#ifndef ROBOT_AVIDEFACEPLOT_H
#define ROBOT_AVIDEFACEPLOT_H


#include "Enroute.h"

class aVideFacePlot : public Enroute{
protected:
    aVideFacePlot(){}
public:
    Etat* evaluerPlot();
    Etat* saisir();
    Etat* tourner();
    std::string afficher();
    static aVideFacePlot* instance(){return instanceUnique;}
private:
    static aVideFacePlot* instanceUnique;
};


#endif //ROBOT_AVIDEFACEPLOT_H
