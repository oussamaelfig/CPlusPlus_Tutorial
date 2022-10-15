/*
  INF3105 - Structures de données et algorithmes
  UQAM / Département d'informatique

  Auteur : Eric Beaudry
           beaudry.eric@uqam.ca
           http://ericbeaudry.ca/

  Tests unitaires pour la liste simplement chaînée.
*/

#include <iostream>
#include <stdlib.h>
#include "liste.h"

bool test1()
{
    std::cout << "Test #1 : Insertions à la fin." << std::endl;
    bool tests_reussis = true;

    Liste<int> liste;
    if(!liste.estVide()){
        std::cout << " >> Erreur #1" << std::endl;
        tests_reussis = false;
    }
    for(int i=1;i<5;i++){
        liste.inserer_fin(i);
        if(liste.estVide()){
            std::cout << " >> Erreur #2" << std::endl;
            tests_reussis = false;
        }
    }
    if(tests_reussis)
        std::cout << " >> OK" << std::endl;
    std::cout << "--------------------------" << std::endl;
    return tests_reussis;
}

bool test2()
{
    std::cout << "Test #2 : Vidage d'une liste." << std::endl;
    bool tests_reussis = true;
    Liste<int> liste;
    if(!liste.estVide()){
        std::cout << " >> Erreur #1" << std::endl;
        tests_reussis = false;
    }
    for(int i=1;i<5;i++){
        liste.inserer_fin(i);
        if(liste.estVide()){
            std::cout << " >> Erreur #2" << std::endl;
            tests_reussis = false;
        }
    }
    liste.vider();
    if(!liste.estVide()){
        std::cout << " >> Erreur #4" << std::endl;
        tests_reussis = false;
    }
    if(tests_reussis)
        std::cout << " >> OK" << std::endl;
    std::cout << "--------------------------" << std::endl;
    return tests_reussis;
}

bool test3()
{
    std::cout << "Test #3 : Plusieurs insertions et vidages." << std::endl;
    bool tests_reussis = true;

    for(int i=0;i<5;i++){
        Liste<int> liste1;
        for(int j=0;j<=i;j++){
            liste1.inserer_fin(j);
            if(liste1.estVide()){
                std::cout << " >> Erreur #1 : i=" << i << " j=" << j << std::endl;
                tests_reussis = false;
            }
        }
        liste1.vider();
        if(!liste1.estVide()){
            std::cout << " >> Erreur #2 : i=" << i << std::endl;
            tests_reussis = false;
        }
    }


    Liste<int> liste2;
    for(int i=0;i<5;i++){
        for(int j=0;j<=i;j++){
            liste2.inserer_fin(j);
            if(liste2.estVide()){
                std::cout << " >> Erreur #1 : i=" << i << " j=" << j << std::endl;
                tests_reussis = false;
            }
        }
        liste2.vider();
        if(!liste2.estVide()){
            std::cout << " >> Erreur #2 : i=" << i << std::endl;
            tests_reussis = false;
        }
    }

    if(tests_reussis)
        std::cout << " >> OK" << std::endl;
    std::cout << "--------------------------" << std::endl;
    return tests_reussis;
}

bool test4()
{
    std::cout << "Test #4 : vérification des itérateurs" << std::endl;
    bool tests_reussis = true;

    Liste<int> liste;
    for(int i=0;i<10;i++)
        liste.inserer_fin(i);
    
    Liste<int>::Iterateur iter=liste.debut();
    for(int i=0;i<10;i++){
        if(liste[iter] != i){
            std::cout << " >> Erreur #1 : i=" << i << std::endl;
            tests_reussis = false;
        }
        iter++;
    }
    if(iter){
        std::cout << " >> Erreur #2" << std::endl;
        tests_reussis = false;
    }
    if(tests_reussis)
        std::cout << " >> OK" << std::endl;
    std::cout << "--------------------------" << std::endl;
    return tests_reussis;
}

bool test5()
{
    std::cout << "Test #5 : Enlèvements au début." << std::endl;
    bool tests_reussis = true;

    Liste<int> liste;
    for(int i=0;i<10;i++)
        liste.inserer_fin(i);
    
    for(int i=0;i<10;i++){
        if(liste.estVide()){
            std::cout << " >> Erreur #1 : i=" << i << std::endl;
            tests_reussis = false;
        }
        Liste<int>::Iterateur iter = liste.debut();
        int v = liste[iter];
        if(v != i){
            std::cout << " >> Erreur #2 : i=" << i << std::endl;
            tests_reussis = false;
        }
        liste.enlever_debut();
    }
    if(tests_reussis)
        std::cout << " >> OK" << std::endl;
    std::cout << "--------------------------" << std::endl;
    return tests_reussis;
}

