//
// Created by user on 22/11/16.
//

#ifndef ROBOT_COMMANDE_H
#define ROBOT_COMMANDE_H
#include <string>
#include "../etat/Etat.h"
#include "../Invocateur.h"
#include <map>
#include <stack>

class Commande {
public:
    static std::map<std::string,Commande*>& commandesInscrites();
    static std::stack<Commande*> commandesExecutees;
    static Commande* nouvelleCommande(Invocateur* i){return commandesInscrites()[i->l[0]]->constructeurVirtuel(i);}
    Commande(){}
    virtual Commande* constructeurVirtuel(Invocateur * i)=0;
    Commande(std::string c);
    virtual void execute()=0;
    virtual void unexecute()=0;
    bool reversible;
private:


};


#endif //ROBOT_COMMANDE_H
