//
// Created by user on 25/11/16.
//

#include <iostream>
#include "AfficheurRustique.h"

void AfficheurRustique::update()
{
    std::cout << robot->getEtat()->afficher() << ", Position:(" <<robot->getPosition().getX()<< "," << robot->getPosition().getY() << "), Direction:" << robot->getDirection() << std::endl;

}