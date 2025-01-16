#include <iostream>
#define LIMITE 100

using namespace std;

void mostrarMinimosColumnas(int matriz[LIMITE][LIMITE], int cantFilas, int cantColumnas){
	float menor;
	for(int i = 0; i < cantColumnas; i ++){
		menor = matriz[0][i];
		for(int j = 0; j < cantFilas; j++){
			if(matriz[j][i] < menor){
				menor = matriz[j][i];
			}
		}
		cout << "El menor de la columna " << i + 1 << " es " << menor << endl;
		cout << menor;
	}
}

int main(){
	int matriz[LIMITE][LIMITE]={{0,5,12,6,2},{1,6,12,17,2},{1,2,3,1,18},{16,18,1,3,7},{5,18,3,15,19}};
	int filas=5;
	int columnas=5;
	mostrarMinimosColumnas(matriz,filas,columnas);
	
	return 0;
}