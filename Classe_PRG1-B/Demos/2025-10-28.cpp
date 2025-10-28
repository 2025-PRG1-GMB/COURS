#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    unsigned int a = 12U;
    cout << a << endl;

    string msg = "salut";
    for (int i = 0; i < msg.length(); i++)
        cout << msg[i];

    long int LONG = 12L;

    return EXIT_SUCCESS;
}
