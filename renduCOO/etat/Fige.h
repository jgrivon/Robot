//
// Created by user on 14/11/16.
//

#ifndef ROBOT_FIGÉ_H
#define ROBOT_FIGÉ_H


#include "Etat.h"

class Fige : public Etat{
protected:
    Fige(){}
public:
    Etat* repartir();
    std::string afficher();
    static Fige* instance(){return instanceUnique;}
    static Etat* ancienEtat(){return ancien_etat;}
    static void nouvel_etat(Etat* nouveau){ancien_etat = nouveau;}
private:
    static Fige* instanceUnique;
    static Etat* ancien_etat;

};


#endif //ROBOT_FIGÉ_H
