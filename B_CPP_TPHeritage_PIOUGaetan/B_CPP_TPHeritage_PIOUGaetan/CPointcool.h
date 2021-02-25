#pragma once
#include <iostream>

using namespace std;

class pointcool
{
	int cl;
	float x, y;
public:
	//Constructeur
	pointcool(float abs, float ord, int couleur);

	//Acesseurs
	int getCouleur();

	void affiche();
	void colore(int couleur);
};