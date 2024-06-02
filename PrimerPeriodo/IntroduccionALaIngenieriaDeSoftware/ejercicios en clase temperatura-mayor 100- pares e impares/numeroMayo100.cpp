#include <iostream>
using namespace std;
int main()
{
	char opcion;
	do{
		int numero;
	
		cout<<"digite el numero";
		cin>>numero;
	
		if(numero < 100){
			cout<<"el numero es menor a 100\n"<<endl;
		}
		else if(numero == 100){
			cout<<"el numero es igual a 100"<<endl;
		}
		else{
			cout<<"el numero es mayor 100"<<endl;
		}
		cout << "¿Desea realizar otra operacion? (s/n): ";
        cin >> opcion;
	} while (opcion == 's' || opcion == 'S');
}

