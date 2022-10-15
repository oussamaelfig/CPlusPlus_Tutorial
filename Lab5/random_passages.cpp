/*
  INF3105 - Structures de données et algorithmes
  UQAM / Département d'informatique
  
  Lab5
  Programme pour générer des tests aléatoirement.
*/

#include <cstdlib>
#include <iostream>
#include <random>

int main(int argc, const char** argv)
{
    int nbpassages = 100000;
    int nbcartes = 10000;
    double delaimoyen = 1.0;

    if(argc>1) nbpassages = std::atoi(argv[1]);
    if(argc>2) nbcartes = std::atoi(argv[2]);
    if(argc>3) delaimoyen = std::atof(argv[3]);

    std::random_device rd;
    std::mt19937 gen(rd());
    std::exponential_distribution<> dist2(1/delaimoyen);
    std::uniform_int_distribution<> dist10000(0, nbcartes-1); // Nécessite un compilateur supportant la norme C++ 2011 (-std=c++11).

    double time = 0;
    for(int i=0;i<nbpassages;i++)
    {  
        double dt = dist2(gen);
        int carte = dist10000(gen); 
    
        time += dt;

        std::cout << (int)time << "\t" << (10000 + carte) << std::endl;
  }
}

