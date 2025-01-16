#include <iostream>
using namespace std;

void Ordenamiento(int vector[], int a) {
	int aux;
    for (int i = 0; i < a - 1; ++i) {
        for (int j = 0; j < a - i - 1; ++j) {
            if (vector[j] > vector[j + 1]) {
                aux = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = aux;
            }
        }
    }
}

void Formacion(int vector[], int a) {
    for (int i = 0; i < a; ++i) {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int main() {
    int vector[] = {-20, 15, -22, 16, -22, -10, 2, 0, 44, -33, -38, 44, -16, 35, -48};
    int a = sizeof(vector) / sizeof(vector[0]);

    cout << "Lista original: ";
    Formacion(vector, a);
    
    Ordenamiento(vector, a);  

    cout << "Lista ordenada: ";
    Formacion(vector, a);
    
    return 0;
}