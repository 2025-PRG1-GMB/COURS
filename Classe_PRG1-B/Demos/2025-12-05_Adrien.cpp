#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
using namespace std;

//-----------------------------------------------------------------------------
template <typename T>
class Point;

//-----------------------------------------------------------------------------
template <typename T>
ostream& operator << (ostream& os, const Point<T>& point);

template <typename T>
void put (const Point<T>& point);

//-----------------------------------------------------------------------------
template <typename T>
class Point {
    friend ostream& operator << <> (ostream& os, const Point<T>& point);
    friend void     put         <> (const Point<T>& point);

public:
    Point()                 : x(0), y(0)        { cout << "Point()"                 << endl; };
    Point(T x, T y)         : x(x), y(y)        { cout << "Point(x, y)"             << endl; };
    Point(const Point& p)   : x(p.x), y(p.y)    { cout << "Point(const Point& p)"   << endl; };
    ~Point()                                    { cout << "~Point()"                << endl; };

    T getX () const {return x;};
    T getY () const {return y;};
private:
    T x;
    T y;
};

//-----------------------------------------------------------------------------
template <typename T>
void put (const Point<T>& point) {
    cout << point.x << ' ' << point.y << endl;
}

//-----------------------------------------------------------------------------
template <typename T>
ostream& operator << (ostream& os, const Point<T>& point) {
    return os << point.x << ' ' << point.y << endl;
}

//-----------------------------------------------------------------------------
int main() {
    Point<int> p1;
    cout << p1 << endl;

    Point<double> p2(1, 2);
    cout << p2 << endl;

//    array<Point, 3> a1 {p2, p2, p2};
    array<Point<char>, 3> a2;

    cout << "avant p3" << endl;
    Point p3 = p1;
    {
        Point p4(p1);
        cout << p4 << endl;
    }

    return EXIT_SUCCESS;
}
