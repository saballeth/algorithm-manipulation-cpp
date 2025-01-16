//punto b
//punto a
#include <iostream>

using namespace std;

void FuncionBusqueda(int arr[], int n, int pos1, bool vl) {
	int k,nBusqueda,pBusqueda;
 cout<<"Valor logico: 1- si es vedadero , 2 si es falso ::\t";
 cin>>k;
 if(pos1 < 0 || pos1 >= n )
 {
 	cout<<"Posicion invalida: "<<endl;
 	return ;
 }else
 {
 	if(k == 1)
 {
 	vl = true;
 	cout<<"su valor elegido es:"<<vl<<endl;
 	nBusqueda = arr[0];
 	for(int i = 0; i < n; i ++)
 	{
 		if(nBusqueda < arr[i])
 		{
 			nBusqueda = arr[i];
 			pBusqueda= i;
		 }
	 }
	 cout<<"Este es su numero"<<"{"<<nBusqueda<<"} \n "<<" Esta es su Posicion: {  "<<pBusqueda<<"}"<<endl;
	 
 }else if(k == 2)
 {
 	vl = false; 
 	cout<<"Su valor elegido es: "<<vl<<endl;
 	nBusqueda= arr[0];
 	for(int i = 0; i < n; i ++)
 	{
 		if(nBusqueda > arr[i])
 		{
 			nBusqueda = arr[i];
 			pBusqueda = i;
		 }
	 }
	  cout<<"Este es su numero"<<"{"<<nBusqueda<<"} \n "<<"Esta es su Posicion: { "<<pBusqueda<<"}"<<endl;
 }
 }
 
 
 
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(arr[0]); // Obtener la longitud del arreglo
  int pos1 = 0; // Posición 1 válida
  bool vl ;
 FuncionBusqueda(arr,  n,  pos1,  vl);

  return 0;
}