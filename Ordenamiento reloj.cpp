#include <iostream>
using namespace std;

void ordenar(int arreglo[], int cantidadDeElementos) {
	int aux;
	aux=arreglo[cantidadDeElementos-1];
	for(int i=cantidadDeElementos-1;i>0;i--){
		arreglo[i]=arreglo[i-1];
	}
	arreglo[0]=aux;
}

int main() {
   int arreglo[] = {6, -7, 2, -5, 0, 2, -3, 5, 9}, cantidadDeElementos = 9; 
   
   	cout << "Sin ordenar:      ";
	for(int i = 0; i < cantidadDeElementos; i++){
		cout << "  " << arreglo[i];
	}
	cout << " " << endl; 
	ordenar(arreglo, cantidadDeElementos);
	cout << "Arreglo ordenado: ";
	for(int i = 0; i < cantidadDeElementos; i++){
		cout << "  " << arreglo[i];
	}
   return 0;
}


