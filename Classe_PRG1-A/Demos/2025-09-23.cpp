#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

int main () {

   char X = 11;
   char Y = 'b';
   int  Z = 300;

   cout << "X" << endl;
   cout << "size   : " << sizeof(X) * 8 << endl;
   cout << "valeur : " << X         << endl;

   cout << "Z" << endl;
   cout << "size   : " << sizeof(Z) * 8 << endl;
   cout << "valeur : " << Z         << endl;

   cout << (double)1 + 2.3 << endl;
   cout << (int)X + 1  << endl;

   cout << "POINTEURS" << endl;
   int i    = 12;
   int* ptr = &i;

   cout << "contenu de i   : " <<  i << endl;
   cout << "adresse de i   : " << &i << endl;
   cout << endl;

   cout << "contenu de ptr : " <<  ptr << endl;
   cout << "adresse de ptr : " << &ptr << endl;
   cout << "valeur pointée : " << *ptr << endl; // déréférencememnt
   *ptr = 60;
   cout << "contenu de i   : " <<  i << endl;


   return EXIT_SUCCESS;
}
