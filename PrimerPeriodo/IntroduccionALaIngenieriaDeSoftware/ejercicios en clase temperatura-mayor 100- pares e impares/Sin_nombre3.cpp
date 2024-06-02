#include <iostream>
using namespace std;
int main()
{
	int num1,num2,res1,res2;
	
	cout<<"digite el primer numero"<<endl;
	cin>>num1;
	cout<<"digite el segundo numero"<<endl;
	cin>>num2;
	
	res1 = num1%2;
	res2 = num2%2;
	
	if(res1 == 0&&res2==0){
		cout<<"El numeros son pares"<<endl;
	}
	else if(res1 != 0){
		cout<<"El numero "<<num1<<" es impar"<<endl;
	}
	else if(res2 != 0){
		cout<<"El numero "<<num2<<" es impar"<<endl;
	}
	
}

