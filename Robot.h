//
// Created by user on 14/11/16.
//

#ifndef ROBOT_ROBOT_H
#define ROBOT_ROBOT_H
#include <string>
#include "Position.h"
#include "Objet.h"
#include "Plot.h"
#include "etat/Etat.h"
#include "etat/aVide.h"
#include "commande/Commande.h"
#include "commande/CommandeRobot.h"
#include <vector>

class Afficheur;
class Robot {

public:

    Robot();
    void avancer(int x,int y);
    void tourner(std::string direction);
    void saisir(Objet o);
    void rencontrerPlot(Plot p);
    void poser();
    int peser();
    int evaluerPlot();
    void figer();
    void repartir();
    void notify();
    Etat* getEtat();
    Position getPosition();
    std::string getDirection();
    Objet getObjet();
    void ajouterAfficheur(Afficheur* afficheur);

private:
    std::vector<Afficheur*> afficheurs;
    Position position;
    std::string direction;
    Etat* etat;
    Plot plot;
    Objet objet;
};


#endif //ROBOT_ROBOT_H
