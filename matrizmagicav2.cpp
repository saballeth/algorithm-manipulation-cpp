#include <iostream>
#define LIMITE 100 
using namespace std; 

 void mostrarMatriz(int matriz[LIMITE][LIMITE], int filas, int columnas){
 	for(int i = 0; i < filas; i++){
 		for(int j = 0; j < columnas; j++){
 			cout << "Digite el valor de la matriz en: [" <<  i << "]" << "[" << j << "]" << endl; 	
		 	cin >> matriz[i][j];
		 }
	 }
 }
 
void verificarEsMagico(int matriz[LIMITE][LIMITE], int filas, int columnas, int diagonalPrincipal, int diagonalsecundaria){
	int sumaDiagonalPrincipal = 0;
	int sumaDiagonalSecundaria = 0;
	int sumaColumnas = 0;
	int sumaFilas = 0;
	for(int i = 0; i < filas; i++){
	 sumaDiagonalPrincipal += matriz[i][i];
	 sumaDiagonalSecundaria += matriz[i][filas - i - 1];
		for(int j = 0; j < columnas; j++){
			sumaColumnas += matriz[j][i];
			sumaFilas += matriz[i][j];
		}
	}
		if(sumaDiagonalPrincipal == sumaDiagonalSecundaria && sumaColumnas == sumaFilas && sumaDiagonalSecundaria == sumaColumnas){
			cout << "SI es magico";
		}
		else{
			cout << "NO es magico";
		}
	}

int main(){
	int matriz[LIMITE][LIMITE];
	int filas;
	int columnas;
	
	cout << "Digite la cantidad de filas de la matriz: " << endl;
	cin >> filas;
	cout << "Digite la cantidad de columnas de la matriz: " << endl;
	cin >> columnas;
	
	if(filas == columnas){
		int diagonalPrincipal = filas;
		int diagonalsecundaria = filas;    
		mostrarMatriz(matriz, filas, columnas);  
		verificarEsMagico(matriz, filas, columnas, diagonalPrincipal, diagonalsecundaria);
}
else{
	cout << "NO es un cuadrado magico";
}
	return 0;
}