//Sumar sin llevar

#include<iostream>
using namespace std;

int sinLlevar(int numero1, int numero2){
	int suma = 0;
	int sumaSinLlevar = 0;
	int contenedor;
		while(numero1!=0 && numero2!=0){
			contenedor = numero1%10;
			if(contenedor>9){
				contenedor = contenedor/10; 
			cout << contenedor << endl;
			}
			sumaSinLlevar += contenedor*10;
			numero1 = numero1/10;
			numero2 = numero2/10;
		}	
	return sumaSinLlevar;
}

main(){
	int l, numero1= 888889;
	int numero2 = 231239;
	l = sinLlevar(numero1, numero2);
	cout << "Cuidado: "<< l;
	return 0;
}

