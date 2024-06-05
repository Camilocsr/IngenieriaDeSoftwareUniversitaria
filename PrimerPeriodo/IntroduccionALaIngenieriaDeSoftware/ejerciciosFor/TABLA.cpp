#include <iostream>

using namespace std;

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    cout << "Ingresa un numero: ";
    cin >> numero;

    // Mostrar la tabla de multiplicar del número ingresado
    cout << "Tabla de multiplicar de " << numero << ":" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << numero << " x " << i << " = " << (numero * i) << endl;
    }

    return 0;
}

