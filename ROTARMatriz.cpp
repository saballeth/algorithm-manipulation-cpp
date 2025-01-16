#include <iostream>

using namespace std;

void rotar90Grados(matrix) {
    int n = matrix.size();
    // Realizar la rotación en capas, de fuera hacia adentro
    for (int layer = 0; layer < n / 2; ++layer) {
        int first = layer;
        int last = n - 1 - layer;
        for (int i = first; i < last; ++i) {
            int offset = i - first;
            // Guardar el valor de la esquina superior izquierda
            int top = matrix[first][i];
            // Mover el valor de la esquina inferior izquierda a la esquina superior izquierda
            matrix[first][i] = matrix[last - offset][first];
            // Mover el valor de la esquina inferior derecha a la esquina inferior izquierda
            matrix[last - offset][first] = matrix[last][last - offset];
            // Mover el valor de la esquina superior derecha a la esquina inferior derecha
            matrix[last][last - offset] = matrix[i][last];
            // Mover el valor de la esquina superior izquierda (guardado) a la esquina superior derecha
            matrix[i][last] = top;
        }
    }
}

// Función para imprimir la matriz
void printMatrix(const vector<vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

int main() {
    // Definir una matriz de ejemplo
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Matriz original:" << endl;
    printMatrix(matrix);

    // Rotar la matriz
    rotateMatrix(matrix);

    cout << "Matriz rotada 90 grados en sentido horario:" << endl;
    printMatrix(matrix);

    return 0;
}