#include <iostream>
using namespace std;

int buscarMayor(int arreglo[], int cantidadDeElementos){
	int mayor = 0;
	
	for(int i = 1; i < cantidadDeElementos; i++){
		if(arreglo[i] > arreglo[mayor]){
			mayor = i;
		}
	}
	return mayor;
}

int main(){
	int arreglo[] = {3, 5, -2, 0, 8, 6, 4, 1, 2, 0, 9, 6, 9, 1};
	cout << "El numero mayor está en la posicion: " << buscarMayor(arreglo, 14);
	
	return 0;
}
