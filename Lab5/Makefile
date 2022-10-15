#Makefile pour Lab5

#Configuration standard
OPTIONS =

#Configuration avec debugage
#OPTIONS = -g -O0 -Wall

#Configuration avec optimisation
#OPTIONS = -O3 -Wall

all: test_liste lab5 random_passages

test_liste: test_liste.cpp liste.h
	g++ $(OPTIONS) -o test_liste test_liste.cpp

lab5: lab5.cpp liste.h
	g++ $(OPTIONS) -o lab5 lab5.cpp

random_passages: random_passages.cpp
	g++ $(OPTIONS) -o random_passages random_passages.cpp

clean :
	rm -f test_liste
	rm -f lab5
	rm -f random_passages
