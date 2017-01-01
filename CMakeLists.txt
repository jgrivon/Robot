cmake_minimum_required(VERSION 3.6)
project(robot)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Robot.cpp Robot.h etat/Etat.cpp etat/Etat.h etat/Enroute.cpp etat/Enroute.h etat/Fige.cpp etat/Fige.h Position.cpp Position.h Objet.cpp Objet.h Plot.cpp Plot.h etat/aVide.cpp etat/aVide.h etat/aVideFacePlot.cpp etat/aVideFacePlot.h etat/enChargeFacePlot.cpp etat/enChargeFacePlot.h etat/enCharge.cpp etat/enCharge.h afficheur/Afficheur.cpp afficheur/Afficheur.h afficheur/AfficheurRustique.cpp afficheur/AfficheurRustique.h commande/Commande.h commande/Avancer.cpp commande/Avancer.h commande/Commande.cpp commande/EvaluerPlot.cpp commande/EvaluerPlot.h commande/CommandeRobot.cpp commande/CommandeRobot.h Invocateur.cpp Invocateur.h commande/Figer.cpp commande/Figer.h commande/Peser.cpp commande/Peser.h commande/Poser.h commande/Poser.cpp commande/Annuler.cpp commande/Annuler.h commande/RencontrerPlot.cpp commande/RencontrerPlot.h)
add_executable(robot ${SOURCE_FILES})