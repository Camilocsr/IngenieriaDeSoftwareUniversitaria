#include <iostream>
#include <string>

using namespace std;

int main() {
    string password;
    
    cout << "Ingrese la contraseña: ";
    cin >> password;
    
    if (password == "camilo") {
        cout << "Contraseña correcta. Acceso concedido." << endl;
        // Aquí puedes agregar el código para dirigir al usuario a otro lugar
    } else {
        cout << "Contraseña incorrecta. Acceso denegado." << endl;
        // Aquí puedes agregar el código para dirigir al usuario a otro lugar
    }
    
    return 0;
}