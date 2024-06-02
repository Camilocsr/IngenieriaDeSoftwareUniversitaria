#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char opcion;
    do {
        
        int numero;
        int cuadrado, cubo;
        
        
        cout << "Ingrese un numero: ";
        cin >> numero;
        
        
        cuadrado = pow(numero, 2);
        cubo = pow(numero, 3);
        
        
        cout << "El cuadrado de " << numero << " es: " << cuadrado << endl;
        cout << "El cubo de " << numero << " es: " << cubo << endl;
        
        cout << "¿Desea realizar otra operacion? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');
    
    return 0;
}

