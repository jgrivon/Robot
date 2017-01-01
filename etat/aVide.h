//
// Created by user on 14/11/16.
//

#ifndef ROBOT_AVIDE_H
#define ROBOT_AVIDE_H

#include "Enroute.h"

class aVide : public Enroute {
protected:
    aVide(){}
public:
    Etat* tourner();
    Etat* avancer();
    Etat* rencontrerPlot();
    std::string afficher();
    static aVide* instance(){return instanceUnique;}
private:
    static aVide* instanceUnique;
};


#endif //ROBOT_AVIDE_H
