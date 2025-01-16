#include <iostream>
using namespace std;

double evaluarPolinomio(unsigned int grado, double coeficientes[], double x) {
    double y = 0;
    for (int i = grado; i>= 0; i--){
    	y = (y * x) + coeficientes[i];
	}
	
	return y;
}

int main() {
   double coeficientes[] = {6, -7, 2, -5, 0.5, 0, -3, 5};
   cout << "P(" << -1 << ") = " << evaluarPolinomio(7, coeficientes, -1) << ".\n";
   return 0;
}
 
 
