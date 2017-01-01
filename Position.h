//
// Created by user on 14/11/16.
//

#ifndef ROBOT_POSITION_H
#define ROBOT_POSITION_H


class Position {

public :
    Position();
    Position(int x,int y):x(x),y(y){}
    int getX();
    int getY();
    void setX(int x);
    void setY(int y);
private:
    int x,y;
};


#endif //ROBOT_POSITION_H
