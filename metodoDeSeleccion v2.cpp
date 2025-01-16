#include <iostream>

using namespace std;

void ordenarAscendentemente(int arreglo[], int cantidadDeElementos){
	int ultPosicion = cantidadDeElementos - 1;
	
	for (int i = 0; i < ultPosicion; i++){
		int posicionMenor = i;
		
		for(int j = i + 1; j <= ultPosicion; j++){
			if(arreglo[posicionMenor] > arreglo[j]){
				posicionMenor = j;
			}
		}
		
		int aux = arreglo[i];
		arreglo[i] = arreglo[posicionMenor];
		arreglo[posicionMenor] = aux;
	}
}

int main(){
	int arreglo[] = {0, 3, 4, 5, 1};
	int cantidadDeElementos = 5;
	
	ordenarAscendentemente(arreglo, cantidadDeElementos);
	
	for(int i = 0; i < cantidadDeElementos; i++){
		cout << arreglo[i] << endl; 
	}
	
	return 0;
}







