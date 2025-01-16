#include <iostream>
using namespace std;

void Ordenar(int arreglo[], int a) {
    int i, clave, j;
    for (i = 1; i < a; i++) {
        clave = arreglo[i];
        j = i - 1;
        
        while (j >= 0 && arreglo[j] > clave) {
            arreglo[j + 1] = arreglo[j];
            j = j - 1;
        }
        arreglo[j + 1] = clave;
    }
}

void ImprimirVector(int arreglo[], int a) {
    for (int i = 0; i < a; ++i) {
        cout << arreglo[i] << " ";
    }
    cout << endl;
}

int main() {
    int arreglo[] = {-20, 15, -22, 16, -22, -10, 2, 0, 44, -33, -38, 44, -16, 35, -48};
    int a = sizeof(arreglo) / sizeof(arreglo[0]);

    cout << "Lista original: ";
    ImprimirVector(arreglo, a);
    
    Ordenar(arreglo, a);  

    cout << "Lista ordenada: ";
    ImprimirVector(arreglo, a);
    
    return 0;
}