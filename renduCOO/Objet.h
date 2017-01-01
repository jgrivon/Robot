//
// Created by user on 14/11/16.
//

#ifndef ROBOT_OBJET_H
#define ROBOT_OBJET_H


class Objet {
public:
    Objet();
    Objet(int poids):poids(poids){}
    int getPoids();
private:
    int poids;

};


#endif //ROBOT_OBJET_H
