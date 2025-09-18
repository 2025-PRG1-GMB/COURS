#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

int main () {
   int var;
   cout << "adresse : " << &var << endl;
   cout << "contenu : " <<  var << endl;

   {
      cout << var << endl;
      int var2 = 15;
      cout << var2 << endl;
   }
//   cout << var2 << endl; // plus visible

   var = 15;
   cout << "adresse : " << &var << endl;
   cout << "contenu : " <<  var << endl;


   const int cste = 12;
   cout << cste * var << endl;
 //  cste = 13; // const => pas possible

   char car = 97;//'a';
   cout << (char)car << " " << (int)car << endl;

   string str ("Hello World!");
   string str2 = str;
   cout << "str : " << str << endl;

    bool maBoule = 12;
    cout << maBoule << endl;

    cout << setprecision(20) << (10.0/3.0) << endl;
    cout << (10.0/3.0 == 3.33333333) << endl;

    42;

   return EXIT_SUCCESS;
}
