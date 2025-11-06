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

   string salut = "salut";
   salut.substr(2, 3).append(" tout le monde");

   cout << salut.substr(2, 3).append(" tout le monde");
   cout << endl;

   cout << salut << endl;

   salut.assign("salut");
   salut.append(" coucou", 2, 5);
cout << salut << endl;
   return EXIT_SUCCESS;

}
