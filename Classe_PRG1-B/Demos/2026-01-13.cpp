#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;

//------------------------------------------------------------
template <typename T>
class Coord {
public:
   Coord()           : Coord(T(), T()) {};
   Coord(T x, T y)   : x(x), y(y)      {};

   void  setCoord(T x, T y);
   T getX() const { return x; }
   T getY() const { return y; }

   void deplacer(T dx, T dy);
   void afficher() const;

private:
   T x;
   T y;
};

//------------------------------------------------------------
template <typename T>
class Point {
public:
   Point() : nom(), coord() {}
   Point(const string& nom)                        : nom(nom), coord()       {}
   Point(const string& nom, const Coord<T>& coord) : nom(nom), coord(coord)  {}
   Point(const string& nom, T x, T y)              : nom(nom), coord(x, y)   {}

   void setNom   (const string&   nom);
   void setCoord (const Coord<T>& coord);

   string   getNom ()   const { return nom;   }
   Coord<T> getCoord () const { return coord; }

   void deplacer(T dx, T dy);
   void afficher() const;
private:
   string   nom;
   Coord<T> coord;
};

//------------------------------------------------------------
enum class Quadrant { I, II, III, IV };

template<typename T, Quadrant q>
bool est_dans_quadrant (Point<T> const& p) {
   switch (q) {
      case Quadrant::I :
         return p.getCoord().getX() > 0 and p.getCoord().getY() > 0;
      case Quadrant::II :
         return p.getCoord().getX() < 0 and p.getCoord().getY() > 0;
      case Quadrant::III :
         return p.getCoord().getX() < 0 and p.getCoord().getY() < 0;
      case Quadrant::IV :
         return p.getCoord().getX() > 0 and p.getCoord().getY() < 0;
      default:
         return false;
   }
}

//-----------------------------------------------------------------------------
template <typename Const_Iterateur>
void listerPoints(Const_Iterateur first, Const_Iterateur last) {
   for (Const_Iterateur iter = first; iter != last; ++iter) {
      iter->afficher();  // ou (*iter).afficher();
      cout << endl;
   }
}

//-----------------------------------------------------------------------------
int main() {
    vector<Point<int>> dessin {{"p1",  1,  2},
                               {"p2",  4,  2},
                               {"p3",  9,  8},
                               {"p4", -1,  5},
                               {"p5",  3, -1},
                               {"p6",  7,  0}};

   cout << count_if(dessin.begin(), dessin.end(),est_dans_quadrant<int,Quadrant::I>);

   listerPoints(dessin.begin(), dessin.end());

    return EXIT_SUCCESS;
}

//------------------------------------------------------------
//   class Coord
//------------------------------------------------------------
template <typename T>
void Coord<T>::setCoord(T x, T y) {
   this->x = x;
   this->y = y;
}

//------------------------------------------------------------
template <typename T>
void Coord<T>::deplacer(T dx, T dy) {
   this->x += dx;
   this->y += dy;
}

//------------------------------------------------------------
template <typename T>
void Coord<T>::afficher() const {
   cout << "(" << this->x << ", " << this->y << ")";
}

//------------------------------------------------------------
//   class Point
//------------------------------------------------------------
template <typename T>
void Point<T>::setNom   (const string& nom) {
   this->nom = nom;
}

//------------------------------------------------------------
template <typename T>
void Point<T>::setCoord (const Coord<T>& coord) {
   this->coord = coord;
}

//------------------------------------------------------------
template <typename T>
void Point<T>::deplacer(T dx, T dy) {
   this->coord.deplacer(dx, dy);
}

//------------------------------------------------------------
template <typename T>
void Point<T>::afficher() const {
   cout << this->nom;
   this->coord.afficher();
}
