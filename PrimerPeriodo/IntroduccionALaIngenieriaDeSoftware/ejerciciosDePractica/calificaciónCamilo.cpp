#include <iostream>
#include <limits>

using namespace std;

int main() {
    char opcion;
    do {
        double nota1, nota2, nota3;
        
        // Solicitar y validar la primera calificación
        cout << "Por favor, ingrese la primera calificación: ";
        while (!(cin >> nota1)) {
            cout << "Entrada inválida. Por favor, ingrese un número: ";
            cin.clear(); // Limpiar el estado de error
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Descartar la entrada inválida
        }
        
        // Solicitar y validar la segunda calificación
        cout << "Por favor, ingrese la segunda calificación: ";
        while (!(cin >> nota2)) {
            cout << "Entrada inválida. Por favor, ingrese un número: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        // Solicitar y validar la tercera calificación
        cout << "Por favor, ingrese la tercera calificación: ";
        while (!(cin >> nota3)) {
            cout << "Entrada inválida. Por favor, ingrese un número: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        double nota_final = (nota1 * 0.3) + (nota2 * 0.3) + (nota3 * 0.4);
        
        cout << "La nota final es: " << nota_final << endl;
        
        cout << "¿Desea realizar otra operación? (S/N): ";
        cin >> opcion;
        
        // Limpiar el buffer de entrada para evitar problemas en la próxima iteración
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (opcion == 's' || opcion == 'S');
    
    cout << "¡Hasta luego!" << endl;
    
    return 0;
}