#include <iostream>
using namespace std;
int main()
{
	char opcion;
	do{
		int temperatura;
	
		cout<<"ingrese la temperatura"<<endl;
		cin>>temperatura;
	
		if(temperatura < 15){
			cout<<"la temperatura esta fria"<<endl;
		}
		else if(temperatura >= 15 && temperatura <25){
			cout<<"el clima esta templado"<<endl;
		}
		else {
			cout<<"el clima esta caliente.. como el diablo"<<endl;
		}
		
		cout << "¿Desea realizar otra operacion? (s/n): ";
        cin >> opcion;
	} while (opcion == 's' || opcion == 'S');
}

