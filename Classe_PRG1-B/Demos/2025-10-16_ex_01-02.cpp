#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

using namespace std;

//----------------------------------------------------
bool write_file(const string& nom, int mode=ios::out);

//----------------------------------------------------
bool read_file (const string& nom);

//----------------------------------------------------
int main () {

   if (write_file("../test.txt"))
      cout << "fichier ecrit correctement" << endl;
   else
      cout << "pas pu écrire le fichier" << endl;

   if (not read_file("../test.txt"))
      cout << "pas pu écrire le fichier" << endl;

   if (write_file("../test.txt", ios::app))
      cout << "fichier ecrit correctement" << endl;
   else
      cout << "pas pu écrire le fichier" << endl;


   cout << "c'est fini" << endl;
   return EXIT_SUCCESS;
}

//----------------------------------------------------
bool write_file(const string& nom, int mode) {
   ofstream file(nom, mode);
   if (not file) {
      cerr << "Can't open file" << endl;
      return false;
   }

   do {
      string message;
      cout << "votre message (ENTER pour quitter) : ";
      getline(cin, message);
      if (message.empty())
         break;
      file << message << endl;
   } while (true);

   string message;
   while (getline(cin, message), message.empty()) {
      file << message << endl;
   }

   file.close();
   return true;
}

//----------------------------------------------------
bool read_file (const string& nom) {

   ifstream file(nom);
   if (not file) {
      cerr << "Can't open file" << endl;
      return false;
   }

   while (file) {
      string contenu;
      getline(file, contenu);
      cout << contenu << endl;
   }

   return true;
}


