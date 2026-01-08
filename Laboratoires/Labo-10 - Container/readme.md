## Container <T, n> avec iterateurs

### Objectif

- Classe générique
- Itérateur

### A faire

Nous souhaitons mettre à disposition une structure de stockage limitant les déplacements en mémoire.

Cette classe générique `Container<T, n>` est instanciée par deux paramètres génériques

- `T` le type de donnée à stocker.
- `n` la capacité déterminée à la compilation.

Cette structure peut être représentée comme suit

| 0 | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |
|---|---|---|---|---|---|---|---|---|---|
| e | ? | ? | ? | ? | ? | a | b | c | d |
|   |   |   |   |   |   | F |   |   |   |
|   | L |   |   |   |   |   |   |   |   |

- Les éléments sont stockés de **manière circulaire**, ainsi des méthodes comme<br>
  `push_front(..)` ou `pop_front()` ne nécessitent aucun déplacement de valeurs.
- `F` : `First` indice de la première valeur déterminée.
- `L` : `Last` indice de la première valeur indéterminée.
- `a`, `b`, `c`, `d` et `e` les valeurs actuellement stockées.
- `?` les valeurs indéterminées dans la structure.

<br>

La classe `Container<T, n>` doit implémenter à minima les propriétés et méthodes ci-après

| Méthode                  | Description                                              | Note | 
|--------------------------|----------------------------------------------------------|:----:|
| `Container()`            | constructeur sans paramètre                              |      |
| `Container(first, last)` | constructeur sur la base des itérateurs `first`et `last` | (1)  |
| `Container(container)`   | constructeur par copie                                   |      |
| `operator =`             | opérateur d'affectation                                  | (2)  |
| `operator <`             | comparaison lexicographique `lhs <  rhs`                 | (2)  |
| `operator >`             | comparaison lexicographique `lhs >  rhs`                 | (2)  |
| `operator <=`            | comparaison lexicographique `lhs <= rhs`                 | (2)  |
| `operator >=`            | comparaison lexicographique `lhs >= rhs`                 | (2)  |
| `operator ==`            | comparaison lexicographique `lhs == rhs`                 | (2)  |
| `operator !=`            | comparaison lexicographique `lhs != rhs`                 | (2)  |
| `front()`                | retourne la valeur en tête        (à `First`)            |      |
| `back()`                 | retourne la valeur en queue       (avant `Last`)         |      |
| `push_front(val)`        | ajout d'une valeur `val` en tête  (avant `First`)        |      |
| `push_back(val)`         | ajout d'une valeur `val` en queue (à `Last`)             |      |
| `pop_front()`            | suppression de la valeur en tête  (à `First`)            |      |
| `pop_back()`             | suppression de la valeur en queue (avant `Last`)         |      |
| `at(pos)`                | accès à une valeur en position logique `pos`             | (3)  |
| `size()`                 | retourne le nombre de valeurs stockées                   |      |
| `full()`                 | retourne `true` si plein, sinon `false`                  |      |
| `empty()`                | retourne `true` si vide, sinon `false`                   |      |
| `begin()`                | itérateur sur la première valeur    (accès RW)           | (4)  |
| `end()`                  | itérateur après la dernière valeur  (accès RW)           | (4)  |
| `cbegin()`               | itérateur sur la première valeur    (accès RO)           | (4)  |
| `cend()`                 | itérateur après la dernière valeur  (accès RO)           | (4)  |


### Complément

- **Conseil** : Implémenter rapidement les itérateurs qui seront utiles pour les méthodes de cette classe.
- **Conseil** : Valider vos résultats au fur et à mesure du développement.
- La collection de valeurs dans la classe `Container<T, n>` est implémentée par un `array<T, n>`.
- **(1)** Les itérateurs peuvent être sur d'autres structures (`vector`, `list`, ...)<br>
  mais nécessairement du même type de donnée `<T>` que la classe `Container<T, n>`.
- **(2)** Les tailles et capacités peuvent différer entre les deux objets traités.
- **(3)** La position `pos` correspond à la position logique dans la structure et non à l'indice dans le tableau.
- **(4)** Selon l'ordre logique dans la structure et non strictement séquentiellement dans le tableau.

