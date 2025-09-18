## CLion et 1er programme

### Objectif
Etre capable de compiler un programme C++

### A faire
1. Installer et configurer CLion

	- [CLion download](https://www.jetbrains.com/clion/download)
	- [Guide d'installation et CLion](https://github.com/gmbreguet/PRG1_GMB/blob/main/3_Complements/IDE_CLion/Installation%20CLion%20-%20Fouad%20HANNA%20v1.2.pdf)

2. Corriger et compiler ce code

	~~~cpp
	import "inputOuput"
	namespace standard
	pgm (void) [
	   cout >> 'Programme à corriger' >> newline
	   return SUCCESS.
	]
	~~~

	<details>
	<summary>solution</summary>
	
	avec les no de lignes
	
	~~~
	1) import "inputOuput"
	2) namespace standard
	3) pgm (void) [
	4)    cout >> 'Programme à corriger' >> newline
	5)    return SUCCESS.
	6) ]
	~~~

	corrections à apporter

	~~~
	1) - manque le #
	   - include au lieu de import
	   - pas de " mais des <..>
	2) - manque using
	   - std au lieu de standard
	3) - manque le type de retour "int"
	   - le nom de la fonction doit être "main"
	   - parenthèses vide ( )
	4) - l'opérateur de flux est à l'envers, ce serait cin >> variable ou cout << "message"
	   - la chaine de caratères doit être entre "..."
	   - le newline est à remplacer par endl
	   - manque le ;
	   - un message à la console ne devrait pas avoir d'accent
	5) - manque EXIT_ et un ; au lieu du .
	6) - un bloc est entre { } et non entre [ ]
	~~~

	code corrigé

	~~~cpp
	#include <cstdlib>
	#include <iostream>	
	using namespace std;
	
	int main () {
	   cout << "Programme correct" << endl;
	   return EXIT_SUCCESS;
	}
	~~~
</details>

3. Si le temps le permet, installer github et pratiquer ;)

- [git pour PRG1](https://github.com/gmbreguet/PRG1_GMB/blob/main/3_Complements/Git/Git%20pour%20PRG1.pdf)
- [github pour CLion](https://github.com/gmbreguet/PRG1_GMB/blob/main/3_Complements/Git/GitHub4CLion.pdf)
- [les bases](https://github.com/gmbreguet/PRG1_GMB/blob/main/3_Complements/Git/git%20-%20les%20bases.pdf)
- [simulateur](https://learngitbranching.js.org/?locale=fr_FR)

### Complément
- n/a


### Temps / délai
- 2 périodes

---
Bon travail
