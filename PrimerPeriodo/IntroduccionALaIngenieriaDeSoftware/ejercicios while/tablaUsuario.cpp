#include <iostream>
using namespace std;

int main() {
    int repetir = 0;
    int tabla = 0;
    int resultado= 0;
    
    cout<<"ingrese el numero a multiplicar"<<endl;
    cin>>tabla;
    while (repetir <= 9) {
    	repetir++;
        resultado = tabla * repetir;
        cout <<tabla<<"* "<<repetir<<" es: " << resultado << endl;
    }

    return 0;
}
