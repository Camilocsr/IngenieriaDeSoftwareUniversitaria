#include <iostream>
using namespace std;

int main() {
    char respuesta;
    
    do {
        float peso, altura;
        float IMC;

        cout << "Programa que indica el índice de masa corporal (IMC)" << endl;
        cout << "Ingresar el peso (kg): ";
        cin >> peso;
        cout << "Ingresar la altura (m): ";
        cin >> altura;

        IMC = peso / (altura * altura);

        if (IMC < 18.5) {
            cout << "IMC: " << IMC << " - Peso bajo" << endl;
        } else if (IMC >= 18.5 && IMC <= 24.9) {
            cout << "IMC: " << IMC << " - Peso normal" << endl;
        } else if (IMC >= 25 && IMC <= 29.9) {
            cout << "IMC: " << IMC << " - Sobrepeso" << endl;
        } else {
            cout << "IMC: " << IMC << " - Obesidad" << endl;
        }

        cout << "¿Desea calcular el IMC nuevamente? (s/n): ";
        cin >> respuesta;
    } while (respuesta == 's' || respuesta == 'S');

    return 0;
}