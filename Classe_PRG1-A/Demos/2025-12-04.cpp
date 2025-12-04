#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Date;


class Date {
   friend ostream& operator<< (ostream& os, const Date& date);
   friend Date operator+ (int n,  Date date) {return date+=n;};  // n + date
   friend Date operator+ (Date date, int n)  {return date+=n;};  // date + n

public:
   // Date() : jour(1),    mois(1),    annee (1970)  {};
   // Date() = default;
   Date() : Date(1, 1, 1970)                                         {cout << "Cd" << endl;}
   Date(int jour, int mois, int annee) : jour(jour), mois(mois), annee (annee)      {cout << "Cv" << endl;}
   Date(const Date& autre) : jour(autre.jour), mois(autre.mois), annee (autre.annee) {cout << "Cc" << endl;}
   ~Date()                                                                           {cout << "D" << endl;}

   Date& operator=  (const Date& date);
   Date& operator+= (int n) {return *this;};

   operator string() const;

   int getJour () const { return jour; }
   int getMois () const { return mois; }
   int getAnnee() const { return annee; }

private:
   int jour;
   int mois;
   int annee;
};

Date& Date::operator= (const Date& date) {
   if (this == &date) return *this;
   this->jour = date.jour;
   return *this;
};

Date::operator string() const {
   return to_string(jour) + " " + to_string(mois) + " " + to_string(annee);
}


ostream& operator<< (ostream& os, const Date& date) {
   return os << string(date);
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
