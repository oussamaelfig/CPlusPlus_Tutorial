/*
  INF3105 - Structures de données et algorithmes
  UQAM / Département d'informatique
*/

#include <iostream>
#include <stdlib.h>
#include "file.h"

void test1();
void test2();

int main(){
    test1();
    test2();
    return 0;
}


void test1(){
    std::cout << "Test #1 : Test de la file (opérations de base)" << std::endl;
    File<int> file1;
    file1.enfiler(1);
    file1.enfiler(4);
    file1.enfiler(2);
    if(file1.defiler() != 1)
        std::cout << "1 >> Erreur" << std::endl;
    if(file1.defiler() != 4)
        std::cout << "2 >> Erreur" << std::endl;
    if(file1.defiler() != 2)
        std::cout << "3 >> Erreur" << std::endl;
    if(!file1.vide())
        std::cout << "4 >> Erreur" << std::endl;
    
    file1.enfiler(13);
    if(file1.vide())
        std::cout << "5 >> Erreur" << std::endl;
    if(file1.defiler() != 13)
        std::cout << "6 >> Erreur" << std::endl;
    if(!file1.vide())
        std::cout << "7 >> Erreur" << std::endl;
    
    File<int> file2;
    file2.enfiler(13);
    if(file2.vide())
        std::cout << "8 >> Erreur" << std::endl;
    if(file2.defiler() != 13)
        std::cout << "9 >> Erreur" << std::endl;
    if(!file2.vide())
        std::cout << "10 >> Erreur" << std::endl;

    File<int> file3;
    file3.enfiler(13);
    file3.enfiler(14);
    
    std::cout << "-------- Fin #1 --------------" << std::endl;
}

void test2(){
    std::cout << "Test #2 : Test de la file (opérateur =)" << std::endl;
    File<int> file1;
    file1.enfiler(1);
    file1.enfiler(4);
    file1.enfiler(2);
    File<int> file2;
    file2.enfiler(20);
    file2.enfiler(21);
    file2 = file1;
    file1.enfiler(10);
    if(file1.defiler() != 1)
        std::cout << "1 >> Erreur" << std::endl;
    if(file1.defiler() != 4)
        std::cout << "2 >> Erreur" << std::endl;
    if(file1.defiler() != 2)
        std::cout << "3 >> Erreur" << std::endl;
    if(file1.vide())
        std::cout << "4 >> Erreur" << std::endl;
    file2 = file1;
    if(file2.defiler() != 10)
        std::cout << "5 >> Erreur" << std::endl;
    if(!file2.vide())
        std::cout << "6 >> Erreur" << std::endl;
    if(file1.vide())
        std::cout << "7 >> Erreur" << std::endl;
    
    std::cout << "-------- Fin #2 --------------" << std::endl;
}
