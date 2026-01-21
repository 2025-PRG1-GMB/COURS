#include <iostream>
#include <cstdlib>
#include <vector>
#include <span>

using namespace std;

//----------------------------
ostream& operator<<(ostream& os, span<const int> s) {
   os << "[";
   for (size_t i = 0; i < s.size(); ++i) {
      if (i) os << ", ";
      os << s[i];
   }
   return os << "]";
}

//----------------------------
void afficher(const int tab[], size_t size) {
//void afficher(const int* tab) {
   cout << "[";
   for (size_t i = 0; i < size; ++i) {
      if (i) cout << ", ";
      cout << tab[i];
   }
   cout << "]";
}
//----------------------------
int main () {

   int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
   afficher(tab, 10); cout << endl;
   cout << span(tab, 10) << endl;

   //cout << tab.size() << endl;

   int* const debut = new int[6]{1,2,3,4,5,6};
   int* ctr = debut;

   cout << ctr[0] << endl;
   ctr++;
   cout << ctr[-1] << endl;


   cout << ctr[0]     << endl;
   cout << *(ctr+1)   << endl;
   cout << *(1 + ctr) << endl;
   cout << 1[ctr]     << endl;


   cout << ctr[-100000000] << endl;
   cout << ctr[ 100] << endl;
   ctr[-100000000] = 2;


   return EXIT_SUCCESS;
}
