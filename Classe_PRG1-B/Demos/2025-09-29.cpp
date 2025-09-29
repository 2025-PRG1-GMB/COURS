#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

int main () {

   int a = 2;
   int b = 4;

   if (a < b)
      a = a * b;
   else
      b = a - b;

   a = a < b ? a = a * b : a = b - a;
       a < b ? a = a * b : b = b - a;

   42;

   int jour;
   string nom_jour;
   cout << "entre le jour : ";
   cin >> jour;

   if (jour == 1)
      nom_jour = "lundi";
   else if (jour == 2)
      nom_jour = "mardi";
   else if (jour == 3)
      nom_jour = "mercredi";
   cout << nom_jour << endl;

   // fièvre
   double temp = 23.5;
   if (temp < 36)
      cout << "pas bon";
   else if (temp < 37.5)
      cout << "pas grave";
   else if (temp < 39)
      cout << "fievre";
   else
      cout << "hopital";

   int var = 6;
   switch (jour) {
      default: cout << jour; nom_jour = "unknown"; break;
      case 1 :
      case 2 :
      case 3 :
      case 4 :
      case 5 : cout << jour; nom_jour = "semaine";
               cout << "la suite .."<< endl;
               break;
      case 6 :
      case 7 : cout << jour; nom_jour = "week-end"; break;
   }
   cout << nom_jour << endl;

   string mot = "bonjour";

   return EXIT_SUCCESS;
}