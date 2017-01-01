//
// Created by user on 25/11/16.
//

#ifndef ROBOT_AFFICHEURRUSTIQUE_H
#define ROBOT_AFFICHEURRUSTIQUE_H


#include "Afficheur.h"

class AfficheurRustique : public Afficheur {
public:
    AfficheurRustique(Robot* r):Afficheur(r){}
    virtual void update();

};


#endif //ROBOT_AFFICHEURRUSTIQUE_H
