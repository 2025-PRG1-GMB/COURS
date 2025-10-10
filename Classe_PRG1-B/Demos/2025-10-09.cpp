#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

void f(int a) {
   cout << a;
}

void afficher(const string& msg) {
   cout << msg << endl;
}

int main () {

   string hello = "Hello";
   const string cste  = "CONSTANTE";

   afficher(hello);
   afficher(cste);

   // f(2);
   // f(2.3);
   // f(2, 3);
   // f();
   cout << (void*)f;

   return EXIT_SUCCESS;

   //            01234567890
   string str = "bonjour";

   cout << str[2]       << endl;
   cout << str.at(2) << endl;

   str[2]       = 'b';
   str.at(2)  = 'b';

   // cout9<< "apres .at()" << endl;

   str[2]       = 'b';
   str.at(9)  = 'b';

   return EXIT_SUCCESS;
}