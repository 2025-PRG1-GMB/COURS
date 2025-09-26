#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

int main () {
/*
   int valeur;
   cin >> valeur;
   cout << (valeur < 10 ? "oui" : 'a') << endl;

   if (d == 0.) {
      r = 1e100;     // d==0
   } else {
      r = n/d;       // d!=0
   }

   //            vrai    faux
   r = d == 0. ? 1e100 : n/d;
   r = d       ? n/d : 1e100 ;


   if (a != 0)    // a != 0 => boolean
      cout << "oui";

   if (a)         // a != 0 => boolean
      cout << "oui";
   */

   int a = 2, b=5, c=7;
   // min(a, b)
   cout << (a < b ? a : b) << endl;

   // min(a, b, c)
   cout << (a < b ? a < c ? a : c : b < c ? b : c) << endl;

   return EXIT_SUCCESS;
