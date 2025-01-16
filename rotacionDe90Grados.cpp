#include <iostream>
#define LIMITE 100
using namespace std;

void Rotatacion90Grados(int matriz[LIMITE][LIMITE], int dimension) { 
    for (int i = 0; i < dimension / 2; ++i) {
	int n = dimension;
    for (int i = 0; i < n / 2;++i) {
        int primero = i;
        int despues = n - 1 - i;
        for (int i = primero; i < despues; ++i) {
            int FueraTiempo = i - primero;
			int top = matriz[primero][i];
            matriz[primero][i] = matriz[despues - FueraTiempo][primero];
			matriz[despues - FueraTiempo][primero] = matriz[despues][despues - FueraTiempo];
            matriz[despues][despues - FueraTiempo] = matriz[i][despues];
            matriz[i][despues] = top;
        }
    }
}
}

void MostrarMatriz(int matriz[LIMITE][LIMITE], int fila, int columna) {
	for (int i = 0; i < fila; i++) {
        for (int j = 0; j < columna; j++) {
            cout << matriz[i][j];
        }
        cout << endl;
    }
}

int main() {
    
    int matriz[LIMITE][LIMITE] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
    int dimension = 3;
    int fila = 3;
    int columna = 3;
    cout << "Matriz original:" << endl;
    MostrarMatriz(matriz, fila, columna);
	Rotatacion90Grados(matriz, dimension);
    cout << "Matriz rotada 90 grados en sentido horario:" << endl;
    MostrarMatriz(matriz, fila, columna);

    return 0;
}