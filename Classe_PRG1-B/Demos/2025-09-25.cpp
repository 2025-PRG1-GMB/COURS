#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>

using namespace std;

//
void plus1Ptr(int* adr) {
   *adr = *adr + 1;
   cout << "var dedans   : " << *adr << endl;
}

void plus1Ref(int& param) {
   param = param + 1;
   cout << "var dedans   : " << param << endl;
}

int main () {

   int var = 12;
   cout << "valeur de var  : " <<   var << endl;
   cout << "adresse de var : " <<  &var << endl;

/*



*/
   char car = 'a';
   const char car2 = 'b';

  const char* ptrCar = &car2;
//   *ptrCar = 'b';
//   ptrCar = &car2;

//   ptrCar = &var;

   cout << "valeur de car     : " <<   car << endl;
   cout << "adresse de car    : " <<  (const void*)&car << endl;

   cout << "valeur de ptrCar  : " <<  (const void*)ptrCar << endl;
   cout << "adresse de ptrCar : " <<  &ptrCar << endl;
   cout << "valeur référencée : " <<  *ptrCar << endl;

   cout << "var avant    : " << var << endl;
   plus1Ptr(&var);
   cout << "var apres    : " << var << endl;

   cout << "var avant    : " << var << endl;
   plus1Ref(var);
   cout << "var apres    : " << var << endl;


   const int& ref = var;
   const char& refCar = car2;

    cout << "courage .."         // commentaire
         << "c'east bientot"
         << " pause ...";

   return EXIT_SUCCESS;
}
