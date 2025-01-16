#include <iostream>
#define LIMITE 100
using namespace std;

mostrarMatriz(int matrizA[LIMITE][LIMITE], int matrizB[LIMITE][LIMITE], int filasA, int columnasA, int filasB, int columnasB){
	for(int i = 0; i < filasA; i++){
		for(int j = 0; j < columnasA; j++){
			cout << "Digite los valores de la primera matriz en: [" << i << "]" << " [" << j << "]" << endl;
			cin >> matrizA[i][j];
		}
	}
	
	for(int i = 0; i < filasB; i++){
		for(int j = 0; j < columnasB; j++){
			cout << "Digite los valores de la segunda matriz en: [" << i << "]" << " [" << j << "]" << endl;
			cin >> matrizB[i][j];	
		}
		
	}
	
}
void multiplicacionDeMatrices(int matrizA[LIMITE][LIMITE], int matrizB[LIMITE][LIMITE],  int matrizSuma[LIMITE][LIMITE],  int filasA, int columnasA, int filasB, int columnasB){
	for(int i = 0; i < filasA; i++){
		for(int j = 0; j < columnasB; j++){
			for(int k = 0; k < columnasA; k++){
				matrizSuma[i][j] += matrizA[i][k]*matrizB[k][j];
			}
		}
	}
}

int main(){
	int matrizA[LIMITE][LIMITE], matrizB[LIMITE][LIMITE], matrizSuma[LIMITE][LIMITE];
	int filasA, columnasA, filasB, columnasB;
	
	cout << "Dime la cantidad de filas de la primera matriz: " << endl;
	cin >> filasA;
	
	cout << "Dime la cantidad de columnas de la primera matriz: " << endl;
	cin >> columnasA;
	
	cout << "Dime la cantidad de filas de la segunda matriz: " << endl;
	cin >> filasB;
	
	cout << "Dime la cantidad de columnas de la segunda matriz: " << endl;
	cin >> columnasB;
	
	if (columnasA == filasB){
		mostrarMatriz(matrizA, matrizB, filasA, columnasA, filasB, columnasB);
		
		multiplicacionDeMatrices(matrizA, matrizB, matrizSuma, filasA, columnasA, filasB, columnasB);
		
		for(int i = 0; i < filasA; i++){
		for(int j = 0; j < columnasB; j++){
				cout << matrizSuma[i][j] << "\t";
			}
			cout << endl;
		}
	}
	
	else{
		cout << "no se puede hacer la multiplicacion de matrices";
	}
	return 0;
}