#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
#include <limits>

using namespace std;

void stringEnMajuscule1(string& s) {
   for (int i = 0; i < s.length(); ++i) {
      s[i] = s[i] + 1;
   }
}

void stringEnMajuscule2(string& s) {
   for (char& c : s) {
      c = c + 1;
   }
}

//----------------------------
int main () {

   string salut = "bonjour";
   cout << salut << endl;

   stringEnMajuscule2(salut);
   cout << salut << endl;

   return EXIT_SUCCESS;

}
