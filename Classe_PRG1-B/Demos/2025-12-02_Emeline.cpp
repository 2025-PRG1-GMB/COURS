#include <iostream>
#include <cstdlib>
#include <span>
#include <vector>
using namespace std;

//-----------------------------------------------------------------------------
template<class T, size_t N>
ostream& operator << (ostream& os, span<T, N> s)  {
    os << "[";
    for (size_t i = 0; i < s.size(); i++) {
        if (i > 0) os << ", ";
        os << s[i];
    }
    return os << "]";
}

//-----------------------------------------------------------------------------
template<class T>
void echanger(T& lhs, T& rhs) {
    T tmp = lhs;
    lhs   = rhs;
    rhs   = tmp;
}

//-----------------------------------------------------------------------------
template<class T, size_t N>
size_t pos_min(span<T, N> s) {
    size_t iMin = 0;
    for (size_t i=1; i<s.size(); ++i) {
        if (s[i] < s[iMin]) {
            iMin = i;
        }
    }
    return iMin;
}

//-----------------------------------------------------------------------------
template<class T, size_t N>
void trier(span<T, N> s) {
    for (size_t i=0; i<s.size(); ++i) {
        size_t iMin = pos_min(s.subspan(i, s.size() - i)) + i;
        echanger(s[i], s[iMin]);
    }
}

//-----------------------------------------------------------------------------
int main() {
    vector v      {6, 2, 8, 7, 1, 3};
    array  a      {"chien"s, "chat"s, "souris"s, "poisson"s};
    double t[ ] = {6.1, 2.2, 8.3, 7.4, 1.5, 3.6};

    cout << span(v) << endl;
    trier(span(v));
    cout << span(v) << endl;

    cout << endl;

    cout << span(a) << endl;
    trier(span(a));
    cout << span(a) << endl;

    cout << endl;

    cout << span(t) << endl;
    trier(span(t));
    cout << span(t) << endl;

    return EXIT_SUCCESS;
}
