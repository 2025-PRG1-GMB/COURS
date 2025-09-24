#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

// fonction en C
void plus1_par_adresse (int* adresse) {
   *adresse = *adresse + 1;
   cout << "dans plus1       : " << *adresse          << endl;
}

// fonction en C++
void plus1_par_reference (int& param) {
   param = param + 1;
   cout << "dans plus1       : " << param          << endl;
}

int main () {

   char car = 'a';
   int entier = 23;
   const int cste = 12;

   cout << "m\0essage" << endl;

   char* ptrCar = &car;
   cout << "contenu de car     : "  <<  car << endl;
   cout << "adresse de car     : "  << (void*)&car << endl;

   cout << "contenu de ptrCar  : "  <<  ptrCar << endl;
   cout << "adresse de ptrCar  : "  << &ptrCar << endl;
   cout << "contenu référencée : "  << *ptrCar << endl;

   // ptrCar = &entier;             // type s incompatibles
   const int* ptrInt  = &entier;    // un ptr non constant en RO
   int* const ptrCst  = &entier;    // un ptr constant en RW
//    ptrCst = &entier;             // pointeur constant
   ptrInt = &cste;

   int variable = 2;
   cout << "variable avant   : " << variable          << endl;
   plus1_par_adresse(&variable);
   cout << "variable après   : " << variable          << endl;

   cout << "variable avant   : " << variable          << endl;
   plus1_par_reference(variable);
   cout << "variable après   : " << variable          << endl;

   return EXIT_SUCCESS;
}
