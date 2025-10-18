#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;


int saisie(const string& message,
           int min, int max) {
   int retour;
   bool ok;
   do {
      cout << message << " [" << min << ".." << max << "] : " << endl;
      cin  >> retour;
      ok = cin.good() and retour < min or retour > max;
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
   } while (not ok);
   return retour;
}

int main () {
   int a = 12;
   cin >> a;
   cout << a << endl;

   return EXIT_SUCCESS;
}
