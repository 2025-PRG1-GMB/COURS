#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
#include <limits>

using namespace std;

enum Jour {lundi=10, mardi, mercredi=20, jeudi, vendredi, samedi, dimanche};

//----------------------------
int main () {

   Jour jour = Jour(1);
   cout << lundi     << endl;
   cout << mardi     << endl;
   cout << mercredi  << endl;
   cout << jeudi     << endl;
   cout << vendredi  << endl;


   return EXIT_SUCCESS;

}
