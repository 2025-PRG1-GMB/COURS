#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

int main () {

   int var = 2;
   cout << ++var << endl;  // pre-incrémentation  : var = var + 2; cout << var;
   cout << var++ << endl;  // post-incrémentation : cout << var; var = var + 2;
   cout << var << endl;

   cout << -var << " " << +var << endl;

   var *= -1;
   cout << var << endl;
   cout << -var << " " << +var << endl;

   cout << boolalpha << (3 < 6) << endl;
   cout << boolalpha << setprecision(20) << 10.0 / 3 << " : " << (10.0 / 3 ==  3.33333) << endl;

   string str1  = "bc";
   string str2  = "abc";
   cout << (str1 < str2) << endl;

   bool maBoule = true;
   cout << boolalpha << !maBoule << endl;

   return EXIT_SUCCESS;
}
