#include <iostream>
#include "Robot.h"
#include "afficheur/AfficheurRustique.h"

int main() {
    Robot robot = Robot();
    AfficheurRustique* ar = new AfficheurRustique(&robot);
    robot.ajouterAfficheur(ar);

    robot.avancer(0,1);
    robot.rencontrerPlot(Plot());
    robot.figer();
    robot.repartir();
    robot.evaluerPlot();
    robot.tourner("S");
    robot.avancer(2,3);
    return 0;
}