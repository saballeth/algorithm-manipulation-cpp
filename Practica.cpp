#include <iostream>
#include <iomanip>
using namespace std;

AproximacionDeSen(int terminos, float angulo){
	float exponente = angulo; 
	float potencia = angulo, potenciaExponente = 1;
	int factorial = 1;
	int potenciaFactorial, potenciaFactorial2;
	float aproximacion = 0;

	for(int i = 1; i<=terminos;i++){
		potenciaExponente = potencia*potenciaExponente;
		potenciaFactorial = (2*i)+1;
		potenciaFactorial2 = 2*i;
		if(i%2 == 0){
			aproximacion =  aproximacion - potenciaExponente/factorial;	
		}
		else{
			aproximacion =  aproximacion + potenciaExponente/factorial ;
		}
	
		cout << "exponente: " << potenciaExponente << endl;
		cout << "factorial: " << factorial << endl;
		cout << "aproximacion: " << aproximacion << endl; 
		cout << "Termina -------- " << endl;
		factorial *= potenciaFactorial*potenciaFactorial2;
		potencia = exponente*exponente;
	}
	cout << aproximacion << "   " << endl;
	
	return aproximacion;
}

int main(void){
	int terminos; 
	float angulo, resultado;;
	
	cout << "Digite el numero de terminos: " << endl;
	cin >> terminos;
	
	cout << "Digite el numero del angulo: " << endl;
	cin >> angulo;
	
	resultado = AproximacionDeSen(terminos, angulo);
	
}