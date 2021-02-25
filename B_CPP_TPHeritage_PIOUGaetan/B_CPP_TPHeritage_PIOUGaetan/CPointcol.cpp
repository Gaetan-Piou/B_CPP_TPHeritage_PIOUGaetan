#include "CPointcol.h"


pointcol::pointcol(float abs, float ord, int couleur) :point(abs, ord)
{
	cl = couleur;
}


int pointcol::getCouleur() {
	return cl;
}


void pointcol::affiche()
{
	cout << "X: " << getX() << ", Y: " << getY() << ", Couleur: " << getCouleur() << "\n";
}

void pointcol::colore(int couleur)
{
	cl = couleur;
}