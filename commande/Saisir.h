//
// Created by user on 22/11/16.
//

#ifndef ROBOT_SAISIR_H
#define ROBOT_SAISIR_H


#include "Commande.h"
#include "../Objet.h"
#include "../etat/Etat.h"

class Saisir: public Commande
{
public:
    Saisir(Objet* o);
    virtual void execute();
private:
    Objet* o;

};


#endif //ROBOT_SAISIR_H
