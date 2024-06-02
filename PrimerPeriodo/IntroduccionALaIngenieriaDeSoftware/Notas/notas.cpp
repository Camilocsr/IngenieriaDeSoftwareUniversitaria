#include <iostream>
using namespace std;

int main() {
    float nota;
    cout << "Ingrese la nota (entre 0 y 5 con decimales): ";
    cin >> nota;

    if (nota >= 0 && nota < 1) {
        cout << "Su nota es insuficiente" << endl;
    } else if (nota >= 1 && nota < 3) {
        cout << "Su nota es deficiente" << endl;
    } else if (nota >= 3 && nota < 4) {
        cout << "Su nota es bueno" << endl;
    } else if (nota >= 4 && nota < 4.5) {
        cout << "Su nota es sobresaliente" << endl;
    } else if (nota >= 4.5 && nota <= 5) {
        cout << "Su nota es excelente" << endl;
    } else {
        cout << "La nota ingresada no está dentro del rango válido." << endl;
    }

    return 0;
}