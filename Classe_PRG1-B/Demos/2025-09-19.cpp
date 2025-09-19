#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

int main () {

   int var = 2;
   cout << var << endl;
   cout << ++var << endl;
   cout << var++ << endl;

   cout <<  var << endl;
   cout << -var << endl;
   cout << +var << endl;
   cout <<  var << endl;

   string str1 = "maïs";
   string str2 = "maison";
   cout << "mais < maison : " << (str1 < str2) << endl;
   cout << (3 == 3.0) << endl;

   auto resultat = 2 < 3;

   //               0123456789
   string salut ("0123456789");
   cout << salut[20] << endl;          // en dehors
   cout << salut.at(20) << endl;    // exception

   return EXIT_SUCCESS;
}
