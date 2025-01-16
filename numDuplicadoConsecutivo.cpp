#include <iostream>
using namespace std;

numDuplicadoConsecutivo(int num1){
	int numDuplicado = 0;
	int aux, aux2, aux3;
	
	while(num1 != 0){
		aux2 = (num1%10)*10;
		aux = (num1%10);
		numDuplicado = numDuplicado *100;
		numDuplicado = (aux + aux2) + numDuplicado;
		num1 = num1/10;	 	
	}
	num1 = numDuplicado;
	numDuplicado = 0;
	
	while(num1 != 0){
		aux3 = (num1%10);
		num1 = num1/10;
		
		if(num1 != 0){
		numDuplicado = (aux3 + numDuplicado)*10;
		}
		else
		{
		numDuplicado = (aux3 + numDuplicado);
		}
	}
	
	return numDuplicado;
	
}


main(){
	int num;
	
	cout << "Digite un número natural: " << endl;
	cin >> num;
	
	if(num > 0){
	cout << "El número " << num << " su duplicado consecutivo es: " << numDuplicadoConsecutivo(num);
	}
	else
	{
		cout << "A la proxima digite un numero natural";
	}
}