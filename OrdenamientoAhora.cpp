#include <iostream>
using namespace std;

int buscarMenor(int arreglo[], int inicio, int cantidadDeElementos) {
    int menor = arreglo[inicio];
    int indiceMenor = inicio;
    
    for (int i = inicio + 1; i < cantidadDeElementos; i++) {
        if (arreglo[i] < menor) {
            menor = arreglo[i];
            indiceMenor = i;
        }
    }
    
    return indiceMenor;
}

void intercambiar(int arreglo[], int indice1, int indice2) {
    int temp = arreglo[indice1];
    arreglo[indice1] = arreglo[indice2];
    arreglo[indice2] = temp;
}

void ordenar(int arreglo[], int cantidadDeElementos) {
    for (int i = 0; i < cantidadDeElementos - 1; i++) {
        // Buscar el menor elemento a partir de la posición actual
        int indiceMenor = buscarMenor(arreglo, i, cantidadDeElementos);
        
        // Intercambiar el elemento actual con el menor encontrado
        intercambiar(arreglo, i, indiceMenor);
    }
}

int main() {
    int arreglo[] = {5, 3, 8, 50, 9, 2};
    int cantidadDeElementos = sizeof(arreglo) / sizeof(arreglo[0]);

    printf("Arreglo original:\n");
    for (int i = 0; i < cantidadDeElementos; i++) {
        cout << " " << arreglo[i];
    }
    printf("\n");

    ordenar(arreglo, cantidadDeElementos);

    cout << "Arreglo ordenado:\n";
    for (int i = 0; i < cantidadDeElementos; i++) {
        cout << " " << arreglo[i];
    }
    printf("\n");

    return 0;
}
 