#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

const int width = 4;
using namespace std;

int b = 21;

//----------------------------
void f(int a);

//----------------------------
void g(int a);

int a = 21;

//----------------------------
int main () {

   f(3);
   {
      cout << a << endl;
   }

   cout << a << endl;
   cout << b << endl;

   return EXIT_SUCCESS;
}

//----------------------------
void f(int a) {
   cout << setw(width) << 3.14 << endl;
   ++b;
   cout << a << endl;
}

//----------------------------
void g(int a) {
   cout << setw(width) << 3.14 << endl;
   ++b;
   cout << a << endl;
}
