//
// Created by user on 14/11/16.
//

#ifndef ROBOT_ENCHARGE_H
#define ROBOT_ENCHARGE_H


#include "Etat.h"

class enCharge : public Etat {
protected:
    enCharge(){}
public:
    Etat* avancer();
    Etat* tourner();
    Etat* rencontrerPlot();
    Etat* peser();
    std::string afficher();
    static enCharge* instance(){return instanceUnique;}
private:
    static enCharge* instanceUnique;
};


#endif //ROBOT_ENCHARGE_H