bool test6()
{
    std::cout << "Test #6 : Vérification des insertions avec itérateurs." << std::endl;
    bool tests_reussis = true;

    Liste<int> liste;
    for(int i=0;i<3;i++)
        liste.inserer_fin(10+i);
    for(int i=0;i<3;i++)
        liste.inserer_debut(i);

    Liste<int>::Iterateur iter=liste.debut();   
    if(liste[iter]!=2){
        std::cout << " >> Erreur 2" << std::endl;
        tests_reussis = false;
    }
    iter++;
    if(liste[iter]!=1){
        std::cout << " >> Erreur 1" << std::endl;
        tests_reussis = false;
    }
    ++iter;
    if(liste[iter]!=0){
        std::cout << " >> Erreur 0" << std::endl;
        tests_reussis = false;
    }
    iter++;

    if(liste[iter++]!=10){
        std::cout << " >> Erreur 10" << std::endl;
        tests_reussis = false;
    }

    if(liste[iter]!=11){
        std::cout << " >> Erreur 11" << std::endl;
        tests_reussis = false;
    }

    if(liste[++iter]!=12){
        std::cout << " >> Erreur 12" << std::endl;
        tests_reussis = false;
    }

    if(!iter){
        std::cout << " >> Erreur test avant fin" << std::endl;
        tests_reussis = false;
    }
    iter++;

    if(iter){
        std::cout << " >> Erreur test fin" << std::endl;
        tests_reussis = false;
    }

    if(tests_reussis)
        std::cout << " >> OK" << std::endl;
    std::cout << "--------------------------" << std::endl;
    return tests_reussis;
}

bool test7()
{
    std::cout << "Test #7 : Vérification de trouver." << std::endl;
    bool tests_reussis = true;

    Liste<int> liste;
    for(int i=5;i<10;i++)
        liste.inserer_fin(i);

    for(int i=0;i<5;i++){
        Liste<int>::Iterateur iter = liste.trouver(i);
        if(iter){
            std::cout << " >> Erreur trouver " << i << std::endl;
            tests_reussis = false;
        }
    }

    for(int i=5;i<10;i++){
        Liste<int>::Iterateur iter = liste.trouver(i);
        if(!iter){
            std::cout << " >> Erreur trouver " << i << std::endl;
            tests_reussis = false;
        }
        if(liste[iter]!=i){
            std::cout << " >> Erreur liste[iter]=" << liste[iter] << " !=" << i << std::endl;
            tests_reussis = false;
        }
    }

    for(int i=10;i<15;i++){
        Liste<int>::Iterateur iter = liste.trouver(i);
        if(iter){
            std::cout << " >> Erreur trouver " << i << std::endl;
            tests_reussis = false;
        }
    }

    if(tests_reussis)
        std::cout << " >> OK" << std::endl;
    std::cout << "--------------------------" << std::endl;
    return tests_reussis;
}

bool test8()
{
    std::cout << "Test #8 : Vérification trouver + insertion." << std::endl;
    bool tests_reussis = true;

    Liste<int> liste;
    liste.inserer_fin(1);
    liste.inserer_fin(3);
    liste.inserer_fin(6);

    liste.inserer(0, liste.trouver(1));
    liste.inserer(2, liste.trouver(3));
    liste.inserer(4, liste.trouver(6));
    liste.inserer(5, liste.trouver(6));
    liste.inserer(7, liste.trouver(10));

    int j=0;
    for(Liste<int>::Iterateur iter=liste.debut();iter;++iter){
        if(liste[iter]!=j){
            std::cout << " >> Erreur liste[iter]=" << liste[iter] << " !=" << j << std::endl;
            tests_reussis = false;
        }
        j++;
    }

    if(tests_reussis)
        std::cout << " >> OK" << std::endl;
    std::cout << "--------------------------" << std::endl;
    return tests_reussis;
}

