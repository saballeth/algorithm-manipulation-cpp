#include <iostream>

using namespace std;

void intercambiar(int arrN[], int n, int pos1, int pos2) {
  // Validar las posiciones
  if (pos1 < 0 || pos1 >= n || pos2 < 0 || pos2 >= n) {
    cout << "Posición inválida" << endl;
    return ;
  }

  // Intercambiar los elementos
  int aux = arrN[pos1];
  arrN[pos1] = arrN[pos2];
  arrN[pos2] = aux;

  // Mostrar el arreglo modificado
  for (int i = 0; i < n; i++) {
    cout << "{ Posición: " << i << "}" << " Valor: {" << arrN[i] << " }" << endl;
  }
}

int main() {
  int arrN[] = {1, 2, 3, 4, 5};
  int n = sizeof(arrN) / sizeof(arrN[0]); // Obtener la longitud del arreglo
  int pos1 = 0; // Posición 1 válida
  int pos2 = n - 1; // Posición 2 válida

  intercambiar(arrN, n, pos1, pos2);

  return 0;
}
