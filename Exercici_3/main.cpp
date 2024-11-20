#include <iostream>
#include <string>
using namespace std;

void main() {
	//Definició de la variable nomUsuari de tipus string

	string nomUsuari;

	//Imprimir la pregunta i guardar la resposta de l'usuari en la variable que toca

	cout << "Hola, Cual es tu nombre" << endl;
	cin >> nomUsuari;

	//Imprimir un missatge "hola", juntament amb la variable on hi ha el nom (definit per l'usuari abans)

	cout << "Hola, " << nomUsuari << endl;
}