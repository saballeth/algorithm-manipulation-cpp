#include <iostream>
using namespace std;

nEsimaSucesion(int num){
	int resultado = 0;
	int aux = 1;
	
	for(int i = 0; i <= num; i++){
		if (aux == 2){
		resultado = resultado + aux;
		}
		
		if(aux == 3){
			resultado = resultado + aux;
		}
		
		if (aux == 4){
			resultado = resultado*2;
			aux = 1;
		}
		aux ++;
	}
		
	return resultado;
	
}


main(){
	int num;
	
	cout << "Digite un numero natural: " << endl;
	cin >> num;
	cout << "El número " << num << " Su n-ésima sucesion creciente es: " << nEsimaSucesion(num);
}