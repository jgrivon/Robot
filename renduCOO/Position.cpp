//
// Created by user on 14/11/16.
//

#include "Position.h"

Position::Position(){
    x = 0;
    y = 0;
}

int Position::getX() {return x;}
int Position::getY() {return y;}
void Position::setX(int x) {this->x = x;}
void Position::setY(int y) {this->y = y;}