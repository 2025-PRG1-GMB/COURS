#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;


int main () {
/*
   int nbre;
   cout << "combien de personne ? :";
   cin  >> nbre;

   if (nbre < 0)
      cout << "tu sais pas lire ...";
   else {
      cout << "il y a " << nbre;

      if (nbre <= 1)
         cout << "personne :";
      else
         cout << "personnes :";
   }

   if (nbre < 0)
      cout << "tu sais pas lire ...";
   else {
      cout << "il y a " << nbre << (nbre > 1 ? "personne" : "personnes");
   }

   // expression ? réponse oui : réponse non

   int a, b, c;
   cin >> a >> b >> c ;
   // min(a, b)
   cout << (a < b ? a : b ) << endl;

   // min(a, b, c)
   cout << (a < b ?
                    a < c ? a : c :   // entre a et b
                    b < c ? b : c )   // entre b et c
        << endl;

*/
   int jour;
   cin >> jour;
   switch (jour) {
      case 1: cout << "lundi"    << endl; break;
      case 2: cout << "mardi"    << endl; break;
      case 3: cout << "mercredi" << endl; break;
      case 4: cout << "jeudi"    << endl; break;
      case 5: cout << "vendredi" << endl; break;
      case 6: cout << "samedi"   << endl; break;
      case 7: cout << "diamche"  << endl; break;
      default : cout << "tu sais pas lire ..." << endl;
   }

   switch (jour) {
      default : cout << "tu sais pas lire ..." << endl; break;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5: cout << "semaine";
              cout << endl;
              break;
      case 6:
      case 7: cout << "week-end"  << endl; break;
   }

   // types discrets ?
   // int, char, emnum, boolean

   // valeur b10 => valeur b16
   int valeur;
   switch (valeur) {
      case  1 : cout << '1';
      case  9 : cout << '1';
      case 10 : cout << 'a';
      case 11 : cout << 'b';
      case 12 : cout << 'c';
      case 13 : cout << 'd';
      case 14 : cout << 'e';
      case 15 : cout << 'f';
   }

   cout << (char)( valeur <= 9 ? valeur + '0' : valeur - 10 + 'a') << endl;

   return EXIT_SUCCESS;
}
