#include <iostream>
using namespace std;

int main() {
    int arreglo[2][2];
    int menor, mayor, suma = 0;
    int fila, columna;
    for (fila = 0; fila < 2; fila++)
        for (columna = 0; columna < 2; columna++) {
            cout << "Arreglo: Digite el valor de la Fila " << fila + 1 << " y la Columna " << columna + 1 << ": ";
            cin >> arreglo[fila][columna];
        }

    menor = arreglo[0][0];
    mayor = arreglo[0][0];

    for (fila = 0; fila < 2; fila++) {
        for (columna = 0; columna < 2; columna++) {
            if (arreglo[fila][columna] < menor) {
                menor = arreglo[fila][columna];
            }
            if (arreglo[fila][columna] > mayor) {
                mayor = arreglo[fila][columna];
            }
            suma += arreglo[fila][columna];
        }
    }

    double promedio = suma/ 4;

    cout << "El menor es: " << menor << "\nEl mayor es: " << mayor << "\nEl promedio es: " << promedio << endl;

    return 0;
}

