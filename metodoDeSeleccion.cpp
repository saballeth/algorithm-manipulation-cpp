#include <iostream>

using namespace std;

void ordenarAscendentemente(int arreglo[], int cantidadDeElemento){
	int aux;
	int posicionMenor;
	cantidadDeElemento--;
	for (int i = 0; i < cantidadDeElemento; i++){
		for(int j = i + 1; j <= cantidadDeElemento; j++){
			if(arreglo[i] > arreglo[j]){
				posicionMenor = j;
				aux = arreglo[i];
				arreglo[i] = arreglo[posicionMenor];
				arreglo[posicionMenor] = aux;
			}
		}
	}
}

int main(){
	int arreglo[] = {0, 3, 5, 4, 1};
	int cantidadDeElemento = 5;
	
	ordenarAscendentemente(arreglo, cantidadDeElemento);
	for(int i = 0; i < cantidadDeElemento; i++){
		cout << arreglo[i] << endl; 
	}
	
	return 0;
}







