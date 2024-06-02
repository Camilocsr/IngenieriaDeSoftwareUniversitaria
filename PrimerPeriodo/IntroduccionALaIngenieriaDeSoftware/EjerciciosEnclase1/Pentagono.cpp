#include <iostream>
#include <cmath>
using namespace std;

double calcularArea(double lado, double apotema) {
    return (5 * lado * apotema) / 2;
}

double calcularPerimetro(double lado) {
    return 5 * lado;
}

int main() {
    char opcion;
    do {
        double lado, apotema;
        
        cout << "Ingrese la longitud del lado del pentagono: ";
        cin >> lado;
        
        cout << "Ingrese la longitud del apotema del pentagono: "; //La apotema es la distancia desde el centro de la figura geometrica reglar hasta el punto medio de sus lados
        cin >> apotema;
        
        double area = calcularArea(lado, apotema);
        double perimetro = calcularPerimetro(lado);
        
        cout << "El area del pentagono es: " << area << endl;
        cout << "El perimetro del pentagono es: " << perimetro << endl;
        
        cout << "¿Desea realizar otra operacion? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');
    
    return 0;
}
