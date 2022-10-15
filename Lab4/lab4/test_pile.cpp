/*
  INF3105 - Structures de données et algorithmes
  UQAM / Département d'informatique
*/

#include <iostream>
#include <stdlib.h>
#include "pile.h"

void test1();
void test2();

int main(){
    test1();
    test2();
    return 0;
}

void test1(){
    std::cout << "Test #1 : Test de la pile (opérations de base)" << std::endl;
    Pile<int> pile1;
    pile1.empiler(1);
    pile1.empiler(4);
    pile1.empiler(2);
    if(pile1.depiler() != 2)
        std::cout << "1 >> Erreur" << std::endl;
    if(pile1.depiler() != 4)
        std::cout << "2 >> Erreur" << std::endl;
    if(pile1.depiler() != 1)
        std::cout << "3 >> Erreur" << std::endl;
    if(!pile1.vide())
        std::cout << "4 >> Erreur" << std::endl;

    pile1.empiler(13);
    if(pile1.vide())
        std::cout << "5 >> Erreur" << std::endl;
    if(pile1.depiler() != 13)
        std::cout << "6 >> Erreur" << std::endl;
    if(!pile1.vide())
        std::cout << "7 >> Erreur" << std::endl;

    Pile<int> pile2;
    pile2.empiler(13);
    if(pile2.vide())
        std::cout << "8 >> Erreur" << std::endl;
    if(pile2.depiler() != 13)
        std::cout << "9 >> Erreur" << std::endl;
    if(!pile2.vide())
        std::cout << "10 >> Erreur" << std::endl;
    std::cout << "-------- Fin #1 --------------" << std::endl;
}

void test2(){
    std::cout << "Test #2 : Test de la pile (opérateur =)" << std::endl;
    Pile<int> pile1;
    pile1.empiler(1);
    pile1.empiler(4);
    pile1.empiler(2);
    Pile<int> pile2;
    pile2.empiler(20);
    pile2.empiler(21);
    pile2 = pile1;
    pile1.empiler(10);
    if(pile1.depiler() != 10)
        std::cout << "1 >> Erreur" << std::endl;
    if(pile1.depiler() != 2)
        std::cout << "2 >> Erreur" << std::endl;
    if(pile1.depiler() != 4)
        std::cout << "3 >> Erreur" << std::endl;
    if(pile1.vide())
        std::cout << "4 >> Erreur" << std::endl;
    pile2 = pile1;
    if(pile2.depiler() != 1)
        std::cout << "5 >> Erreur" << std::endl;
    if(!pile2.vide())
        std::cout << "6 >> Erreur" << std::endl;
    if(pile1.vide())
        std::cout << "7 >> Erreur" << std::endl;
    
    std::cout << "-------- Fin #2 --------------" << std::endl;
}


