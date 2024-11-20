#include <iostream>

using namespace std;

int main() {

	// Variables

	float numero1;
	float numero2;

	float resultatSuma;
	float resultatResta;
	float resultatMultiplicacio;
	float resultatDivisio;
	float resultatModul;

	// Entrar dades

	cout << "Introdueix el primer numero: ";

	cin >> numero1;

	cout << "Introdueix el segon numerol: ";

	cin >> numero2;

	// Calcul

	resultatSuma = numero1 + numero2;

	cout << "La suma dels dos numeros es: " << resultatSuma << endl;

	resultatResta = numero1 - numero2;

	cout << "La resta dels dos numeros es: " << resultatResta << endl;

	resultatMultiplicacio = numero1 * numero2;

	cout << "La multiplicacio dels dos numeros es: " << resultatMultiplicacio << endl;

	resultatDivisio = numero1 / numero2;

	cout << "La divisio dels dos numeros es: " << resultatDivisio << endl;

	resultatModul = (int)numero1 % (int)numero2;

	cout << "El modul dels dos numeros es: " << resultatModul << endl;





}
