#include <iostream>
using namespace std;


void mostrarMatriz(int filas, int columna, int matri){
	
	for(int i = 0; i<filas; i++){
		for(int j = 0; j<columna;j++){
			cout << matri[i][j]<< "\t";
			
		}
	}
	cout << "\n";
	
}

int main(){
 int filas = 3;
 int columna = 2;

int matriz[filas][columna] = { {2, 4}, {4, 3}, {3, 2} };

mostrarMatriz(filas, columna, matriz)

}