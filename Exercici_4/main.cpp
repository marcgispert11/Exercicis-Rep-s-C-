# include <iostream>
# include <string>

using namespace std;

void main() {

	//Definir variables

	string nomUsuari;

	short edatUsuari;

	string menjarPreferit;

	//Demanar dades

	cout << "Introdueix el teu nom: ";
	cin >> nomUsuari;

	cout << "Introdueix la teva edat: ";
	cin >> edatUsuari;

	cout << "Introdueix el teu menjar preferit: ";
	cin >> menjarPreferit;

	//Mostrar dades

	cout << "El teu nom es: " << nomUsuari << endl;

	cout << "La teva edat es: " << edatUsuari << endl;

	cout << "El teu menjar preferit es: " << menjarPreferit << endl;

}