#include <iostream>
#include <string>
using namespace std;


void main() {

	//Definir varaiables
			
	string nomUsuario;
	
	short edatUsuario;

	string calleUsuario;

	int numCalle;

	//Preguntar i guardar les dades en les variables

	cout << "Dime tu nombre " << endl;

	cin >> nomUsuario;

	cout << endl;  // *Enter*


	cout << "Dime tu edad " << endl;

	cin >> edatUsuario;

	cout << endl;  // *Enter*

	cout << "Dime tu calle " << endl;

	cin >> calleUsuario;

	cout << endl;	// *Enter*

	cout << "Dime numero de tu calle " << endl;

	cin >> numCalle;

	cout << endl;	// *Enter*


	//Mostrar les dades per pantalla


	cout << "===============" << endl;

	cout << "   Sus Datos   " << endl;

	cout << "===============" << endl;

	cout << endl;	// *Enter*

	cout << "Su nombre es: " << nomUsuario << endl;

	cout << "Su edad es: " << edatUsuario << endl;

	cout << "Usted vive en: " << calleUsuario << " " << numCalle << endl;

}