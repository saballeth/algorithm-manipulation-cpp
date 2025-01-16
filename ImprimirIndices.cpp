#include <iostream>
#define LIMITE 100
using namespace std;

void buscandoElementosRepetidos(int matriz[LIMITE][LIMITE], int Cantfilas, int CantColumnas){
	
	for(int i = 0; i < Cantfilas; i++){
		for(int j = 0; j < CantColumnas; j++){
			matriz[i][j]; 
			if(matriz[i][j] == matriz[i][j + 1]){
				cout << "El indice: " i << "Tiene repetido";
			}
		}
	}
}



int main(){
	int matriz[LIMITE][LIMITE] = {{1, 2, 1},
								  {4, 5, 6},
								  {7, 7, 9}};
	int filas = 3;
	int columnas = 3;
	buscandoElementosRepetidos(matriz, filas, columnas);
}
