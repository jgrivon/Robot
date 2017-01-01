//
// Created by user on 06/12/16.
//

#ifndef ROBOT_COMMANDEROBOT_H
#define ROBOT_COMMANDEROBOT_H


#include "Commande.h"
#include "../Robot.h"

class CommandeRobot  : public Commande{
public:
    CommandeRobot(std::string c):Commande(c){}
    CommandeRobot(){}
    Robot* robot;

};


#endif //ROBOT_COMMANDEROBOT_H
