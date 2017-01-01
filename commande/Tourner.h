//
// Created by user on 22/11/16.
//

#ifndef ROBOT_TOURNER_H
#define ROBOT_TOURNER_H


#include "Commande.h"

class Tourner : public Commande{
public:
    Tourner();
    virtual void execute();
private:
    std::string direction;

};


#endif //ROBOT_TOURNER_H
