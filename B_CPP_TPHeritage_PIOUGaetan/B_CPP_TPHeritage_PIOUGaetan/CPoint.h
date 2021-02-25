#pragma once
#include <iostream>

using namespace std;

class point
{
	float x, y;
public:
	point(float abs = 0.0, float ord = 0.0)
	{
		x = abs;
		y = ord;
	}
	void affiche()
	{
		cout << "Coordonnées : " << x << " " << y << "\n";
	}
	void deplace(float dx, float dy)
	{
		x = x + dx;
		y = y + dy;
	}

	float getX()
	{
		return x;
	}
	float getY()
	{
		return y;
	}

};