#include <iostream>
#include <cstdlib>
#include <array>
using namespace std;


//------------------------------------------------------------
class C {
public:
    C(int i) : propriete(i)     { cout << "constructeur" << endl;}
    C& operator= (const C& c)   { propriete = c.propriete; cout << "affectation" << endl; return *this; }
private:
    int propriete;
};
//------------------------------------------------------------
int main() {

    C c1(3);
    C c2 = 4;
    c2 = 12;

    return EXIT_SUCCESS;



}

