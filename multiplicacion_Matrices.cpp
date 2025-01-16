#include <iostream>
#define LIMITE 100
using namespace std;

void definirMatrices(int matriz1[LIMITE][LIMITE], int matriz2[LIMITE][LIMITE], int fila1, int columna1, int fila2, int columna2){
	for(int i = 0; i < fila1; i++){
		for(int j = 0; j < columna1; j++){
			cout << "Digite los valores de la primera matriz [" << i << "] " << "[" << j << "]";
			cin >> matriz1[i][j];
		}
	}
	for(int i = 0; i < fila2; i++){
		for(int j = 0; j < columna2; j++ ){
			cout << "Digite los valores de la segunda matriz [" << i << "] " << "[" << j << "]";
			cin >> matriz2[i][j];
		}
	}
	
}

void multiplicacionDeMatrices(int matriz1[LIMITE][LIMITE], int matriz2[LIMITE][LIMITE], int matrizSuma[LIMITE][LIMITE], int fila1, int columna1, int fila2, int columna2){
	for(int i = 0; i < fila1; i++){
		for(int j = 0; j < columna2; j++){
			matrizSuma[i][j] = 0;
			for(int k = 0; k <columna1; k++){
				matrizSuma[i][j] += matriz1[i][k]*matriz2[k][j];
			}
	
		}
	}
}

int main(){
	int matriz1[LIMITE][LIMITE], matriz2[LIMITE][LIMITE], matrizSuma[LIMITE][LIMITE];
	int fila1, columna1, fila2, columna2;
	
	cout << "Digite la cantidad de filas de la primera matriz" << endl;
	cin >> fila1;
	cout << "Digite la cantidad de colunmas de la primera matriz" << endl;
	cin >> columna1;
	cout << "Digite la cantidad de filas de la segunda matriz" << endl;
	cin >> fila2;
	cout << "Digite la cantidad de columnas de la segunda matriz" << endl;
	cin >> columna2;
	
	if(columna1 == fila2){
		definirMatrices(matriz1, matriz2, fila1, columna1, fila2, columna2);
		multiplicacionDeMatrices(matriz1, matriz2, matrizSuma, fila1, columna1, fila2, columna2);
	cout << "La multiplicacion de la matriz es: " << endl;
	for(int i = 0; i < columna1; i++){
		cout << endl;
		for(int j = 0; j < fila2; j++){
			cout << matrizSuma[i][j] << "\t";
		}
	}
	}else{
		cout << "La multiplicacion de matrices no se puede hacer";
	}
	
}
