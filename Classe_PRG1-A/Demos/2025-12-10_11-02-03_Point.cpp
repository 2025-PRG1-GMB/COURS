#include <iostream>

using namespace std;

//------------------------------------------------------------
class Point {
public:
//   Point()                   : x(0), y(0) {}
   Point()                   : Point(0, 0) {}
   Point(double x, double y) : x(x), y(y) {}

   void  setX(double x) { this->x = x;    }
   void  setY(double y) { this->y = y;    }
   double getX() const  { return this->x; }
   double getY() const  { return this->y; }

   void afficher() const;
   void deplacer(double dx, double dy);

   void set_min_x(double min_x) { this->min_x = min_x; }
   void set_max_x(double min_x) { this->max_x = min_x; }

   void set_min_y(double min_y) { this->min_y = min_y; }
   void set_max_y(double min_y) { this->max_y = min_y; }

private:
   double x      =   0;
   double y      =   0;

   double min_x  =   0;
   double max_x  = 100;

   double min_y =    0;
   double max_y =  100;
};

void Point::afficher() const {
   cout << "(" << x << ", " << y << ")" << endl;
}

void Point::deplacer(double dx, double dy) {
   x += dx;
   if (x < min_x) x = min_x;
   if (x > max_x) x = max_x;

   y += dy;
   if (y < min_y) y = min_y;
   if (y > max_y) y = max_y;
}

//------------------------------------------------------------
int main() {
   Point centre;
   centre.afficher();

   return EXIT_SUCCESS;

   Point p(1.2, 2.4);
   p.afficher();

   p.deplacer(0.8, 0.6);
   p.afficher();

   p.setX(5.5);
   p.setY(10.3);
   cout << p.getX() << " -- " << p.getY() << endl;
}