#include <iostream>
#include <cstdlib>
#include <vector>
#include <array>
using namespace std;

int test(int a) {
    if (a < 0) {
        cout << "avant throw" << endl;
        throw std::invalid_argument("valeur négative");
        cout << "après throw" << endl;
    }

    if (a > 10)
        throw 10.1;

    return a;
}

//-----------------------------------------------------------------------------
int main() {

    try {
        cout << "avant test" << endl;
        test(12);
        cout << "apres test" << endl;
    }
    catch (int e) {
        cout << e << endl;
    }
    catch (invalid_argument& e) {
        cout << "avant catch invalid_argument" << endl;
        cout << e.what() << endl;
        cout << "apres catch invalid_argument" << endl;
    }

    cout << "apres try .. catch" << endl;

    return EXIT_SUCCESS;
}