bool test9()
{
    std::cout << "Test #9 : Vérification trouver dans liste vide." << std::endl;
    bool tests_reussis = true;

    Liste<int> liste;
    
    if(liste.trouver(1)){
        std::cout << " >> Erreur" << std::endl;
        tests_reussis = false;
    }

    if(tests_reussis)
        std::cout << " >> OK" << std::endl;
    std::cout << "--------------------------" << std::endl;
    return tests_reussis;
}

bool test10(){
    std::cout << "Test #10 : operateur ==" << std::endl;
    bool tests_reussis = true;

    Liste<int> liste1;
    Liste<int> liste2;

    for(int i=0;i<5;i++){
        if(!(liste1==liste2)){
            std::cout << " >> Erreur i=" << i << " a " << std::endl;
            tests_reussis = false;
        }
        if(!(liste2==liste1)){
            std::cout << " >> Erreur i=" << i << " b " << std::endl;
            tests_reussis = false;
        }
        liste1.inserer_debut(i);
        if(liste1==liste2){
            std::cout << " >> Erreur i=" << i << " c " << std::endl;
            tests_reussis = false;
        }
        if(liste2==liste1){
            std::cout << " >> Erreur i=" << i << " d " << std::endl;
            tests_reussis = false;
        }
        if(!(liste1==liste1)){
            std::cout << " >> Erreur i=" << i << " e " << std::endl;
            tests_reussis = false;
        }
        liste2.inserer_debut(i);
    }
    
    if(tests_reussis)
        std::cout << " >> OK" << std::endl;
    std::cout << "--------------------------" << std::endl;
    return tests_reussis;
}

bool test11(){
    std::cout << "Test #11 : operateur ==" << std::endl;
    bool tests_reussis = true;

    Liste<int> liste1;
    Liste<int> liste2;

    for(int i=0;i<5;i++){
        if(!(liste1==liste2)){
            std::cout << " >> Erreur i=" << i << " a " << std::endl;
            tests_reussis = false;
        }
        if(!(liste2==liste1)){
            std::cout << " >> Erreur i=" << i << " b " << std::endl;
            tests_reussis = false;
        }
        liste1.inserer_fin(i);
        if(liste1==liste2){
            std::cout << " >> Erreur i=" << i << " c " << std::endl;
            tests_reussis = false;
        }
        if(liste2==liste1){
            std::cout << " >> Erreur i=" << i << " d " << std::endl;
            tests_reussis = false;
        }
        liste2.inserer_fin(i);
        if(!(liste1==liste1)){
            std::cout << " >> Erreur i=" << i << " e " << std::endl;
            tests_reussis = false;
        }
    }
    
    if(tests_reussis)
        std::cout << " >> OK" << std::endl;
    std::cout << "--------------------------" << std::endl;
    return tests_reussis;
}

bool test12(){
    std::cout << "Test #12 : operateur =" << std::endl;
    bool tests_reussis = true;

    Liste<int> liste1;
    Liste<int> liste2;

    for(int i=0;i<5;i++)
        liste2.inserer_fin(i);
    liste2 = liste1;
    if(!liste2.estVide()){
        std::cout << " >> Erreur #1" << std::endl;
        tests_reussis = false;
    }


    for(int i=0;i<5;i++)
        liste1.inserer_fin(i);
    liste2 = liste1;
    if(liste2.estVide()){
        std::cout << " >> Erreur #2" << std::endl;
        tests_reussis = false;
    }
    if(!(liste1==liste2)){
        std::cout << " >> Erreur #3" << std::endl;
        tests_reussis = false;
    }
    if(!(liste2==liste1)){
        std::cout << " >> Erreur #4" << std::endl;
        tests_reussis = false;
    }

    Liste<int> liste3;
    liste3 = liste1;
    liste1.vider();

    if(!(liste3==liste2)){
        std::cout << " >> Erreur #5" << std::endl;
        tests_reussis = false;
    }
    if(!(liste2==liste3)){
        std::cout << " >> Erreur #6" << std::endl;
        tests_reussis = false;
    }

    liste3.inserer_debut(99);
    if((liste3==liste2)){
        std::cout << " >> Erreur #7" << std::endl;
        tests_reussis = false;
    }
    if((liste2==liste3)){
        std::cout << " >> Erreur #8" << std::endl;
        tests_reussis = false;
    }

    liste3 = liste3;
    if(liste2.estVide()){
        std::cout << " >> Erreur #9" << std::endl;
        tests_reussis = false;
    }
    
    if(tests_reussis)
        std::cout << " >> OK" << std::endl;
    std::cout << "--------------------------" << std::endl;
    return tests_reussis;
}