<br>

Le programme principal `main` fourni doit produire le résultat ci-après.

<details>
<summary>main</summary>

~~~cpp
#include <iostream>
#include <cstdlib>
#include <vector>
#include <exception>

#include "Container_G.hpp"

using namespace std;

int main() {
   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::Container()"          << endl;
   cout << "-------------------------------------" << endl;
   Container<int, 10> c1;

   c1.show_details();
   c1.show_content();
   cout << c1 << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::Container(it1, it2)"  << endl;
   cout << "-------------------------------------" << endl;
   vector v {1, 2, 3};
   Container<int, 5>c2 (v.cbegin(), v.cend());

   c2.show_details();
   c2.show_content();
   cout << c2 << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::container(other)"     << endl;
   cout << "-------------------------------------" << endl;
   c2.show_details();
   Container<int, 10> c3(c2);

   c3.show_content();
   cout << c3 << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::back()"               << endl;
   cout << "-------------------------------------" << endl;
   c3.show_content();
   c3.back() = 8;
   c3.show_content();
   c3.back() = 3;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::front()"              << endl;
   cout << "-------------------------------------" << endl;
   c3.show_content();
   c3.front() = 8;
   c3.show_content();
   c3.front() = 3;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::push_back()"          << endl;
   cout << "-------------------------------------" << endl;
   Container<char, 4> c4;
   c4.show_content();
   c4.push_back('a');
   c4.push_back('b');
   c4.push_back('c');

   c4.show_content();
   cout << c4 << endl;
   cout << endl;

   try {
      c4.push_back('d');
      c4.push_back('e');
      cout << endl;
   }
   catch (std::logic_error e) {
      cout << "EXCEPTION " << e.what() << endl;
   }
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::push_front()"         << endl;
   cout << "-------------------------------------" << endl;
   Container<char, 8> c5(c4);
   try {
      c5.push_front('A');
      c5.push_front('B');
      c5.push_front('C');

      c5.show_content();
      cout << c5 << endl;
      cout << endl;

      c5.push_back('D');
      c5.push_back('E');
      cout << endl;
   }
   catch (std::logic_error e) {
      cout << "EXCEPTION " << e.what() << endl;
   }
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::pop_back()"           << endl;
   cout << "-------------------------------------" << endl;
   Container c6(c4);
   try {
      c6.pop_back();
      c6.pop_back();

      c6.show_content();
      cout << c6 << endl;
      cout << endl;

      c6.pop_back();
      c6.pop_back();
      c6.pop_back();
      cout << endl;
   }
   catch (std::logic_error e) {
      cout << "EXCEPTION " << e.what() << endl;
   }
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::pop_front()"          << endl;
   cout << "-------------------------------------" << endl;
   Container c7(c4);
   try {
      c7.pop_front();
      c7.pop_front();

      c7.show_content();
      cout << c7 << endl;
      cout << endl;

      c7.pop_front();
      c7.pop_front();
      c7.pop_front();
      cout << endl;
   }
   catch (std::logic_error e) {
      cout << "EXCEPTION " << e.what() << endl;
   }
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::at(..)"               << endl;
   cout << "-------------------------------------" << endl;
   Container c8(c4);

   try {
      c8.pop_back();
      c8.pop_back();
      c8.show_content();

      cout << "c8.at(1) : " << c8.at(1) << endl;
      cout << "c8.at(1) = 'G';" << endl;
      c8.at(1) = 'G';
      cout << endl;

      c8.show_content();
      cout << c8 << endl;

      cout << "c8.at(2)  : " << c8.at(2);
   }
   catch (std::logic_error e) {
      cout << "EXCEPTION " << e.what() << endl;
   }
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::iterator"             << endl;
   cout << "-------------------------------------" << endl;
   c3.show_content();
   cout << c3 << endl;
   cout << endl;
   cout << "*c3.begin() : " << *c3.begin() << endl;
   cout << endl;
   for (auto it=c3.begin(); it!=c3.end(); ++it)
      cout << *it << " ";
   cout << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::operator << (..)"     << endl;
   cout << "-------------------------------------" << endl;
   c3.show_content();
   cout << c3 << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::operator == (..)"     << endl;
   cout << "-------------------------------------" << endl;
   Container<int, 5> c_123;
   c_123.push_back(1).push_back(1).push_back(2).push_back(3).pop_front();

   Container<int, 5> c123;
   c123.push_back(1).push_back(2).push_back(3);

   Container<int, 5> c12;
   c12.push_back(1).push_back(2);

   Container<int, 5> c113;
   c113.push_back(1).push_back(1).push_back(3);

   cout << c_123 <<    " == " << c123 << "  "      << boolalpha << (c_123 == c123) << endl;
   cout << c123  <<    " == " << c12  << "     "   << boolalpha << (c123  == c12 ) << endl;
   cout << c12   << "    == " << c123 << "  "      << boolalpha << (c12   == c123) << endl;
   cout << c123  <<    " == " << c113 << "  "      << boolalpha << (c123  == c113) << endl;
   cout << c113  <<    " == " << c123 << "  "      << boolalpha << (c113  == c123) << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::operator < (..)"      << endl;
   cout << "-------------------------------------" << endl;
   cout << c_123 <<    " <  " << c123 << "  "      << boolalpha << (c_123 <  c123) << endl;
   cout << c123  <<    " <  " << c12  << "     "   << boolalpha << (c123  <  c12 ) << endl;
   cout << c12   << "    <  " << c123 << "  "      << boolalpha << (c12   <  c123) << endl;
   cout << c123  <<    " <  " << c113 << "  "      << boolalpha << (c123  <  c113) << endl;
   cout << c113  <<    " <  " << c123 << "  "      << boolalpha << (c113  <  c123) << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::operator > (..)"      << endl;
   cout << "-------------------------------------" << endl;
   cout << c_123 <<    " >  " << c123 << "  "      << boolalpha << (c_123 >  c123) << endl;
   cout << c123  <<    " >  " << c12  << "     "   << boolalpha << (c123  >  c12 ) << endl;
   cout << c12   << "    >  " << c123 << "  "      << boolalpha << (c12   >  c123) << endl;
   cout << c123  <<    " >  " << c113 << "  "      << boolalpha << (c123  >  c113) << endl;
   cout << c113  <<    " >  " << c123 << "  "      << boolalpha << (c113  >  c123) << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::operator <= (..)"     << endl;
   cout << "-------------------------------------" << endl;
   cout << c_123 <<    " <= " << c123 << "  "      << boolalpha << (c_123 <=  c123) << endl;
   cout << c123  <<    " <= " << c12  << "     "   << boolalpha << (c123  <=  c12 ) << endl;
   cout << c12   << "    <= " << c123 << "  "      << boolalpha << (c12   <=  c123) << endl;
   cout << c123  <<    " <= " << c113 << "  "      << boolalpha << (c123  <=  c113) << endl;
   cout << c113  <<    " <= " << c123 << "  "      << boolalpha << (c113  <=  c123) << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::operator >= (..)"     << endl;
   cout << "-------------------------------------" << endl;
   cout << c_123 <<    " >= " << c123 << "  "      << boolalpha << (c_123 >=  c123) << endl;
   cout << c123  <<    " >= " << c12  << "     "   << boolalpha << (c123  >=  c12 ) << endl;
   cout << c12   << "    >= " << c123 << "  "      << boolalpha << (c12   >=  c123) << endl;
   cout << c123  <<    " >= " << c113 << "  "      << boolalpha << (c123  >=  c113) << endl;
   cout << c113  <<    " >= " << c123 << "  "      << boolalpha << (c113  >=  c123) << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::full()"               << endl;
   cout << "-------------------------------------" << endl;
   Container<int, 3> c13;
   int val=0;
   while (not c13.full())
      c13.push_back(++val);

   c13.show_details();
   c13.show_content();
   cout << c13 << endl;
   cout << endl;

   cout << "-------------------------------------" << endl;
   cout << "Container<T, n>::empty()"              << endl;
   cout << "-------------------------------------" << endl;
   while (not c13.empty()) {
      c13.pop_front();
   }

   c13.show_details();
   c13.show_content();
   cout << c13 << endl;
   cout << endl;

   return EXIT_SUCCESS;
}
~~~

