#include <iostream>
#include <cstdlib>
using namespace std;

template <typename T>
T minimun(const T& a, const T& b) {
    return a < b ? a : b;
}

template <typename T>
const T& minimun(const T& a, const T& b, const T& c) {
    return minimun(a, minimun(b,c));
}
int main() {

    int a = 12;
    int b = 21;
    int c = 30;

    cout << minimun(a, b, c) << endl;

    return EXIT_SUCCESS;
}
