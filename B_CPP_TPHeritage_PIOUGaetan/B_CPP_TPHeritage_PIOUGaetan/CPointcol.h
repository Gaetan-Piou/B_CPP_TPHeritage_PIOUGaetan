#pragma once
#include "CPoint.h"

class pointcol :public point
{
private:
	int cl;

public:
	//Constructeur
	pointcol(float abs, float ord, int couleur);

	//Acesseurs
	int getCouleur();

	void affiche();
	void colore(int couleur);
};