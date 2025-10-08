#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

void echanger (int& a, int& b) {
   int tmp = a;
   a = b;
   b = tmp;
}

void afficher (int valeur) {        // 32bits
   cout << valeur << endl;
}
void afficher (const int& valeur) { // 64 bits
   cout << valeur << endl;
}

void afficher (const string& msg) {
   cout << msg << endl;
}


void plus1 (int* adr) {
   *adr = *adr + 1;
}

int main () {
   int valeur = 12;
   plus1(&valeur);
   cout << valeur << endl; // => 13


   int a = 1;
   int b = 2;
   cout << a << " " << b << endl;
   echanger(a, b);
   cout << a << " " << b << endl;

   const string CSTE = "coucou, il faut beau aujourd'hui, bien le week-end ... LONG";
         string VAR = CSTE;
   afficher(CSTE);
   afficher(VAR);

   return EXIT_SUCCESS;
}