bool test13(){
    std::cout << "Test #13 : liste<string>" << std::endl;
    bool tests_reussis = true;

    Liste<std::string> liste1;
    Liste<std::string> liste2;
    liste1.inserer_debut("allo");
    liste1.inserer_debut("bonjours");
    liste1.inserer_debut("coucou");
    liste2.inserer_fin("coucou");
    liste2.inserer_fin("bonjours");
    liste2.inserer_fin("allo");

    if(!(liste2==liste1)){
        std::cout << " >> Erreur #1" << std::endl;
        tests_reussis = false;
    }
    if(!(liste1==liste2)){
        std::cout << " >> Erreur #2" << std::endl;
        tests_reussis = false;
    }

    if(liste1.trouver("allo") == liste1.fin()){
        std::cout << " >> Erreur #3" << std::endl;
        tests_reussis = false;
    }
    if(liste2.trouver("bonjours") == liste2.fin()){
        std::cout << " >> Erreur #4" << std::endl;
        tests_reussis = false;
    }

    if(liste1.trouver("a") != liste1.fin()){
        std::cout << " >> Erreur #5" << std::endl;
        tests_reussis = false;
    }
    if(liste2.trouver("a") != liste2.fin()){
        std::cout << " >> Erreur #6" << std::endl;
        tests_reussis = false;
    }
    
    if(tests_reussis)
        std::cout << " >> OK" << std::endl;
    std::cout << "--------------------------" << std::endl;
    return tests_reussis;
}

bool test14()
{
    std::cout << "Test #14 : test mémoire" << std::endl;
    std::cout << " Faites la commande :"
              << "   « ulimit -v 32768 »\n"
              << " avant de lancer ce test. Cela limitera la mémoire virtuelle à 32 Mo.\n" 
              << " S'il y a une fuite de mémoire importante, le programme devrait s'arrêter anormalement.\n"
              << " Par contre, si la fuite n'est pas assez importante, le test pourrait quand même passer.\n"
              << " Faites «ulimit -a» pour obtenir les limites en cours.\n"
              << " Faites «man ulimit» ou «ulimit --help» pour plus d'informations sur ulimit.\n"
              ;
    bool tests_reussis = true;

    for(int i=0;i<8;i++){
        Liste<double> liste1;
        for(int j=0;j<256*1024;j++)
            liste1.inserer_debut(j * 1.5f);
        // liste1 consomme 256*1024 * sizeof(double) = 2 Mo
        Liste<double> liste2;
        Liste<double> liste3;
        liste2 = liste1; 
        // liste1 + liste2 + liste3 : 4 Mo
        liste1 = liste3;
        // liste1 + liste2 + liste3 : 2 Mo
        // à la fin d'une itération, le destructeur est appelé automatiquement pour les 3 listes.
    }

    std::cout << "--------------------------" << std::endl;
    return tests_reussis;
}

int main()
{
    int nbEchecs = 0;
    if(!test1()) nbEchecs++;
    if(!test2()) nbEchecs++;
    if(!test3()) nbEchecs++;
    if(!test4()) nbEchecs++;
    if(!test5()) nbEchecs++;
    bool oktache3 = nbEchecs==0;
    if(!test6()) nbEchecs++;
    if(!test7()) nbEchecs++;
    if(!test8()) nbEchecs++;
    if(!test9()) nbEchecs++;
    if(!test10()) nbEchecs++;
    if(!test11()) nbEchecs++;
    if(!test12()) nbEchecs++;
    if(!test13()) nbEchecs++;
    if(!test14()) nbEchecs++;

    std::cout << std::endl << "SOMMAIRE DES TESTS:"  << std::endl;
    std::cout << "Nombre de tests échoués : " << nbEchecs << std::endl;
    if(oktache3){
        std::cout << " ==> Vous pouvez maintenant considérer de passer à la tâche #3." << std::endl;
    }
    if(nbEchecs == 0){
        std::cout << " ==> Tous les tests proposés ont réussis. BRAVO!" << std::endl;
        std::cout << " ==> N'oubliez pas que ces tests ne sont pas exhaustifs." << std::endl;
    }else{
        std::cout << " ==> Il faut travailler encore un peu. Courage!" << std::endl;
    }
    return nbEchecs;
}

