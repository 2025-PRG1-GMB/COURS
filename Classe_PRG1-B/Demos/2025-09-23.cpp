#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

int main () {

   char X = 65;
   char Y = 'B' + 1; // 66 + 1
   int  Z = 'A';

   cout << X + 1 << endl;
   cout << Y     << endl;
   cout << Z     << endl;

   /*
   string str_1 = "ABC";
   string str_2= str_1 + "autre";
   string str_3= str_1 + 'a';
   string str_4= str_1 + 1;
   string str_5= "abc" + "def";
*/

   int* ptr1 = &Z;
   int* ptr2 = &Z;

   /*
   int* autrePTR = ptr1 + ptr1;
   int* autrePTR1 = &Z + ptr1;
   */

   cout << (void*)"bonjour a toutes et tous" << endl;
   cout << (const char*)(void*)"bonjour a toutes et tous" << endl;

   // ---------
   // pointeurs
   // ---------

   int var = 12;
   int var2 = 1;

   cout << "contenu de var : " <<  var << endl;
   cout << "adresse de var : " << &var << endl;

   int* pointeur = &var;

   cout << "contenu de ptr : " <<  pointeur << endl;
   cout << "adresse de ptr : " << &pointeur << endl;
   cout << "valeur pointee : " << *pointeur << endl;

   pointeur = & var2;

   cout << "contenu de ptr : " <<  pointeur << endl;
   cout << "adresse de ptr : " << &pointeur << endl;
   cout << "valeur pointee : " << *pointeur << endl;

   *pointeur = 15;

   cout << var2 << endl;

   const int cste = 21;
//    pointeur = & cste;   // accès en RW sur une constante

   const int* pointeur_sur_const = &cste;
   cout << *pointeur_sur_const << endl;

   pointeur_sur_const = &var;
   *pointeur_sur_const = 23;

   return EXIT_SUCCESS;
}
