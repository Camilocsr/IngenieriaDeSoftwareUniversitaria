#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

double calcularPerimetro(double radio) {
    return 2 * PI * radio;
}

double calcularArea(double radio) {
    return PI * pow(radio, 2);
}

int main() {
    double radio;
    
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
    
    double perimetro = calcularPerimetro(radio);
    double area = calcularArea(radio);
    
    cout << "El perimetro del circulo es: " << perimetro << endl;
    cout << "El area del circulo es: " << area << endl;
    
    return 0;
}

