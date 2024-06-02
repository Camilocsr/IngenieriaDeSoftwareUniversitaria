#include <iostream>
using namespace std;

int main() {
    char respuesta;
    do {
        float celsius, fahrenheit;
        cout << "Ingresa la temperatura en grados Celsius: ";
        cin >> celsius;
        fahrenheit = (celsius * 9.0 / 5.0) + 32;
        cout << celsius << " grados Celsius equivale a " << fahrenheit << " grados Fahrenheit." << endl;
        cout << "¿Deseas convertir otro valor? (s/n): ";
        cin >> respuesta;
    } while(respuesta == 's' || respuesta == 'S');
    cout << "Gracias por usar el convertidor de temperatura. ¡Hasta luego!" << endl;
    return 0;
}
