#include <iostream>
#include <cstdlib>

using namespace std;


//----------------------------------------------
// Fonction charEnMajuscule
char charEnMajuscule(char c){
    if (c < 97 or c > 123) {        // faux => 'a' et 'z'
        return c;
    }
    else {
        return char(c - 32);
    }
}


//----------------------------------------------
// Fonction stringEnMajuscule
void stringEnMajuscule(string& s){
   string s2;                           // une copie ??
    for (char c : s) {
;
        //        s[i] = charEnMajuscule(c[i]);
//        char c2 = charEnMajuscule(c);
//        s2 += c2;
    }
//    s = s2;
}


//----------------------------------------------
// Fonction afficher
void afficher(string s){                // par copie
    cout << "Mot en majuscules : " << s << endl;
}


int main() {

    signed int i = -1;
    cout << i << " " << (unsigned int) i << endl;

    string s = "bonjour";
    for (char& c : s) {
        c += 1;
    }
    cout << endl;
    cout << s << endl;

    //
    // cout << "Entrez un mot : " << endl;
    // string s;
    // cin >> s;
    // stringEnMajuscule(s);
    // afficher(s);

    return EXIT_SUCCESS;
}
