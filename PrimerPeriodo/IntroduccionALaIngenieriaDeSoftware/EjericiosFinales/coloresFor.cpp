#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num_visitantes = 10;
    int contador_rojo = 0, contador_verde = 0, contador_azul = 0;

    
    for (int i = 0; i < num_visitantes; ++i) {
        char color_favorito;
        cout << "¿Cuál es tu color favorito? (R para rojo, V para verde, A para azul): ";
        cin >> color_favorito;

        switch (color_favorito) {
            case 'R':
            case 'r':
                contador_rojo++;
                break;
            case 'V':
            case 'v':
                contador_verde++;
                break;
            case 'A':
            case 'a':
                contador_azul++;
                break;
            default:
                cout << "Opción no válida. Se ignorará esta respuesta." << endl;
                break;
        }
    }

    
    float porcentaje_rojo = (static_cast<float>(contador_rojo) / num_visitantes) * 100;
    float porcentaje_verde = (static_cast<float>(contador_verde) / num_visitantes) * 100;
    float porcentaje_azul = (static_cast<float>(contador_azul) / num_visitantes) * 100;

   
    cout << fixed << setprecision(2);
    cout << "Porcentaje de gusto por el color rojo: " << porcentaje_rojo << "%" << endl;
    cout << "Porcentaje de gusto por el color verde: " << porcentaje_verde << "%" << endl;
    cout << "Porcentaje de gusto por el color azul: " << porcentaje_azul << "%" << endl;

    return 0;
}