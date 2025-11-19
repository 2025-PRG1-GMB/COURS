#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <fstream>
#include <limits>

using namespace std;

void f(short, float)  { cout << 1 << endl; }
void f(long, double)  { cout << 2 << endl; }




void fct (      int,          float)  {cout << "Fonction no 1" << endl;}
void fct (      int,          double) {cout << "Fonction no 2" << endl;}
void fct (      float&,       int&)   {cout << "Fonction no 3" << endl;}
void fct (const float&, const int&)   {cout << "Fonction no 4" << endl;}

//----------------------------
int main () {
   int       i = 1;
   int&     ri = i;
   char      c = 'A';
   float     f = 2.f;
   double    d = 3.0;
   const double& rdC = d;

   //  1 : fct(i, c);         // {1, 2}      {4}         => ambiguité
   //  2 : fct(2.0, 1);       // {1, 2, 4}   {4}         => 4
   //  3 : fct(i, f);         // {1, 2}      {1}         => 1
   //  4 : fct(ri, f);        // {1, 2}      {1}         => 1
   //  5 : fct(f, 1);         // {3, 4}      {4}         => 4
   //  6 : fct(i, d);         // {1, 2}      {2}         => 2
   //  7 : fct(f, i);         // {3}         {3}         => 3
   //  8 : fct(2.0, i);       // {1, 2, 4}   {3, 4}      => 4
   //  9 : fct(2, c);         // {1, 2}      {4}         => ambiguité
   // 10 : fct(c, 2);         // {1, 2}      {4}         => ambiguité
   // 11 : fct(rdC, i);       // {4}         {4}         => 4
   // 12 : fct(f, rdC);       // {4}         {2}         => ambiguité
   // 13 : fct('a', rdC);     // {1, 2}      {2}         => 2
   // 14 : fct(2.0, 'a');     // {4}         {4}         => 4
   // 15 : fct('a', 2L);      // {1, 2}      {1, 2, 4}   => ambiguité
   // 16 : fct('a', 2.0L);	   // {1, 2}      {1, 2, 4}   => ambiguité

   return EXIT_SUCCESS;

}
