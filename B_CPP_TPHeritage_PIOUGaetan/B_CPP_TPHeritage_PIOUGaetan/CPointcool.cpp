#include "CPointcool.h"

pointcool::pointcool(float abs, float ord, int couleur)
{
	x = abs;
	y = ord;
	cl = couleur;
}


int pointcool::getCouleur() {
	return cl;
}


void pointcool::affiche()
{
	cout << "X: " << x << ", Y: " << y << ", Couleur: " << cl << "\n";
}

void pointcool::colore(int couleur)
{
	cl = couleur;
}