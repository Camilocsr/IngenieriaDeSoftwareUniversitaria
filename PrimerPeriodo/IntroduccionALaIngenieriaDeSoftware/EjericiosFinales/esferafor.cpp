#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char respuesta = 's';
    
    for (; respuesta == 's' || respuesta == 'S';) {
        float radio, volumen;

        
        cout << "Ingresa el radio de la esfera: ";
        cin >> radio;

        
        volumen = (4.0 / 3.0) * M_PI * pow(radio, 3);

        
        cout << "El volumen de la esfera con radio " << radio << " es: " << volumen << endl;

        
        cout << "¿Deseas calcular el volumen de otra esfera? (s/n): ";
        cin >> respuesta;
    }

    cout << "Gracias por usar el programa. ¡Hasta luego!" << endl;

    return 0;
}
