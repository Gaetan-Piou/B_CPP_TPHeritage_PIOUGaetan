#include <iostream>
#include "CPointcol.h"
#include "CPointcool.h"

using namespace std;

int main()
{
	//Exercice 103
	pointcol pcol(2.5, 3.25, 5);
	pcol.affiche();
	pcol.colore(8);
	pcol.affiche();
	pcol.deplace(5.8, 1.4);
	pcol.affiche();

	cout << endl;

	//Exercice 104
	pointcool pcool(5.3,3.8,4);
	pcool.affiche();
	pcool.colore(1);
	pcool.affiche();
	cout<< "Nous n'avons pas acces a la fonction deplace de la classe point dans la classe pointcool, car la classe pointcool n'a pas herite pas de la classe point" <<endl;

	return 0;
}