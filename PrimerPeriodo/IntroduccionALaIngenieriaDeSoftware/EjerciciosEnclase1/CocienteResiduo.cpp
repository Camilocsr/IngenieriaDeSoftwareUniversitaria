#include <iostream>
using namespace std;

void calcularCocienteYResiduo(int dividendo, int divisor, int &cociente, int &residuo) {
    cociente = dividendo / divisor;
    residuo = dividendo % divisor;
}

int main() {
    char opcion;
    do {
        int dividendo, divisor;
        cout << "Ingrese el dividendo: ";
        cin >> dividendo;
        
        cout << "Ingrese el divisor: ";
        cin >> divisor;
        
        int cociente, residuo;
        calcularCocienteYResiduo(dividendo, divisor, cociente, residuo);
        
        cout << "El cociente es: " << cociente << endl;
        cout << "El residuo es: " << residuo << endl;
        
        cout << "¿Desea realizar otra operacion? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');
    
    return 0;
}
