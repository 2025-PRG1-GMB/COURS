#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
#include "2025-11-28 - echanger.hpp"
using namespace std;

string to_string(const vector<int>& v) {
    string resultat = "[";
    for (size_t i=0; i<v.size();++i) {
        if (i) resultat += ", ";
        resultat += to_string(v.at(i));
    }
    resultat +=  "]";
    return resultat;
}
ostream& operator<< (ostream& os, const vector<int>& v) {
    return os << to_string(v);
}

enum class Jour {Lundi, Mardi};

ostream& operator<< (ostream& os, Jour j) {
    static array JOURS = {"LUNDI", "MARDI"};
    return os << JOURS[(size_t)j];
}

int main() {

    int a = 12;
    int b = 21;
    echanger(a, b);

    cout << a << endl;
    cout << b << endl;


    vector<int> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int> v2 = {1, 6, 7, 8, 9, 10, 2, 3, 4, 5};
    cout << v1 << endl;
    cout << v2 << endl;

    echanger(v1, v2);
    cout << v1 << endl;
    cout << v2 << endl;

    cout << to_string(v1) << endl;
    cout << v1            << endl;

    cout << Jour::Lundi << endl;

    return EXIT_SUCCESS;
}
