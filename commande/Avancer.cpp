//
// Created by user on 22/11/16.
//

#include "Avancer.h"
#include "../Robot.h"

Avancer* Avancer::exemplaire = new Avancer();
Commande* Avancer::constructeurVirtuel(Invocateur* i) {
    return new Avancer(i);
}
Avancer::Avancer(Invocateur* i ) {

    x = atoi(i->l[1].c_str());
    y = atoi(i->l[2].c_str());
    robot = i->robot;
    old_x = robot->getPosition().getX();
    old_y = robot->getPosition().getY();
}
void Avancer::execute(){
    robot->avancer(x,y);
}

void Avancer::unexecute() {
    robot->avancer(old_x,old_y);
}
