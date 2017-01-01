//
// Created by user on 14/11/16.
//

#ifndef ROBOT_PLOT_H
#define ROBOT_PLOT_H


class Plot {

public:
    Plot();
    Plot(int hauteur):hauteur(hauteur){}
    int getHauteur();
private:
    int hauteur;

};


#endif //ROBOT_PLOT_H
