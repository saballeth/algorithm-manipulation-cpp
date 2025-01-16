#include<iostream>
using namespace std;
#define LIMITE 100


void mostrarMatriz(int matriz[LIMITE][LIMITE], int filas, int columnas){
	 
	 for(int i = 0; i < filas; i++){
	 	for(int j = 0; j < columnas; j++){
	 		cout << matriz[i][j] << "\t";
		 }
	 	cout << "\n";
	 }
	 
}

void agregarNumerosALaMatriz(int matriz[LIMITE][LIMITE], int filas, int columnas){
	
	for(int i = 0; i < filas; i++){
	 	for(int j = 0; j < columnas; j++){
	 		cout << "Digite el el numero para la posicion [" << i << "]" << "[" << j << "] = "; 
	 		cin >> matriz[i][j];
		 }
	 }
}

int main(){	
	int matriz[LIMITE][LIMITE], filas, columnas;
	 
	 cout << "Digite la cantidad de filas: \n";
	 cin >> filas;
	 cout << "Digite la cantidad de columnas: \n";
	 cin >> columnas;
	 
	 agregarNumerosALaMatriz(matriz, filas, columnas);
	  
	 mostrarMatriz(matriz, filas, columnas);
	 
}