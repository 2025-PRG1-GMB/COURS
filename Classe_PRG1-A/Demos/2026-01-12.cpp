#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int test(int a) {
   cout << "avant if" << endl;
   if (a < 0)
      throw 3;
   cout << "apres if" << endl;
   return a;
}

//----------------------------
int main () {

   try {
      cout << "avant test" << endl;
      test(-2);
      cout << "apres test" << endl;
   }
   catch(invalid_argument& e) {
      cout << e.what() << endl;
   }
   catch(double& d) {
      cout << d << endl;
   }

   cout << "fin du programme" << endl;
   return EXIT_SUCCESS;
}
