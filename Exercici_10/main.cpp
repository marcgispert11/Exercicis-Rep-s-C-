#include <iostream>

using namespace std;

void main() {

	float radioCirculo;
	float areaCirculo;
	float perimetroCirculo;

	cout << "Introdueix el radi del cercle ";
	cin >> radioCirculo;



	areaCirculo = 3.1416 * radioCirculo * radioCirculo;

	perimetroCirculo = 2 * 3.1416 * radioCirculo;

	cout << "Aquesta es l'area del cercle: " << areaCirculo << endl;

	cout << "Aquest es el perimetre del cercle: " << perimetroCirculo << endl;

}