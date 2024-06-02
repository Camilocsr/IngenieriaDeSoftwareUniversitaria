#include <iostream>
using namespace std;

int main() {
    int num1, num2;

    cout << "Ingresa el primer número natural (distinto de cero): ";
    cin >> num1;
    cout << "Ingresa el segundo número natural (distinto de cero): ";
    cin >> num2;
    
    while (num1 <= 0 || num2 <= 0) {
        cout << "Ambos números deben ser naturales y distintos de cero. Inténtalo de nuevo." << endl;
        cout << "Ingresa el primer número natural (distinto de cero): ";
        cin >> num1;
        cout << "Ingresa el segundo número natural (distinto de cero): ";
        cin >> num2;
    }

    int resto;
    int a = num1;
    int b = num2;
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    int mcd = a;
    cout << "El máximo común divisor de " << num1 << " y " << num2 << " es: " << mcd << endl;
    return 0;
}
