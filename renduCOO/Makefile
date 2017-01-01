

#compiler
COMPILER = g++
#linker
LINKER =g++

#options for linker and compiler
FLAGS =-g -ansi -Wall -Wextra -Wold-style-cast -Woverloaded-virtual -D_DEBUG_ -std=c++11

EXE_NAME= robot.exe

#can have several ones separated by spaces, only cpp files
SOURCES = main.cpp Robot.cpp Robot.h etat/Etat.cpp etat/Etat.h etat/Enroute.cpp etat/Enroute.h etat/Fige.cpp etat/Fige.h Position.cpp Position.h Objet.cpp Objet.h Plot.cpp Plot.h etat/aVide.cpp etat/aVide.h etat/aVideFacePlot.cpp etat/aVideFacePlot.h etat/enChargeFacePlot.cpp etat/enChargeFacePlot.h etat/enCharge.cpp etat/enCharge.h afficheur/Afficheur.cpp afficheur/Afficheur.h afficheur/AfficheurRustique.cpp afficheur/AfficheurRustique.h commande/Commande.h commande/Avancer.cpp commande/Avancer.h commande/Commande.cpp


#PATH to extra header used in the project (when using libs not installed in the OS)
INC_PATHS= -I

#extra libs used in the project (for instance -lpthread)
LIBS	= -L

LINKOBJ	= $(SOURCES:.cpp=.o)
SOURCEHEADERS = $(SOURCES:.cpp=.h)

$(EXE_NAME): $(LINKOBJ)
	$(LINKER) $(LINKOBJ) $(INC_PATHS) $(LIBS) -o $(EXE_NAME) $(FLAGS)

%.o: %.cpp %.h
	$(COMPILER) -g -c $< -o $@ $(INC_PATHS) $(FLAGS)

# cleanup
clean:
	rm *.o
