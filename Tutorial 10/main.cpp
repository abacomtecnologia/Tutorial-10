//******************************//
// Tutorial 10a - Punteros		//
//******************************//

#include <iostream>

using namespace std;

void funcion(int& val1, int& val2) {
	val1 = val1 + 10;
	val2 = val2 + 10;
}

int main() {
	int numero  = 10;										// Declaracion de variable
	int numero2 = 20;										// Declaracion de variable
	cout << "Valor de numero      = " << numero << endl;	// imprimir variable
	cout << "Ubicacion de numero  = " << &numero << endl;	// imprimir ubicacion en memoria
	cout << "Valor de numero2     = " << numero2 << endl;	// imprimir variable
	cout << "Ubicacion de numero2 = " << &numero2 << endl;	// imprimir ubicacion en memoria
	cout << endl;

	funcion(numero, numero2);

	cout << "Valor de numero      = " << numero << endl;	// imprimir variable
	cout << "Ubicacion de numero  = " << &numero << endl;	// imprimir ubicacion en memoria
	cout << "Valor de numero2     = " << numero2 << endl;	// imprimir variable
	cout << "Ubicacion de numero2 = " << &numero2 << endl;	// imprimir ubicacion en memoria
	cout << endl;

	cin.get();
	return 0;
}
