#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

int main () {

   for (char car = 'a';car <= 'd';car++) {
      for (int i = 1; i <= 9; i++) {
         cout << car << i << " ";
      }
      cout << endl;
   }

   int a = 12;
   a = 3, 5;      // a = 3
   a = (3, 5);    // a = 5

   if (false, true)
      cout << a << endl;

   return EXIT_SUCCESS;
}