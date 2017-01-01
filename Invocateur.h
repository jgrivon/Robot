//
// Created by user on 06/12/16.
//

#ifndef ROBOT_INVOCATEUR_H
#define ROBOT_INVOCATEUR_H


#include <vector>

class Robot;

class Invocateur {

public:
    Invocateur();
    void setRobot(Robot* robot){ this->robot = robot;}
    void read(std::string path);
    std::vector<std::string> l;
    Robot* robot;
private:
};


#endif //ROBOT_INVOCATEUR_H
