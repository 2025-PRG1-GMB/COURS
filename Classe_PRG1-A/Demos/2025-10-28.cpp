#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
#include <limits>

using namespace std;

//----------------------------
int main () {

   string salut = "bonjour";

   //    int     <= size_t
   for (size_t i=0; i<salut.length(); i++) {
      cout << salut[i] << " ";
   }
   cout << endl;

   int i = 10U;
   cout << i << endl;

   cout << setprecision(20) << (1 / 3.) << endl;
   cout << setprecision(20) << (100 / 3.) << endl;

   return EXIT_SUCCESS;

}
