#include <iostream>
#include <cstdlib>
#include <array>

using namespace std;

class Date {

   friend ostream& operator<< (ostream& os, const Date& date);

public:
   // Date() : jour(1),    mois(1),    annee (1970)  {};
   // Date() = default;
   Date() : Date(1, 1, 1970)                                         {cout << "Cd" << endl;}
   Date(int jour, int mois, int annee) : jour(jour), mois(mois), annee (annee)      {cout << "Cv" << endl;}
   Date(const Date& autre) : jour(autre.jour), mois(autre.mois), annee (autre.annee) {cout << "Cc" << endl;}
   ~Date()                                                                           {cout << "D" << endl;}

   int getJour () const { return jour; }
   int getMois () const { return mois; }
   int getAnnee() const { return annee; }

private:
   int jour;
   int mois;
   int annee;
};

ostream& operator<< (ostream& os, const Date& date) {
   return cout << date.jour << " / " << date.mois << " / " << date.annee;
}

//----------------------------
int main () {
   Date jour(1, 2, 3);
   cout << jour << endl;

//   array<Date, 3> tabDate; // {jour, jour, jour};

   Date jour2 = jour;
   {
      Date jour3(jour);
   }

   return EXIT_SUCCESS;

}