</details>

<details>
<summary>output</summary>

~~~
-------------------------------------
Container<T, n>::Container()
-------------------------------------
size      : 0
capacity  : 10
first     : 0
last      : 0

 0 1 2 3 4 5 6 7 8 9
 ? ? ? ? ? ? ? ? ? ?
 ^ First
 ^ Last

[]

-------------------------------------
Container<T, n>::Container(it1, it2)
-------------------------------------
size      : 3
capacity  : 5
first     : 0
last      : 3

 0 1 2 3 4
 1 2 3 ? ?
 ^ First
       ^ Last

[1, 2, 3]

-------------------------------------
Container<T, n>::container(other)
-------------------------------------
size      : 3
capacity  : 5
first     : 0
last      : 3

 0 1 2 3 4 5 6 7 8 9
 1 2 3 ? ? ? ? ? ? ?
 ^ First
       ^ Last

[1, 2, 3]

-------------------------------------
Container<T, n>::back()
-------------------------------------
 0 1 2 3 4 5 6 7 8 9
 1 2 3 ? ? ? ? ? ? ?
 ^ First
       ^ Last

 0 1 2 3 4 5 6 7 8 9
 1 2 8 ? ? ? ? ? ? ?
 ^ First
       ^ Last

-------------------------------------
Container<T, n>::front()
-------------------------------------
 0 1 2 3 4 5 6 7 8 9
 1 2 3 ? ? ? ? ? ? ?
 ^ First
       ^ Last

 0 1 2 3 4 5 6 7 8 9
 8 2 3 ? ? ? ? ? ? ?
 ^ First
       ^ Last

