#include <iostream>
#include <assert.h>
#include "Robot.h"
#include "afficheur/AfficheurRustique.h"
#include "commande/Commande.h"
#include "Invocateur.h"

int main() {

    Robot* robot = new Robot();
    AfficheurRustique* ar = new AfficheurRustique(robot);
    robot->ajouterAfficheur(ar);

    Invocateur invocateur = Invocateur();
    invocateur.robot = robot;
    invocateur.read("C:\\Users\\Zineb\\Documents\\Courses\\SI4\\COO\\git\\Robot\\commandes.txt");

    return 0;
}