/**
 * The program simulates a pharmacy system where users can select a city and branch to make purchases
 * of various medications, check stock availability, and generate a receipt for their purchases.
 *
 * @return The main function is returning an integer value, specifically 0. This is a common practice
 * in C++ programs where a return value of 0 indicates successful execution of the program.
 */
#include <iostream>
#include <iomanip> // Para el formato de la tabla
#include <vector>
#include <locale> // Para la localización
using namespace std;

struct Compra {
  string medicamento;
  int cantidad;
  float precio;
};

int main() {
  setlocale(LC_ALL, "es_ES.UTF-8"); // Establecer la localización

  char opcionReinicio;
  do {
    string ciudades[3] = {"Bogotá", "Medellín", "Barranquilla"};
    string sucursales[2] = {"Sucursal Norte", "Sucursal Sur"};

    string farmaceuticos[3] = {"Juan", "María", "Pedro"};
    string empleados[2] = {"Carlos", "Ana"};

    // Medicamentos por ciudad
    string medicamentosBogota[20] = {
        "Paracetamol", "Ibuprofeno", "Amoxicilina", "Ranitidina",
        "Aspirina", "Metformina", "Loratadina", "Omeprazol",
        "Penicilina", "Dexametasona", "Enalapril", "Salbutamol",
        "Furosemida", "Cetirizina", "Hidroxicloroquina", "Claritromicina",
        "Amlodipino", "Clonazepam", "Levotiroxina", "Metronidazol"};

    string medicamentosMedellin[20] = {
        "Acetaminofén", "Naproxeno", "Azitromicina", "Cimetidina",
        "Diclofenaco", "Glibenclamida", "Desloratadina", "Pantoprazol",
        "Eritromicina", "Prednisona", "Losartán", "Salmeterol",
        "Hidroclorotiazida", "Fexofenadina", "Quinina", "Eritromicina",
        "Verapamilo", "Alprazolam", "Tiroxina", "Secnidazol"};

    string medicamentosBarranquilla[20] = {
        "Paracetamol", "Ibuprofeno", "Amoxicilina", "Ranitidina",
        "Aspirina", "Metformina", "Loratadina", "Omeprazol",
        "Penicilina", "Dexametasona", "Enalapril", "Salbutamol",
        "Furosemida", "Cetirizina", "Hidroxicloroquina", "Claritromicina",
        "Amlodipino", "Clonazepam", "Levotiroxina", "Metronidazol"};

    string presentacion[20] = {
        "Tabletas", "Tabletas", "Cápsulas", "Solución Oral",
        "Tabletas", "Tabletas", "Tabletas", "Cápsulas",
        "Inyectable", "Tabletas", "Tabletas", "Inhalador",
        "Tabletas", "Tabletas", "Tabletas", "Tabletas",
        "Tabletas", "Tabletas", "Tabletas", "Tabletas"};

    string laboratorio[20] = {
        "Laboratorio A", "Laboratorio B", "Laboratorio C", "Laboratorio D",
        "Laboratorio E", "Laboratorio F", "Laboratorio G", "Laboratorio H",
        "Laboratorio I", "Laboratorio J", "Laboratorio K", "Laboratorio L",
        "Laboratorio M", "Laboratorio N", "Laboratorio O", "Laboratorio P",
        "Laboratorio Q", "Laboratorio R", "Laboratorio S", "Laboratorio T"};

    string accion_terapeutica[20] = {
        "Analgésico", "Analgésico", "Antibiótico", "Antiacido",
        "Analgésico", "Antidiabético", "Antihistamínico", "Antiácido",
        "Antibiótico", "Antiinflamatorio", "Antihipertensivo", "Broncodilatador",
        "Diurético", "Antihistamínico", "Antimalárico", "Antibiótico",
        "Antihipertensivo", "Ansiolítico", "Hormona tiroidea", "Antibiótico"};

    float precios[20] = {
        1000, 1500, 1200, 800, 500, 1300, 600, 1400,
        100, 900, 700, 1100, 1600, 400, 700, 1300,
        600, 1000, 900, 500};

    int stock[20] = {50, 45, 30, 20, 60, 80, 15, 40, 100, 32, 53, 60, 70, 10, 44, 15, 25, 50, 30, 20};

    // Bienvenido
    cout << "¡Hola! Bienvenido a la farmacia." << endl;

    // Selección de ciudad
    cout << "¿En qué ciudad quiere comprar? (0: Bogotá, 1: Medellín, 2: Barranquilla): ";
    int ciudad;
    cin >> ciudad;

    // Selección de sucursal
    cout << "¿En qué sucursal quiere comprar? (0: Norte, 1: Sur): ";
    int sucursal;
    cin >> sucursal;

    // Variables para el nombre y cédula del usuario
    string nombreUsuario;
    string cedulaUsuario;

    // Nombre y cédula del usuario
    cout << "Ingrese su nombre: ";
    cin >> nombreUsuario;
    cout << "Ingrese su cédula: ";
    cin >> cedulaUsuario;

    // Vector para almacenar las compras
    vector<Compra> compras;
    bool continuar = true;

    // Determinar la lista de medicamentos según la ciudad
    string *medicamentos;
    switch (ciudad) {
    case 0:
      medicamentos = medicamentosBogota;
      break;
    case 1:
      medicamentos = medicamentosMedellin;
      break;
    case 2:
      medicamentos = medicamentosBarranquilla;
      break;
    default:
      cout << "Ciudad inválida. Terminando el programa." << endl;
      return 1;
    }

    while (continuar) {
      // Mostrar opciones al usuario
      cout << "¿Qué desea hacer?" << endl;
      cout << "1. Comprar medicamento" << endl;
      cout << "2. Ver stock" << endl;
      if (!compras.empty()) {
        cout << "3. Imprimir recibo" << endl;
      }
      cout << "4. Terminar" << endl;
      cout << "Ingrese el número de la opción deseada: ";
      int opcion;
      cin >> opcion;

      switch (opcion) {
      case 1: {
        // Comprar medicamento
        int comprar;
        cout << "¿Cuál medicamento quiere comprar? Ingrese el número (1-20): ";
        cin >> comprar;
        comprar--;

        if (comprar >= 0 && comprar < 20) {
          cout << "¿Cuántas unidades de " << medicamentos[comprar] << " desea comprar? ";
          int cantidad;
          cin >> cantidad;

          if (cantidad > 0 && cantidad <= stock[comprar]) {
            stock[comprar] -= cantidad;
            float precioTotal = precios[comprar] * cantidad;

            // Almacenar la compra en el vector
            compras.push_back({medicamentos[comprar], cantidad, precioTotal});

            cout << "Compra realizada exitosamente." << endl;
          } else {
            cout << "Lo sentimos, no hay suficiente stock de " << medicamentos[comprar] << " o la cantidad ingresada es inválida." << endl;
          }
        } else {
          cout << "Número de medicamento inválido." << endl;
        }
        break;
      }
      case 2: {
        // Mostrar stock
        cout << "Stock de medicamentos:" << endl;
        cout << setw(4) << "No." << setw(20) << "Medicamento" << setw(15) << "Presentación" << setw(15) << "Laboratorio" << setw(20) << "Acción Terapéutica" << setw(10) << "Stock" << setw(10) << "Precio" << endl;
        for (int i = 0; i < 20; i++) {
          cout << setw(4) << i + 1 << setw(20) << medicamentos[i] << setw(15) << presentacion[i] << setw(15) << laboratorio[i] << setw(20) << accion_terapeutica[i] << setw(10) << stock[i] << setw(10) << "$" << precios[i] << endl;
        }
        break;
      }
      case 3: {
        if (!compras.empty()) {
          // Imprimir recibo
          float totalPagar = 0;
          cout << "-------- Recibo de Compra --------" << endl;
          cout << "Nombre del usuario: " << nombreUsuario << endl;
          cout << "Cédula del usuario: " << cedulaUsuario << endl;
          cout << "Nombre del farmacéutico: " << farmaceuticos[ciudad] << endl;
          for (const auto &compra : compras) {
            cout << "Medicamento comprado: " << compra.medicamento << endl;
            cout << "Cantidad comprada: " << compra.cantidad << endl;
            cout << "Precio total: $" << compra.precio << endl;
            totalPagar += compra.precio;
          }
          cout << "----------------------------------" << endl;
          cout << "Total a pagar: $" << totalPagar << endl;
        } else {
          cout << "No hay ninguna compra reciente para imprimir un recibo." << endl;
        }
        break;
      }
      case 4: {
        // Terminar el programa
        continuar = false;
        break;
      }
      default: {
        cout << "Opción inválida. Por favor, intente de nuevo." << endl;
        break;
      }
      }
    }
    cout << "¿Quieres reiniciar el programa? S o s para sí\n" << endl;
    cin >> opcionReinicio;
  } while (opcionReinicio == 's' || opcionReinicio == 'S');

  return 0;
}