#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
#include <limits>

using namespace std;

//----------------------------
int main () {
   int i;
   cout << "message : ";
   cin  >> i;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');

   cout << "avant pause" << endl;
   cin.ignore(numeric_limits<streamsize>::max(), '\n');
   cout << "apres pause" << endl;


   do {
      cout << "saisir [0-10] : ";
      cin  >> i;
   } while (i > 10);
   cin >> i;
   cout << i << endl;
   cout << "merci i = " << i << endl;

   string message;
   ofstream file("../file.txt");
   cout << "votre message : ";
   getline(cin, message);
   file << message << endl;
   file.close();

   return EXIT_SUCCESS;

   string msg;
   cout << "message : |";
   cin  >> msg;
   cout << msg << "|";

   cout << "message : |";
   getline(cin, msg);
   cout << msg << "|";

   return EXIT_SUCCESS;
}
