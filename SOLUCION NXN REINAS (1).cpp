#include <iostream>
#define LIMITE 100
using namespace std;

bool esSeguro(int tablero[LIMITE], int fila, int columna) {
    for (int i = 0; i < fila; i++) {
        if (tablero[i] == columna || (tablero[i] - columna) == (i - fila) || (tablero[i] - columna) == (fila - i)) {
            return false;
        }
    }
    return true;
}

bool resolverNReinas(int tablero[LIMITE], int fila, int dimension) {
    if (fila == dimension) {
        return true;
    }

    for (int columna = 0; columna < dimension; columna++) {
        if (esSeguro(tablero, fila, columna)) {
            tablero[fila] = columna;

            if (resolverNReinas(tablero, fila + 1, dimension)) {
                return true;
            }

            tablero[fila] = -1;
        }
    }
    
    return false; 
}

void imprimirTablero(int tablero[LIMITE], int dimension) {
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            if (tablero[i] == j) {
                cout << "1 ";
            } else {
                cout << "0 "; 
            }
        }
        cout << endl;
    }
}

void imprimirVector(int tablero[LIMITE], int dimension) {
    for (int i = 0; i < dimension; i++) {
        cout << "[" << tablero[i] << "]";
    }
    cout << endl;
}

int main() {
    int dimension;
    cout << "Ingrese el tamaño del tablero: ";
    cin >> dimension;


    int tablero[LIMITE];
    for (int i = 0; i < LIMITE; i++) {
        tablero[i] = -1; 
    }

    if (resolverNReinas(tablero, 0, dimension)) {
        cout << "Solución encontrada:\n";
        imprimirTablero(tablero, dimension);
    } else {
        cout << "No hay solución para la dimensión = " << dimension << endl;
    }

    cout << endl;
    imprimirVector(tablero, dimension);
    return 0;
}