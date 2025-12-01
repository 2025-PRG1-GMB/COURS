#include <iostream>
#include <cstdlib>
#include <string>
#include <array>

using namespace std;

enum class Jour {lundi, mardi, mercredi};

string to_string(Jour jour) {
   static const array JOUR = {"LUNDI", "MARDI", "MERCREDI"};
   return JOUR[(size_t)jour];
}

ostream& operator<< (ostream& os, Jour jour) {
   return os << to_string(jour);
}

//----------------------------
int main () {

   Jour jour = Jour::mardi;
   cout << (int)jour << endl;
   cout << jour << endl;

   return EXIT_SUCCESS;

}
