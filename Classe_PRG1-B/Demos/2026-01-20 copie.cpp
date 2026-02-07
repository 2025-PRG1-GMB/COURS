#include <iostream>
#include <cstdlib>
#include <array>
#include <vector>
#include <span>
using namespace std;


void fa(const array<int, 10>& tab) {
    cout << "taille         : " << sizeof(tab) << endl;
}
//------------------------------------------------------------
void fv(const vector<int>& tab) {
    cout << "taille         : " << sizeof(tab) << endl;
}
//------------------------------------------------------------
//void ft(const int tab[]) {
void ft(const int* tab, size_t size) {
    cout << "taille         : " << sizeof(tab) << endl;
    cout << "[";
    for (size_t i=0; i<size; ++i) {
        if (i) cout << ", ";
        cout << tab[i];
    }
    cout << "]" << endl;
}

//------------------------------------------------------------
void fs(const span<int> tab) {
    cout << "taille         : " << tab.size() << endl;
    cout << "[";
    for (size_t i=0; i<tab.size(); ++i) {
        if (i) cout << ", ";
        cout << tab[i];
    }
    cout << "]" << endl;
}

//------------------------------------------------------------
int main() {

    {   // array
        cout << "array ... " << endl;
        array<int, 10> tab = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        cout << "taille         : " << sizeof(tab) << endl;
        cout << "adresse de tab : " << (void*)&tab  << endl;
        cout << "adresse tab[0] : " << &tab[0]      << endl;
        fa(tab);
    }
    cout << endl;
    {   // vector
        cout << "vector ... " << endl;
        vector<int> tab = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        cout << "taille         : " << sizeof(tab) << endl;
        cout << "adresse de tab : " << (void*)&tab  << endl;
        cout << "adresse data   : " << tab.data()   << endl;
        cout << "adresse tab[0] : " << &tab[0]      << endl;
        fv(tab);
    }
    cout << endl;
    {   // tab C
        cout << "tab[] ... " << endl;
        int tab[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        int tab1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//        tab1=tab;
        int* ptrTab = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
        ptrTab = nullptr;

        cout << "taille         : " << sizeof(tab) << endl;
        cout << "adresse de tab : " << (void*)&tab  << endl;
        cout << "adresse tab[0] : " << &tab[0]      << endl;
        ft(tab, 10);
        fs(tab);

//        int* ptr = &tab[5];
        int* ptr  = tab+4;
        int* ptr2 = 4+tab;

        cout << ptr[1] << endl;
        cout << *(ptr+1) << endl;
        cout << *(1+ptr) << endl;
        cout << 1[ptr] << endl;

    }
    return EXIT_SUCCESS;
}

