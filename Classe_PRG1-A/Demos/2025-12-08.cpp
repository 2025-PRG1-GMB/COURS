#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

class Article {
   friend ostream& operator<< (ostream& os, const Article& article);

public:
   Article(const string& nom) : nom(nom), no_serie(prochain_no_serie++) {en_stock++; }
   void test1() const {cout << nom << " " << prochain_no_serie << endl;}
   static void test2() {cout << prochain_no_serie << endl;}
   ~Article()  {en_stock--; }
   static int nbre_en_stock() {return en_stock;}
private:
   string nom;
   int no_serie;
//   int en_stock;
   static int prochain_no_serie;
   static int en_stock;
};

int Article::prochain_no_serie=1;
int Article::en_stock=0;

ostream& operator<< (ostream& os, const Article& article) {
   return os << article.nom << "(" << article.no_serie << ")";
}

//----------------------------
int main () {

   {
      Article iPhone ("iPhone"); cout << iPhone << endl;
      Article iPad   ("iPad");   cout << iPad   << endl;
      iPad.test1();
      iPad.test2();
      Article::test2();
   }

   cout << Article::nbre_en_stock() << endl;

   return EXIT_SUCCESS;

}
