#include <iostream>
using namespace std;

unsigned long int invertirCifras(unsigned long int numeroOriginal) {
   unsigned long int numeroInvertido = 0; 
   unsigned long int aux;
   
   while(numeroOriginal != 0){
	   numeroInvertido = (numeroOriginal%10) + numeroInvertido;
	   numeroOriginal = numeroOriginal/10;
	   
	   if(numeroOriginal != 0){
	   	numeroInvertido = numeroInvertido*10;
		}
	}
   return numeroInvertido;
}

int main() {
   unsigned long int numero;
   
   cout << "Digite un número entero no negativo: ";
   cin >> numero;

   cout << "El número que resulta de invertir las cifras de " << numero << " es " << invertirCifras(numero);
   return 0;
}


