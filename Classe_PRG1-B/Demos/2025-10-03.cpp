#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

void afficher(const int& param) {
   cout << param << endl;
}

int main () {
   int entier = 3;
   double reel = 3.14;
   const int cste = 15;

   afficher(12);
   afficher(entier);
   afficher(reel);
   afficher(cste);

   bool sortir = false;
   for (char car = 'a';car <= 'd';car++) {
      for (int i = 1; i <= 9; i++) {
         cout << car << i << " ";
         if (car == 'c' and i == 3) {
            sortir = true;
            break;
         }
      }
      if (sortir)
         break;
      cout << endl;
   }

   for (char car = 'a'; car <= 'd'; car++) {
      for (int i = 1; i <= 9; i++) {
         cout << car << i << " ";
         if (car == 'c' and i == 3)
            goto dehors;
      }
      cout << endl;
   }

   dehors:
      cout << "la suite ..." << endl;


   int entier  = 3;
   double reel = entier;

    // double  a = 3;
    //       int& ref_non_constante = a;
    // const int& ref_constante     = a;


   cout << a << ref << endl;

   return EXIT_SUCCESS;
}