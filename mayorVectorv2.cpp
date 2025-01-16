#include <iostream>
using namespace std;

int buscarMayor(int arreglo[], int cantidadDeElementos){
	int mayor = 0;
	for(int i = 0; i < cantidadDeElementos; i++){
		if(arreglo[i] >= mayor){
			mayor = arreglo[i];
		}
	}
	
return mayor;
}

int main(){
	int arreglo[] = {8, 5, 3, 0, -2, 20, 12, 8, 20, 5, 3};
	int cantidadDeElementos = 11;
	cout << "El numero mayor es: " << buscarMayor(arreglo, cantidadDeElementos);
	return 0;
}




