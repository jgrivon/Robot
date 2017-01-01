//
// Created by user on 14/11/16.
//

#include "Etat.h"

const std::string error = "action impossible";
Etat::Etat(){}
Etat* Etat::avancer() {throw error;}
Etat* Etat::peser() {throw error;}
Etat* Etat::rencontrerPlot() {throw error;}
Etat* Etat::evaluerPlot() {throw error;}
Etat* Etat::figer() {throw error;}
Etat* Etat::poser() {throw error;}
Etat* Etat::repartir() {throw error;}
Etat*Etat::saisir() {throw error;}
Etat* Etat::tourner() {throw error;}
std::string Etat::afficher() {throw error;}