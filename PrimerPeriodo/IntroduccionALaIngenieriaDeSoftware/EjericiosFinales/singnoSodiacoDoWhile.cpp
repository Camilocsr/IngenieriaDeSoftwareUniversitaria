#include <iostream>
using namespace std;

int main() {
    char respuesta;
    do {
        int mes, dia;
        
        cout << "Ingresa el numero de mes (1-12): ";
        cin >> mes;
        cout << "Ingresa el numero de dia: ";
        cin >> dia;
        
        const string signos[12] = {
            "Capricornio", "Acuario", "Piscis", "Aries",
            "Tauro", "Geminis", "Cancer", "Leo",
            "Virgo", "Libra", "Escorpio", "Sagitario"
        };
        const int limites[12][2] = {
            {20, 19}, {18, 19}, {19, 20}, {20, 20},
            {20, 20}, {21, 20}, {22, 22}, {22, 22},
            {22, 22}, {22, 21}, {21, 21}, {21, 19}
        };
        
        string signo = "Fecha no válida";
        for (int i = 0; i < 12; ++i) {
            if ((mes == i + 1 && dia >= limites[i][0]) || (mes == (i + 2) % 12 && dia <= limites[i][1])) {
                signo = signos[i];
                break;
            }
        }
        
        cout << "Tu signo zodiacal es: " << signo << endl;
        
        cout << "¿Deseas consultar otro signo zodiacal? (s/n): ";
        cin >> respuesta;
        
    } while(respuesta == 's' || respuesta == 'S');
    cout << "Gracias por usar el programa. ¡Hasta luego!" << endl;
    return 0;
}