#include<iostream>
#include <math.h>
#define LIMITE 100
using namespace std;

bool verificarMatrizMagica(double matriz[LIMITE][LIMITE], int dimension, int constanteMagica) {
	bool esMagica = true;
	double sumaDiagonalPrincipal = 0, sumaDiagonalSecundaria = 0;
	
	for(int fila = 0; fila < dimension; fila++) {
		double sumaColumnas = 0, sumaFilas = 0;
		for(int columna = 0; columna < dimension; columna++) {
			sumaFilas += matriz[fila][columna];
			sumaColumnas += matriz[columna][fila];
			
			if(fila == columna) {
				sumaDiagonalPrincipal += matriz[fila][columna];
			} 
			
			if((fila + columna) == dimension - 1) {
				sumaDiagonalSecundaria += matriz[fila][columna];		
		    }
		}
		
		if((sumaColumnas != constanteMagica) || (sumaFilas != constanteMagica)) {
			esMagica = false;
			break;
		}
	}
	
	if(esMagica) {
		if((sumaDiagonalPrincipal != constanteMagica) || (sumaDiagonalSecundaria != constanteMagica)) {
			esMagica = false; 
		}
	}
	
	return esMagica;
}

int main() {
    double matriz[LIMITE][LIMITE]; 
	int dimension;
	cout << "¿De qué dimensión es su matriz?" << endl; 
	cin >> dimension;
	
	 int constanteMagica = (dimension * (dimension * dimension + 1)) / 2;
	
	cout << "Ingrese los valores de su matriz." << endl; 
	for(int fila = 0; fila < dimension; fila++) {
		for(int columna = 0; columna < dimension; columna++) {
			cout << "Ingrese el valor en la posición [" << fila << "][" << columna << "] = ";
			cin >> matriz[fila][columna];    
		}
	} 
	
	if (verificarMatrizMagica(matriz, dimension, constanteMagica)) {
		cout << "La matriz es magica :)";
	}
	else {
		cout << "La matriz no es magica";
	}
	
}
