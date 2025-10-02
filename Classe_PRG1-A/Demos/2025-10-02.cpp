#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main () {
/*
   int iter;
   cout << "combien d'itérations : ";
   cin >> iter;

   for (int i=1; i<=iter; ++i) {
      cout << "...";
      if (i %4 == 0) break;
      cout << setw(20) << i << endl;
   }

   string s = "Hello, world!";
   int i;
   for (i = 0; i < s.length(); ++i)
      if (s[i] == 'o') break;

   i = 0;
   for (i = 0; i < s.length() and s[i] != 'o'; ++i);

   i = 0;
   while ( i < s.length() and s[i] != 'o')
      ++i;
*/
   bool sortir = false;
   for (char car = 'a'; car <= 'd'; ++car) {
      for (int line = 0; line < 6; ++line) {
         cout << car << line << " ";
         if (line == 4) {
            sortir = true;
            break;
         }
      }
      cout << endl;
      if (sortir) {
         break;
      }
   }

   cout << endl;

   for (char car = 'a'; car <= 'd'; ++car) {
      for (int line = 0; line < 6; ++line) {
         cout << car << line << " ";
         if (line == 4) {
            goto dehors;
         }
      }
      cout << endl;
   }
   dehors:

   cout << "dehors ..." << endl;
   return EXIT_SUCCESS;
}
