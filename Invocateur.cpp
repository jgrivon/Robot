//
// Created by user on 06/12/16.
//

#include <fstream>
#include <iostream>
#include <sstream>
#include "Invocateur.h"
#include "commande/Commande.h"
#include "commande/CommandeRobot.h"

std::vector<std::string> split(const std::string &s, char delim) ;
const std::string annuler = "ANNULER";

Invocateur::Invocateur() {}
void Invocateur::read(std::string path) {
    std::ifstream input(path);
    if(input){
        std::string line;
        while(getline(input,line)){
            l = split(line,' ');
            if(!l.empty()){
                Commande * c = Commande::nouvelleCommande(this);
                c->execute();
                if(l[0].compare(annuler)){
                    Commande::commandesExecutees.push(c);
                }
                l.clear();
            }
        }
    }else{
        std::cout << "Wrong input file" <<std::endl;
    }
}


std::vector<std::string> split(const std::string &s, char delim) {
    std::stringstream ss(s);
    std::string item;
    std::vector<std::string> tokens;
    while (getline(ss, item, delim)) {
        tokens.push_back(item);
    }
    return tokens;
}
