//
// Created by user on 14/11/16.
//

#include <iostream>
#include "Robot.h"
#include "afficheur/Afficheur.h"

Robot::Robot() {
    position = Position();
    direction = "N";
    etat = aVide::instance();
    objet = Objet();
    plot = Plot();

}

Objet Robot::getObjet() { return objet;}
void Robot::avancer(int x, int y)
{
    try {
        etat = etat->avancer();
        position.setX(x);
        position.setY(y);
        notify();
    }
    catch(std::string const& e ){
        std::cout << e << std::endl;
    }

}

void Robot::figer()
{
    try{
        etat = etat->figer();
        notify();
    }
    catch(std::string const& e){
        std::cout << e << std::endl;
    }
}

int Robot::evaluerPlot()
{
    try{
        etat = etat->evaluerPlot();
        notify();
        return plot.getHauteur();
    }
    catch(std::string const& e){
        std::cout << e << std::endl;
    }
}

int Robot::peser() {
    try{
        etat = etat->peser();
        notify();
        return objet.getPoids();
    }
    catch(std::string const& e){
        std::cout << e << std::endl;
    }
}

void Robot::poser()
{
    try{
        etat = etat->poser();
        plot = NULL;
        notify();
    }
    catch(std::string const& e){
        std::cout << e << std::endl;
    }
}

void Robot::rencontrerPlot(Plot p)
{
    try{
        etat = etat->rencontrerPlot();
        plot = p;
        notify();
    }
    catch(std::string const& e){
        std::cout << e << std::endl;
    }
}

void Robot::repartir()
{
    try{
        etat = etat->repartir();
        notify();
    }
    catch(std::string const& e){
        std::cout << e << std::endl;
    }
}

void Robot::saisir(Objet o)
{
    try{
        etat = etat->saisir();
        objet = o;
        notify();
    }
    catch(std::string const& e){
        std::cout << e << std::endl;
    }
}

void Robot::tourner(std::string direction)
{
    try{
        etat = etat->tourner();
        this->direction = direction;
        notify();
    }
    catch(std::string const& e){
        std::cout << e << std::endl;
    }
}

Etat* Robot::getEtat() {return etat;}
Position Robot::getPosition() {return position;}
std::string Robot::getDirection() {return direction;}
void Robot::ajouterAfficheur(Afficheur* afficheur) {afficheurs.push_back(afficheur);}

void Robot::notify()
{
    for(int i  = 0;i<afficheurs.size();i++){
        afficheurs[i]->update();
    }
}
