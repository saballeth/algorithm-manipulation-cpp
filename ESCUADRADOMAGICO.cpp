#include <iostream>
#define LIMITE 100

using namespace std;

void leerMatrizDeEnteros(int matriz[LIMITE][LIMITE], string nombre, int cantFilas, int cantColumnas) {
    cout << "Digite los elementos de la matriz " << nombre << " (" << cantFilas << " filas, " << cantColumnas << " columnas):" << endl;
    for (int i = 0; i < cantFilas; i++) {
        for (int c = 0; c < cantColumnas; c++) {
            cout << nombre << "(" << (i + 1) << ", " << (c + 1) << ") = ";
            cin >> matriz[i][c];
        }
    }
}

void mostrarMatriz(int matriz[LIMITE][LIMITE], string nombre, int cantFilas, int cantColumnas) {
    for (int f = 0; f < cantFilas; f++) {
        cout << "\t{ " << matriz[f][0];
        for (int c = 1; c < cantColumnas; c++) {
            cout << ", " << matriz[f][c];
        }
        cout << " }" << endl;
    }
    cout << "}" << endl;
}

bool verificarsiEsCuadradoMagico(int cuadrado[LIMITE][LIMITE], int dimension) {
    int sumaDiagonalPrincipal = 0, sumaDiagonalSecundaria = 0;
    int sumaFila[LIMITE] = {0}, sumaColumna[LIMITE] = {0};

    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            sumaFila[i] += cuadrado[i][j];
            sumaColumna[j] += cuadrado[i][j];
            if (i == j) {
                sumaDiagonalPrincipal += cuadrado[i][j];
            }
            if (i + j == dimension - 1) {
                sumaDiagonalSecundaria += cuadrado[i][j];
            }
        }
    }

    int sumaEsperada = sumaFila[0];
    if (sumaDiagonalPrincipal != sumaEsperada || sumaDiagonalSecundaria != sumaEsperada) {
        return false;
    }
    
    for (int i = 1; i < dimension; i++) {
        if (sumaFila[i] != sumaEsperada || sumaColumna[i] != sumaEsperada) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int dimension;
    int cuadrado[LIMITE][LIMITE];
    cout << "¿CUADRADO MÁGICO?\n" ;
    cout << "Digite la dimensión del cuadrado: ";
    cin >> dimension;

    leerMatrizDeEnteros(cuadrado, "cuadrado", dimension, dimension);
    cout << "La matriz dada " << (verificarsiEsCuadradoMagico(cuadrado, dimension) ? "sí " : "no ") << "es un cuadrado mágico." << endl;
    mostrarMatriz(cuadrado, "cuadrado", dimension, dimension);
    
    return 0;
}
