#include <iostream>
#include <iomanip>
using namespace std;

void AproximacionDeSen(int iteraciones, float angulo){
	float exponente = angulo, potencia = angulo, potenciaExponente = 1; 
	int factorial = 1;
	int potenciaFactorial, potenciaFactorial2;
	float aproximacion = 0;

	for(int i = 1; i<=iteraciones;i++){
		potenciaExponente = potencia*potenciaExponente;
		potenciaFactorial = (2*i)+1;
		potenciaFactorial2 = 2*i;
		if(i%2 == 0){
			aproximacion =   aproximacion - potenciaExponente/factorial;	
		}
		else{
			aproximacion =  aproximacion + potenciaExponente/factorial ;
		}
	
	cout << "potenciaExponente: " << potenciaExponente << endl;
	cout << "factorial: " << factorial << endl;
	
	cout<<fixed<<setprecision(20)<<aproximacion<<endl;
	
		factorial *= potenciaFactorial*potenciaFactorial2;
		potencia = exponente*exponente;
	
	
	}
	 
	cout << aproximacion << endl;
	
	
}

int main(){
	
	float angulo, resultado;
	int iteraciones;
	cout << "Digite el angulo: " << endl;
	cin>> angulo;
	cout << "Digite las interaciones: " << endl;
	cin >> iteraciones;
	AproximacionDeSen(iteraciones, angulo);
	
}
