//
// Created by user on 14/11/16.
//

#ifndef ROBOT_ENROUTE_H
#define ROBOT_ENROUTE_H

#include "Etat.h"
class Enroute : public Etat{
protected:
    Enroute(){}
public:
    Etat* figer();
    std::string afficher();
    static Enroute* instance(){return instanceUnique;}
private:
    static Enroute* instanceUnique;
};


#endif //ROBOT_ENROUTE_H