-------------------------------------
Container<T, n>::push_back()
-------------------------------------
 0 1 2 3
 ? ? ? ?
 ^ First
 ^ Last

 0 1 2 3
 a b c ?
 ^ First
       ^ Last

[a, b, c]

EXCEPTION Container<T, n>::push_back

-------------------------------------
Container<T, n>::push_front()
-------------------------------------
 0 1 2 3 4 5 6 7
 a b c d ? C B A
           ^ First
         ^ Last

[C, B, A, a, b, c, d]

EXCEPTION Container<T, n>::push_back

-------------------------------------
Container<T, n>::pop_back()
-------------------------------------
 0 1 2 3
 a b ? ?
 ^ First
     ^ Last

[a, b]

EXCEPTION Container<T, n>::pop_front

-------------------------------------
Container<T, n>::pop_front()
-------------------------------------
 0 1 2 3
 ? ? c d
     ^ First
 ^ Last

[c, d]

EXCEPTION Container<T, n>::pop_front

-------------------------------------
Container<T, n>::at(..)
-------------------------------------
 0 1 2 3
 a b ? ?
 ^ First
     ^ Last

c8.at(1) : b
c8.at(1) = 'G';

 0 1 2 3
 a G ? ?
 ^ First
     ^ Last

[a, G]
c8.at(2)  : EXCEPTION Container<T, n>::at

-------------------------------------
Container<T, n>::iterator
-------------------------------------
 0 1 2 3 4 5 6 7 8 9
 3 2 3 ? ? ? ? ? ? ?
 ^ First
       ^ Last

[3, 2, 3]

*c3.begin() : 3

3 2 3 

-------------------------------------
Container<T, n>::operator << (..)
-------------------------------------
 0 1 2 3 4 5 6 7 8 9
 3 2 3 ? ? ? ? ? ? ?
 ^ First
       ^ Last

[3, 2, 3]

-------------------------------------
Container<T, n>::operator == (..)
-------------------------------------
[1, 2, 3] == [1, 2, 3]  true
[1, 2, 3] == [1, 2]     false
[1, 2]    == [1, 2, 3]  false
[1, 2, 3] == [1, 1, 3]  false
[1, 1, 3] == [1, 2, 3]  false

-------------------------------------
Container<T, n>::operator < (..)
-------------------------------------
[1, 2, 3] <  [1, 2, 3]  false
[1, 2, 3] <  [1, 2]     false
[1, 2]    <  [1, 2, 3]  true
[1, 2, 3] <  [1, 1, 3]  false
[1, 1, 3] <  [1, 2, 3]  true

