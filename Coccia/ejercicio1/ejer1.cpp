#include <iostream>

#include "ejer1.h"
 
using namespace std;

namespace parcial
{
	void mostrarCreditos()
	{
		cout << "Lautaro Coccia. VS 2017" << endl;
	}

	float diferencia(float a, float b)
	{
		float dif = a - b;

		if (dif < 0)
		{
			dif = dif * -1;
		}

		return dif;
	}
}




