#include <iostream>
using namespace std;

void ordenadoNoDuplicadoAscendentemente(double arreglo[], int cantidadDeElementos){
	int antepeNultimaPosicion = cantidadDeElementos - 1; 
	// si me dejo
	for(int i = 0; i < cantidadDeElementos; i++){
		int j = i + 1;
		if(arreglo[j] != arreglo[i]){
			cout << arreglo[i] << endl;
		}
		if(j == cantidadDeElementos){
			break;
		}
	}   
}

int main(){
	double arreglo[] = {1, 2, 2, 2, 4, 5, 5.5};
	int cantidadDeElementos = 7;  
	                          
	ordenadoNoDuplicadoAscendentemente(arreglo, cantidadDeElementos);
	
	return 0;
}