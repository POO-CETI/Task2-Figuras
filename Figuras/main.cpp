#include <iostream>
#include "Cuadrado.h"

using namespace std;

int main()
{
	int numberSide, option;

	cout << "Opcion 1\n";
	for (int x = 0; x <= 2; ++x) {
		cout << "***\n";
	}

	cout << "\nOpcion 2\n";
	for (int x = 0; x <= 2; ++x) {
		if (x == 0 || x == 2) {
			cout << "***\n";
		} else {
			cout << "* *\n";
		}
	}

	cout << "\n\nIngrese su opcion: ";
	cin >> option;

	cout << "Ingrese un numero para el cuadrado: ";
	cin >> numberSide;
	Cuadrado cuadrado = Cuadrado(numberSide);

	switch (option)
	{
	case 1:
		cuadrado.drawFull();
		break;
	case 2:
		cuadrado.drawHollow();
		break;
	default:
		cout << "El valor que ingreso no se encuentra disponible.";
		break;
	}