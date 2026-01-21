#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>

using namespace std;

void f(int* ptr) {
   cout << "contenu de ptr : " <<   ptr << endl;
   cout << "adresse de ptr : " <<  &ptr << endl;
   cout << "valeur pointee : " <<  *ptr << endl;
}

//----------------------------
//void g(int tab[]) {
void g(const int* tab) {
   cout << sizeof(tab) << endl;
   cout << sizeof(tab) / sizeof(int) << endl;
}

//----------------------------
int main () {

   {
      int i = 12;
      cout << "valeur de i    : " <<     i << endl;
      cout << "adresse de i   : " <<    &i << endl;

      int* ptr = &i;
      cout << "contenu de ptr : " <<   ptr << endl;
      cout << "adresse de ptr : " <<  &ptr << endl;
      cout << "valeur pointee : " <<  *ptr << endl;

      f(&i);
   }

   {
      int* ptr = new int{12};
      cout << "contenu de ptr : " <<   ptr << endl;
      cout << "adresse de ptr : " <<  &ptr << endl;
      cout << "valeur pointee : " <<  *ptr << endl;

      cout << "delete .." << endl;
      delete ptr;
      ptr = nullptr;

      ptr = new int{21};
      cout << "contenu de ptr : " <<   ptr << endl;
      cout << "adresse de ptr : " <<  &ptr << endl;
      cout << "valeur pointee : " <<  *ptr << endl;
   }

   {
      short s = -1;
      short* ptr_ss = &s;
      cout << *ptr_ss << endl;

      unsigned short* ptr_uss = (unsigned short*)&s;
      cout << *ptr_uss << endl;
   }

   {
      const int cste = 12;
      //cste = 21;

      int* ptr = (int*)&cste;
      *ptr = 21;
      cout << *ptr << endl;
      cout << cste << endl;
   }

   {
      cout << "array .. " << endl;
      array<int, 10> arr;
      cout << &arr[0] << endl;
      cout << &arr << endl;

      cout << "vector .. " << endl;
      vector<int> vect(10, 0);
      cout << &vect << endl;
      cout << vect.data() << endl;
      cout << &vect.at(0) << endl;

      cout << "tab[] .. " << endl;
      int tab[10];
      int tab2[10];
      cout << tab << endl;
      cout << &tab << endl;
      cout << &tab[0] << endl;
   }

   {
      int tab[10] {0, 1, 2, 3, 4, 5, 6};
      cout << sizeof(tab) << endl;
      cout << sizeof(tab) / sizeof(int) << endl;

      g(tab);

      cout << tab[12]   << endl;
      cout << *(tab+12) << endl;

      cout << 12[tab]   << endl;
      cout << *(12+tab) << endl;

      int* ptr = &tab[5];
      cout << ptr[0] << endl;
      cout << ptr[-4] << endl;

   }
   return EXIT_SUCCESS;
}
