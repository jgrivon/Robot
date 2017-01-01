//
// Created by user on 14/11/16.
//

#ifndef ROBOT_ETAT_H
#define ROBOT_ETAT_H
#include <string>
#include "../Position.h"
#include "../Objet.h"
#include "../Plot.h"
#include "Etat.h"

class Etat {
public:
    Etat();
    virtual Etat* avancer();
    virtual Etat* tourner();
    virtual Etat* saisir();
    virtual Etat* rencontrerPlot();
    virtual Etat* poser();
    virtual Etat* peser();
    virtual Etat* evaluerPlot();
    virtual Etat* figer();
    virtual Etat* repartir();
    virtual std::string afficher();


};


#endif //ROBOT_ETAT_H
