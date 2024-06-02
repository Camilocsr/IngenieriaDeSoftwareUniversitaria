#include <iostream>
using namespace std;

int main() {
    char respuesta;
    const float tasa_cambio = 3957.76;

    do {
        float valor_pesos = 0;
        float valor_dolares = 0;

        cout << "Ingresa el valor en pesos colombianos que deseas convertir a dólares: ";
        cin >> valor_pesos;

        while (valor_pesos <= 0) {
            cout << "El valor en pesos colombianos debe ser un número positivo. Inténtalo de nuevo." << endl;
            cout << "Ingresa el valor en pesos colombianos que deseas convertir a dólares: ";
            cin >> valor_pesos;
        }

        valor_dolares = valor_pesos / tasa_cambio;

        cout << "El valor en dólares es: $" << valor_dolares << endl;

        cout << "¿Deseas realizar otra conversión? (s/n): ";
        cin >> respuesta;
    } while (respuesta == 's' || respuesta == 'S');

    cout << "Gracias por usar el convertidor de moneda. ¡Hasta luego!" << endl;

    return 0;
}