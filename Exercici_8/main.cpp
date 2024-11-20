#include <iostream>

using namespace std;

void main() {

	//Definir variable i recollir el número entrat per l'usuari

	int numeroPrincipal;

	cout << "Introdueix un numero: ";

	cin >> numeroPrincipal;

	// Parar programa si el numero no es de 6 xifres

	if (numeroPrincipal < 100000 || numeroPrincipal > 999999) {
		cout << "El numero introduit no es de 6 xifres" << endl;
		return;
	}

	int unitats = numeroPrincipal % 10;
	int desenes = (numeroPrincipal / 10) % 10;
	int centenes = (numeroPrincipal / 100) % 10;
	int milers = (numeroPrincipal / 1000) % 10;
	int desenesMilers = (numeroPrincipal / 10000) % 10;
	int centenesMilers = (numeroPrincipal / 100000) % 10;

	// Mostrar resultat

	cout << "Unitats: " << unitats << endl;
	cout << "Desenes: " << desenes << endl;
	cout << "Centenes: " << centenes << endl;
	cout << "Milers: " << milers << endl;
	cout << "Desenes de milers: " << desenesMilers << endl;
	cout << "Centenes de milers: " << centenesMilers << endl;

}