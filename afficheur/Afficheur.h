//
// Created by user on 25/11/16.
//

#ifndef ROBOT_AFFICHEUR_H
#define ROBOT_AFFICHEUR_H


#include "../Robot.h"

class Afficheur {
public:
    Afficheur(Robot* r):robot(r){}
    virtual void update() = 0;
protected:
    Robot* robot;

};


#endif //ROBOT_AFFICHEUR_H
