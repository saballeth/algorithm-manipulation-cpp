#include <iostream>
using namespace std;

void ordenarAscendentemente(int arreglo[], int cantidadDeElementos){
	for (int i = 0; i < cantidadDeElementos; i++){
		int j = i;
		int aux = arreglo[i]; 

		while((j>0) && (arreglo[j-1] > aux)){
			arreglo[j] = arreglo[j-1];	
			j--;
		}
		arreglo[j] = aux;
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



