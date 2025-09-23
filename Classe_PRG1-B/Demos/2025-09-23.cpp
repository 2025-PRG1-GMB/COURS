#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

int main () {

   char X = 65;
   char Y = 'B' + 1; // 66 + 1
   int  Z = 'A';

   cout << X + 1 << endl;
   cout << Y     << endl;
   cout << Z     << endl;

   /*
   string str_1 = "ABC";
   string str_2= str_1 + "autre";
   string str_3= str_1 + 'a';
   string str_4= str_1 + 1;
   string str_5= "abc" + "def";
*/

   int* ptr1 = &Z;
   int* ptr2 = &Z;

   int* autrePTR = ptr1 + ptr1;
   int* autrePTR1 = &Z + ptr1;

   cout << (void*)"bonjour a toutes et tous" << endl;
   cout << (const char*)(void*)"bonjour a toutes et tous" << endl;


   return EXIT_SUCCESS;
}
