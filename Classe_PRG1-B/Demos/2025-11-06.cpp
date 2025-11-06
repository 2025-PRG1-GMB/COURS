#include <iostream>
#include <cstdlib>

using namespace std;

int main() {

    enum Jour {lundi=1, mardi, mercredi, jeudi, vendredi, samedi, dimanche};
    cout << lundi       << endl;
    cout << mardi       << endl;
    cout << mercredi    << endl;
    cout << jeudi       << endl;
    cout << vendredi    << endl;

    Jour jour = (Jour)17;
    cout << jour        << endl;

    return EXIT_SUCCESS;
}
