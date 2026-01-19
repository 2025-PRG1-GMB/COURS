#include <iostream>
#include <cstdlib>
#include <array>
using namespace std;


//------------------------------------------------------------
void f(int* ptr) {
    cout << "contenur de ptr   : " <<  ptr << endl;
    cout << "adresse  de ptr   : " << &ptr << endl;
    cout << "valeur pointee    : " << *ptr << endl;
}

//------------------------------------------------------------
int main() {

    int* ptr = new int{15};
    cout << "valeur           : " << *ptr << endl;
    cout << "contenu de ptr   : " <<  ptr << endl;
    cout << "adresse de ptr   : " << &ptr << endl;

    *ptr = 21;
    cout << "valeur           : " << *ptr << endl;
    cout << "contenu de ptr   : " <<  ptr << endl;
    cout << "adresse de ptr   : " << &ptr << endl;

    cout << "delete ptr" << endl;
    delete ptr;
    ptr = nullptr;

    cout << "contenu de ptr   : " <<  ptr << endl;
    cout << "adresse de ptr   : " << &ptr << endl;

    ptr = new int{42};
    cout << "valeur           : " << *ptr << endl;
    cout << "contenu de ptr   : " <<  ptr << endl;
    cout << "adresse de ptr   : " << &ptr << endl;

    cout << "rappel pointeur .. " << endl;
    int entier = 12;
    cout << "valeur de entier  : " <<  entier << endl;
    cout << "adresse de entier : " << &entier << endl;
    f(&entier);


    short* p = new short{-1};
    cout << "valeur de          short  : " << *p << endl;
    cout << "valeur de unsignedshort   : " << *  (unsigned short*)p << endl;

    const int cste = 12;
    cout << "valeur de int          : " <<  cste << endl;
    int* ptrcste = (int*)&cste;
    cout << *ptrcste << endl;
    *ptrcste = 15;
    cout << *ptrcste << endl;
    cout << cste << endl;

    return EXIT_SUCCESS;



}

