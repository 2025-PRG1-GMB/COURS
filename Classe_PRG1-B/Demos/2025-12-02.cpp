#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
using namespace std;

class Point {
    friend ostream& operator << (ostream& os, const Point& point);
    friend void put (const Point& point);

public:
    Point()                 : x(0), y(0)        { cout << "Point()"                 << endl; };
//    Point() = default;
    Point(int x, int y)     : x(x), y(y)        { cout << "Point(x, y)"             << endl; };
    Point(const Point& p)   : x(p.x), y(p.y)    { cout << "Point(const Point& p)"   << endl; };
    ~Point()                                    { cout << "~Point()"                << endl; };


    void aficher() const {  cout << "coucou"   << endl; };

    int getX () const {return x;};
    int getY () const {return y;};
private:
    int x;
    int y;
};

void put (const Point& point) {
    cout << point.x << ' ' << point.y << endl;
}

ostream& operator << (ostream& os, const Point& point) {
    return os << point.x << ' ' << point.y << endl;
}


int main() {
    Point p1;
    cout << p1 << endl;

    Point p2(1, 2);
    cout << p2 << endl;

//    array<Point, 3> a1 {p2, p2, p2};
    array<Point, 3> a2;

    cout << "avant p3" << endl;
    Point p3 = p1;
    {
        Point p4(p1);
        cout << p4 << endl;
    }


    cin.get();

    return EXIT_SUCCESS;
}
