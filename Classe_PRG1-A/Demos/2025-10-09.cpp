#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

int& plusPetit(int& a, int& b) {
   return a < b ? a : b;
}

int main () {

   cout << (void*)&plusPetit;
   cout << "---" << endl;
   int a = 3;
   int b = 5;
   cout << plusPetit(a, b);

   cout << endl;

   plusPetit(a, b) = 12;

   cout << a << " " << b << endl;

   //                  0123456789012345678901
   string msg = "bonjour";
   cout << msg[3];
//   msg[3] = 'K';
   cout << msg << endl;

   msg[21] = 'A';
   cout << "[] ..";
   msg.at(21) = 'A';
   cout << "at ..";
   return EXIT_SUCCESS;
}

