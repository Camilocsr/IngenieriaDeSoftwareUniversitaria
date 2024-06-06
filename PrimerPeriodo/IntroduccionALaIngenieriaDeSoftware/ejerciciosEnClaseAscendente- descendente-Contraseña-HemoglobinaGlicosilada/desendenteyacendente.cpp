#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;
    
    // Pedir al usuario que ingrese los números
    cout << "Ingresa el primer número: ";
    cin >> num1;
    cout << "Ingresa el segundo número: ";
    cin >> num2;
    cout << "Ingresa el tercer número: ";
    cin >> num3;
    
    // Verificar si los números están en orden descendente
    if (num1 > num2 && num2 > num3) {
        cout << "Los números están en orden descendente." << endl;
    } else {
        cout << "Los números no están en orden descendente." << endl;
    }
    
    return 0;
}