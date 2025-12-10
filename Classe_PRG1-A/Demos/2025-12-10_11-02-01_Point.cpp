#include <iostream>

using namespace std;

//------------------------------------------------------------
struct Point {
   void afficher() const;
   void deplacer(double dx, double dy);

   double x = 0;
   double y = 0;
};

void Point::afficher() const {
   cout << "(" << x << ", " << y << ")" << endl;
}

void Point::deplacer(double dx, double dy) {
   x += dx;
   y += dy;
}

//------------------------------------------------------------
void afficher (const Point& p) {
   cout << "(" << p.x << ", " << p.y << ")" << endl;
}

//------------------------------------------------------------
int main() {
   Point centre{};            // structure
   centre.afficher();
//   afficher(centre);

   Point p{1.2, 2.4};
   p.afficher();
   p.deplacer(0.8, 0.6);
   p.afficher();

   p.x =  5.5;
   p.y = 10.3;
   cout << p.x << " -- " << p.y << endl;
}