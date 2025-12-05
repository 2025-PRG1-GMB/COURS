#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
using namespace std;

class Point {
    friend ostream& operator << (ostream& os, const Point& point);

public:
    Point()                 : x(0), y(0)     , cste(0)  { cout << "Point()"                 << endl; };
    Point(int x, int y)     : x(x), y(y)     , cste(0)  { cout << "Point(x, y)"             << endl; };
    Point(const Point& p)   : x(p.x), y(p.y) , cste(0)  { cout << "Point(const Point& p)"   << endl; };
    ~Point()                                    { cout << "~Point()"                << endl; };

    int getX () const {return x;};
    int getY () const {return y;};
private:
    int x;
    int y;
    const int cste;
};

//-----------------------------------------------------------------------------
ostream& operator << (ostream& os, const Point& point) {
    return os << point.x << ' ' << point.y << endl;
}

//-----------------------------------------------------------------------------
int main() {
    Point p1;
    cout << p1 << endl;

    Point p2;
    p2 = p1;


    return EXIT_SUCCESS;
}
