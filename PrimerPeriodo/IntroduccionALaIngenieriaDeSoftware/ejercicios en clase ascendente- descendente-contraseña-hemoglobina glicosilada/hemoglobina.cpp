#include <iostream>

using namespace std;

int main() {
    float edad, hemoglobina;

    cout << "Ingrese la edad de la persona: ";
    cin >> edad;

    cout << "Ingrese el nivel de hemoglobina glocosilada: ";
    cin >> hemoglobina;

    if (edad < 70) {
        if (hemoglobina < 5.7) {
            cout << "Normal";
        } else if (hemoglobina >= 5.7 && hemoglobina <= 6.4) {
            cout << "Prediabetes";
        } else {
            cout << "Diabetes";
        }
    } else if (edad >= 70 && edad <= 80) {
        if (hemoglobina >= 6.5 && hemoglobina <= 7.0) {
            cout << "Diabetes";
        } else {
            cout << "Fuera de rango";
        }
    } else {
        cout << "Fuera de rango";
    }

    return 0;
}