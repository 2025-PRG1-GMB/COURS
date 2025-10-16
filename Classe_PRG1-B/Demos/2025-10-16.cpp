#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main () {

   ofstream fout("test.txt");
   fout << "Hello World!\n";
   fout.close();
   return EXIT_SUCCESS;

   string msg;
   cout << "votre saisie : ";
   getline(cin, msg);
   cout << msg << endl;

   return EXIT_SUCCESS;
}
