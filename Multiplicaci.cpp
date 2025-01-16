#include <iostream>
using namespace std;
#define LIMITE  100

void multiplicacionDeMatrices( int matrizA[LIMITE][LIMITE], int matrizB[LIMITE][LIMITE], int matrizsuma[LIMITE][LIMITE], int Fila, int Columna){
	for(int i = 0; i < Fila; i++){
		for(int j = 0; j < Columna; j++){
			cout << "Digite el valor de la pocision: [" << i << "]" << "[" << j << "]";
			cin >> matriz[i][j];
		}
	}	
}

int main(){
	int matrizA[LIMITE][LIMITE], matrizB[LIMITE][LIMITE], matrizsuma[LIMITE][LIMITE]
	int Fila, Columna;
	cout << "Digite el numero de filas de la primera matriz" << endl;
	cin >> Fila;
	
	cout << "Digite el numero de columnas de la segunda matriz: " << endl;
	cin >> Columna;
	if(fila == Columna){
	multiplicacionDeMatrices(matrizA, matrizB, matrizsuma, Fila, Columna)	
	}else{
		cout << "No se puede hacer la multiplicacion de matrices"
	}
	
	
}
