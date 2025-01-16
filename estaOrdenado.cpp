#include <iostream>
using namespace std;

bool estaOrdenado(int arreglo[], int cantidadDeElementos){
	bool ordenadoAscendentemente = false;
	bool ordenadoDescendentemente = false;
	bool ordenado = false;
	int antePenultima = cantidadDeElementos - 1;
	for(int i = 0; i < antePenultima; i++){
		if (arreglo[i + 1] >= arreglo[i]){
			ordenadoAscendentemente = true;	
		}
		else{
			ordenadoAscendentemente = false;
			break;
		}                  	
	}
	
	for(int i = 0; i < antePenultima; i++){
		if (arreglo[i + 1] <= arreglo[i]){
			ordenadoDescendentemente = true;	
		}
		else{
			ordenadoDescendentemente = false;
			break;
		}                  	
	}
	if (ordenadoDescendentemente | ordenadoAscendentemente){
		ordenado = true;
	}
	
	return ordenado;
	}

int main(){
	int arreglo[] = {1, 2, 2, 4};
	int cantidadDeElementos = 4;
	
	estaOrdenado(arreglo, cantidadDeElementos);
	 
	if(estaOrdenado(arreglo, cantidadDeElementos)){
		cout << "true";
	}else{
		cout << "false";
	}
}