#include <iostream>
#define LIMITE 100
using namespace std;

bool jaqueMate(bool ajedrez[LIMITE][LIMITE], int dimension) {
    for (int i = 0; i < dimension; i++) {
        int reinasEnFila = 0;
        int reinasEnColumna = 0;
        for (int j = 0; j < dimension; j++) {
            if (ajedrez[i][j]) reinasEnFila++; 
            if (ajedrez[j][i]) reinasEnColumna++;
        }
        if (reinasEnFila > 1 || reinasEnColumna > 1) {
            return false; 
        }
    }

    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            if (ajedrez[i][j]) {
                for (int k = 1; k < dimension; k++) {
                    if (i + k < dimension && j + k < dimension && ajedrez[i + k][j + k]) {
                        return false; 
                    }
                    if (i - k >= 0 && j - k >= 0 && ajedrez[i - k][j - k]) {
                        return false; 
                    }
                }
            }
        }
    }

    return true; 
}

int main() {
    bool ajedrez[LIMITE][LIMITE] = {
        {false, false, false, false, false, false, false, false},
        {false, false, false, true, false, false, false, false},
        {false, false, false, false, false, false, true, false},
        {true, false, false, false, false, false, false, false},  
        {false, false, false, false, true, false, false, false}, 
        {false, true, false, false, false, false, false, false},  
        {false, false, false, false, false, true, false, false},  
        {false, false, true, false, false, false, false, false}
    };
    int dimension = 8;
    
    if (jaqueMate(ajedrez, dimension)) {
        cout << "No hay amenazas entre las reinas." << endl;
    } else {
        cout << "Hay amenazas entre las reinas." << endl;
    }
    
    return 0;
}
