#include <iostream>
#include <cstdlib>
#include <array>
using namespace std;

//------------------------------------------------------------
class Couleur {
public:
    enum class List {ROUGE, VERT, BLEU};
private:
};

//------------------------------------------------------------
class Container {
public:
    //--------------------
    class Iterator;
    //--------------------
    Iterator begin();
    Iterator end();

    //--------------------
    class Const_Iterator;
    //--------------------
    Const_Iterator cbegin() const;
    Const_Iterator cend()   const;

private:
    using Data = array<int, 10>;
    Data data;
};

//------------------------------------------------------------
class Container::Iterator {
//------------------------------------------------------------
public:
    Iterator(Data& data, size_t indice) : ref_data(data), indice(indice) {}

    Iterator& operator++();
    int&      operator* ();

private:
    Data&  ref_data;    // /!\ en référence
    size_t indice;
};

//------------------------------------------------------------
Container::Iterator& Container::Iterator::operator++() {
    if (indice < ref_data.size()) ++indice;
    return *this;
}

//------------------------------------------------------------
int& Container::Iterator::operator*() {
    return ref_data[indice];
}

//------------------------------------------------------------
Container::Iterator Container::begin() {
    return Iterator(data, 0);
}

//------------------------------------------------------------
Container::Iterator Container::end() {
    return Iterator(data, data.size());
}

//------------------------------------------------------------
class Container::Const_Iterator {
//------------------------------------------------------------
public:
    Const_Iterator(const Data& data, size_t indice) : ref_data(data), indice(indice) {}
    Const_Iterator& operator++();
    int             operator* () const;
private:
    const Data&  ref_data;    // /!\ en référence
    size_t       indice;
};

//------------------------------------------------------------
Container::Const_Iterator& Container::Const_Iterator::operator++() {
    if (indice < ref_data.size()) ++indice;
    return *this;
}

//------------------------------------------------------------
int Container::Const_Iterator::operator*() const {
    return ref_data[indice];
}

//------------------------------------------------------------
Container::Const_Iterator Container::cbegin() const {
    return Const_Iterator(data, 0);
}

//------------------------------------------------------------
Container::Const_Iterator Container::cend() const {
    return Const_Iterator(data, data.size());
}

//------------------------------------------------------------
int main() {

    Couleur::List::ROUGE;           // acces à une couleur mise à dispo pas la classe Couleur

    {   // vecteur
        array<int, 10> a;
        array<int, 10>::iterator iter = a.begin();
        ++iter;
        cout << *iter << endl;
    }

    {   // container
        Container c;
        Container::Iterator iter = c.begin();
        ++iter;
        cout << *iter << endl;
    }

    return EXIT_SUCCESS;
}

