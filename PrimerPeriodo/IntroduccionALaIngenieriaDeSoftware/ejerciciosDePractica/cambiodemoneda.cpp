#include <iostream>
#include <limits>

using namespace std;

int main() {
    double tasa_cambio = 3919.87;
    double cantidad;
    char opcion;
    char continuar = 's'; // Variable para controlar si se continúa o no
    
    do {
        cout << "Ingrese la cantidad: ";
        cin >> cantidad;

        if (cin.fail()) { // Comprobar si la entrada no es válida
            cout << "Entrada no válida. Inténtelo de nuevo." << endl;
            cin.clear(); // Restaurar el estado del flujo
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiar el buffer
            continue; // Volver al principio del bucle
        }

        cout << "¿Quiere convertir de dólares a pesos colombianos (D) o de pesos colombianos a dólares (P)?: ";
        cin >> opcion;

        if (opcion == 'D' || opcion == 'd') {
            double conversion = cantidad * tasa_cambio;
            cout << cantidad << " dólares equivalen a " << conversion << " pesos colombianos." << endl;
        } else if (opcion == 'P' || opcion == 'p') {
            double conversion = cantidad / tasa_cambio;
            cout << cantidad << " pesos colombianos equivalen a " << conversion << " dólares." << endl;
        } else {
            cout << "Opción no válida. Por favor ingrese 'D' o 'P'." << endl;
            continue; // Volver al principio del bucle
        }

        cout << "¿Desea realizar otra conversión? (s/n): ";
        cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    return 0;
}