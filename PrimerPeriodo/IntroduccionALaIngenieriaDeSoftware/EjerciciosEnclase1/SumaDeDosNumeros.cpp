#include <iostream>
#include <limits> // Me deja saber los limites de cada tipo de dato, int,float,double...
using namespace std;

int main() {
    char opcion;
    do {
        int num1, num2;
        
        // Solicitar al usuario que ingrese el primer número entero
        cout << "Ingrese el primer numero entero: ";
        while (!(cin >> num1)) {
            // Limpiar el flujo de entrada y mostrar un mensaje de error si el usuario ingresa un valor no entero
            cout << "Error. Por favor, ingrese un numero entero: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        // Solicitar al usuario que ingrese el segundo número entero
        cout << "Ingrese el segundo numero entero: ";
        while (!(cin >> num2)) {
            // Limpiar el flujo de entrada y mostrar un mensaje de error si el usuario ingresa un valor no entero
            cout << "Error. Por favor, ingrese un numero entero: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        // Calcular la suma de los dos números
        int suma = num1 + num2;
        
        // Mostrar el resultado de la suma
        cout << "La suma de los dos numeros es: " << suma << endl;
        
        // Preguntar al usuario si desea realizar otra operación
        cout << "¿Desea realizar otra operacion? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');
    
    return 0;
}
