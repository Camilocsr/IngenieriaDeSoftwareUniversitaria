#include <iostream>
#include <string>

using namespace std;

int main() {
    int opcion;
    
    do {
        // Mostrar el menú
        cout << "\n*** Menú ***" << endl;
        cout << "1. Descuentos en fábrica de computadoras" << endl;
        cout << "2. Promoción en llantera" << endl;
        cout << "3. Préstamos en AFT-LTDA" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opción: ";
        cin >> opcion;
        
        // Limpiar el buffer de entrada
        cin.ignore();
        
        // Realizar la acción correspondiente a la opción seleccionada
        switch (opcion) {
            case 1: {
                int cantidad;
                double precioUnitario, totalCompra;
                
                // Solicitar la cantidad de computadoras a comprar
                cout << "\nIngrese la cantidad de computadoras a comprar: ";
                cin >> cantidad;
                
                // Calcular el precio unitario y el total de la compra
                if (cantidad < 5) {
                    precioUnitario = 11000 * 0.1;
                } else if (cantidad < 10) {
                    precioUnitario = 11000 * 0.2;
                } else {
                    precioUnitario = 11000 * 0.4;
                }
                
                totalCompra = cantidad * precioUnitario;
                
                // Mostrar resultados
                cout << "El precio por cada computadora es: $" << precioUnitario << endl;
                cout << "El total a pagar por la compra es: $" << totalCompra << endl;
                break;
            }
            case 2: {
                int cantidad;
                double precioUnitario, totalCompra;
                
                // Solicitar la cantidad de llantas a comprar
                cout << "\nIngrese la cantidad de llantas a comprar: ";
                cin >> cantidad;
                
                // Calcular el precio unitario y el total de la compra
                if (cantidad < 5) {
                    precioUnitario = 300;
                } else if (cantidad <= 10) {
                    precioUnitario = 200;
                } else {
                    precioUnitario = 100;
                }
                
                totalCompra = cantidad * precioUnitario;
                
                // Mostrar resultados
                cout << "El precio por cada llanta es: $" << precioUnitario << endl;
                cout << "El total a pagar por la compra es: $" << totalCompra << endl;
                break;
            }
            case 3: {
                string nombre, direccion, telefono, nombreAsesor;
                double montoPrestado, porcentaje, interes, totalPagar, totalPagar15Dias, disponible;
                int dias = 15;
                
                // Solicitar información del cliente
                cout << "\nIngrese el nombre del cliente: ";
                getline(cin, nombre);
                cout << "Ingrese la dirección del cliente: ";
                getline(cin, direccion);
                cout << "Ingrese el teléfono del cliente: ";
                getline(cin, telefono);
                cout << "Ingrese el nombre del asesor: ";
                getline(cin, nombreAsesor);
                
                // Solicitar el monto prestado
                cout << "Ingrese el monto a prestar (en pesos): ";
                cin >> montoPrestado;
                
                // Verificar que el monto prestado no exceda el límite mensual
                if (montoPrestado > 1500000) {
                    cout << "El monto excede el límite mensual de préstamos." << endl;
                    break;
                }
                
                // Determinar el porcentaje de interés según el monto prestado
                if (montoPrestado <= 120000) {
                    porcentaje = 0.03;
                } else if (montoPrestado > 200000 && montoPrestado < 350000) {
                    porcentaje = 0.12;
                } else if (montoPrestado >= 400000 && montoPrestado < 600000) {
                    porcentaje = 0.14;
                } else if (montoPrestado >= 600000 && montoPrestado <= 900000) {
                    porcentaje = 0.25;
                } else {
                    cout << "Monto no aplicable a ninguna tasa de interés conocida." << endl;
                    break;
                }
                
                // Calcular el interés
                interes = montoPrestado * porcentaje;
                
                // Calcular el total a pagar
                totalPagar = montoPrestado + interes;
                
                // Calcular el total a pagar por 15 días
                totalPagar15Dias = totalPagar * (dias / 100.0);
                
                // Calcular el dinero disponible para seguir prestando
                disponible = 1500000 - montoPrestado;
                
                // Mostrar los resultados
                cout << "\n*** Información del préstamo ***" << endl;
                cout << "Nombre del cliente: " << nombre << endl;
                cout << "Dirección: " << direccion << endl;
                cout << "Teléfono: " << telefono << endl;
                cout << "Asesor: " << nombreAsesor << endl;
                cout << "Monto prestado: $" << montoPrestado << endl;
                cout << "Interés a pagar: $" << interes << endl;
                cout << "Total a pagar: $" << totalPagar << endl;
                cout << "Total a pagar por 15 días: $" << totalPagar15Dias << endl;
                cout << "Dinero disponible para seguir prestando: $" << disponible << endl;
                break;
            }
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor seleccione una opción válida." << endl;
                break;
        }
    } while (opcion != 4);

    return 0;
}