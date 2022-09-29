/*  Classe Nuage.
 *  Lab3 -- Tableau dynamique générique
 *  INF3105 | Structures de données et algorithmes
 *  UQAM | Département d'informatique
 *  http://ericbeaudry.uqam.ca/INF3105/lab3/
 */
#include "nuage.h"

// Retourne une référence sur point le plus proche de p dans le nuage
const Point& Nuage::proche(const Point& p) const{
    // À compléter.
    return p;
}

// Retourne un sous-nuage à l'intérieur d'un rayon autour de p
Nuage Nuage::proches(const Point& p, double rayon) const{
    // À compléter.
    return Nuage();
}

// Retourne un sous-nuage contenant les n points les plus proches de p
Nuage Nuage::nproches(const Point& p, int n) const{
    // À compléter
    return Nuage();
}

// Écriture d'un nuage de points
std::ostream& operator << (std::ostream& os, const Nuage& nuage){
    for(int i=0;i<nuage.points.taille();i++)
        os << nuage.points[i] << std::endl;
    return os;
}

// Lecture d'un nuage de points
std::istream& operator >> (std::istream& is, Nuage& nuage){
    nuage.points.vider();
    while(is){
        Point p;
        is >> p >> std::ws;
        if(is) // Détection de la fin du fichier
            nuage.points.ajouter(p);
    }
    return is;
}
