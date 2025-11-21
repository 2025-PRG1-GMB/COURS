#include <iostream>
#include <cstdlib>

using namespace std;
const enum Jour {lundi=1, mardi, mercredi, jeudi, vendredi, samedi, dimanche};

void fct (      int,          float)  {cout << "Fonction no 1" << endl;}
void fct (      int,          double) {cout << "Fonction no 2" << endl;}
void fct (      float&,       int&)   {cout << "Fonction no 3" << endl;}
void fct (const float&, const int&)   {cout << "Fonction no 4" << endl;}

int       i = 1;
int&     ri = i;
char      c = 'A';
float     f = 2.f;
double    d = 3.0;
const double& rdC = d;

/*
*Méthode

établir la liste des fonctions appelables
Parmi ces fonctions appelables, pour chacun des paramètres, établir celles qui sont appelables le plus simplement, i.e.
    par type exact
    sinon par conversion simple (ajout d'un const)
    sinon par promotion numérique
    sinon par conversion de type
Faire l'intersection des ensembles sélectionnés par chaque paramètre
Si cet ensemble compte une seule fonction, elle est appelée. S'il en compte plusieurs ou aucune, il y a ambiguité
*/

int main() {

    cout << lundi       << endl;
    cout << mardi       << endl;
    cout << mercredi    << endl;
    cout << jeudi       << endl;
    cout << vendredi    << endl;

    Jour jour = (Jour)17;
    cout << jour        << endl;


    string str = "coucou";

    cout << str.append(" tout").append(" le").append(" monde") << endl;
    cout << str << endl;

    str = "bof";
    cout << str.substr(1, 2).append(" tout").append(" le").append(" monde") << endl;
    cout << str << endl;


    return EXIT_SUCCESS;
}
