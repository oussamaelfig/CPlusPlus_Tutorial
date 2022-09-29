/*  Classe Nuage.
 *  Lab3 -- Tableau dynamique générique
 *  INF3105 | Structures de données et algorithmes
 *  UQAM | Département d'informatique
 *  http://cria2.uqam.ca/INF3105/lab3/
 */
#if !defined(__NUAGE_H__)
#define __NUAGE_H__

#include <iostream>
#include "point.h"
#include "tableau.h"

class Nuage {
  public:
    // Retourne le point le plus proche de p
    const Point& proche(const Point& p) const;

    // Retourne le sous-nuage à l'intérieur d'un rayon autour de p
    Nuage proches(const Point& p, double rayon) const;

    // Retourne le sous-nuage contenant les n points les plus proches de p
    Nuage nproches(const Point& p, int n) const;
    
  private:
    Tableau<Point> points;

  friend std::ostream& operator << (std::ostream&, const Nuage&);
  friend std::istream& operator >> (std::istream&, Nuage&);
};

#endif
