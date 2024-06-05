#include <iostream>
using namespace std;

int main() {
    int repetir = 0;
    int tabla = 0;
    
    
    while (repetir <= 9) {
    	repetir++;
        tabla = 5 * repetir;
        cout << "5 * "<<repetir<<" es: " << tabla << endl;
    }

    return 0;
}
