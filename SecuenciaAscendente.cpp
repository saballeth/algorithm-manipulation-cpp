#include <iostream>
#include <locale.h>
using namespace std; 

int secuanciaAscendente(int v1[], int n);
int main(){
int vector1[]={4,18,25,11,40,49,27,24,27,12,12,20,25,1,11,45,16,21,23,16};					
int n=20;
int mostrar=secuanciaAscendente(vector1,n);
cout<<mostrar;
	
}

int secuanciaAscendente(int v1[], int n){
	int contadorSecuencia=1,mayor=1;
	
	for (int i=1;i<n;i++){
		if (v1[i-1]<=v1[i]){
		contadorSecuencia++;	
		}else {
			if (contadorSecuencia>mayor){
			mayor=contadorSecuencia++;	
			}	
			contadorSecuencia=1;
		}
	}
	return mayor;
}