-------------------------------------
Container<T, n>::operator > (..)
-------------------------------------
[1, 2, 3] >  [1, 2, 3]  false
[1, 2, 3] >  [1, 2]     true
[1, 2]    >  [1, 2, 3]  false
[1, 2, 3] >  [1, 1, 3]  true
[1, 1, 3] >  [1, 2, 3]  false

-------------------------------------
Container<T, n>::operator <= (..)
-------------------------------------
[1, 2, 3] <= [1, 2, 3]  true
[1, 2, 3] <= [1, 2]     false
[1, 2]    <= [1, 2, 3]  true
[1, 2, 3] <= [1, 1, 3]  false
[1, 1, 3] <= [1, 2, 3]  true

-------------------------------------
Container<T, n>::operator >= (..)
-------------------------------------
[1, 2, 3] >= [1, 2, 3]  true
[1, 2, 3] >= [1, 2]     true
[1, 2]    >= [1, 2, 3]  false
[1, 2, 3] >= [1, 1, 3]  true
[1, 1, 3] >= [1, 2, 3]  false

-------------------------------------
Container<T, n>::full()
-------------------------------------
size      : 3
capacity  : 3
first     : 0
last      : 3

 0 1 2
 1 2 3
 ^ First
       ^ Last

[1, 2, 3]

-------------------------------------
Container<T, n>::empty()
-------------------------------------
size      : 0
capacity  : 3
first     : 0
last      : 0

 0 1 2
 ? ? ?
 ^ First
 ^ Last

[]
~~~

</details>

<br>

### Exemples d'implémentation des itérateurs et exceptions

<details>
<summary>itérateurs au sein d'une classe</summary>

~~~cpp
#include <iostream>
#include <vector>

class NumberCollection {
public:
    NumberCollection(const std::vector<int>& numbers) : numbers(numbers) {}

    class Iterator {
    public:
        Iterator(const std::vector<int>& numbers, std::size_t position)
            : numbers(numbers), position(position) {}

        int operator*() const {
            return numbers[position];
        }

        Iterator& operator++() {
            ++position;
            return *this;
        }

        bool operator==(const Iterator& other) const {
            return position == other.position;
        }

        bool operator!=(const Iterator& other) const {
            return position != other.position;
        }

    private:
        const std::vector<int>& numbers;
        std::size_t position;
    };

    Iterator begin() const {
        return Iterator(numbers, 0);
    }

    Iterator end() const {
        return Iterator(numbers, numbers.size());
    }

private:
    std::vector<int> numbers;
};

int main() {
    NumberCollection collection({10, 20, 30, 40});

    for (auto it = collection.begin(); it != collection.end(); ++it) {
        std::cout << *it << " ";
    }

    return 0;
}
~~~

</details>

<details>
<summary>gestion des exceptions</summary>

~~~cpp
#include <iostream>
#include <stdexcept>

void checkValue(int value) {
    if (value < 0) {
        throw std::logic_error("Negative values are not allowed!");
    }
    std::cout << "Value is valid: " << value << std::endl;
}

int main() {
    try {
        checkValue(-5);
    } catch (const std::logic_error& e) {
        std::cerr << "Caught logic_error: " << e.what() << std::endl;
    }
    return 0;
}
~~~

~~~cpp
#include <iostream>
#include <vector>
#include <stdexcept>

int main() {
    try {
        std::vector<int> vec = {1, 2, 3};
        std::cout << "Accessing element at index 5: " << vec.at(5) << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Caught out_of_range exception: " << e.what() << std::endl;
    }

    return 0;
}
~~~

~~~cpp
std::vector<int> vec = {1, 2, 3};
try {
   checkValue(-5);
   std::cout << "vec.at(5) : " << vec.at(5) << std::endl;
} catch (const std::out_of_range& e) {
    std::cerr << "Specific handler: " << e.what() << std::endl;
} catch (const std::logic_error& e) {
    std::cerr << "General handler for logic_error: " << e.what() << std::endl;
}
~~~

</details>

<br>

### Modalités
- à faire **par groupe de 2 étudiants**
- 8 périodes

Bon travail