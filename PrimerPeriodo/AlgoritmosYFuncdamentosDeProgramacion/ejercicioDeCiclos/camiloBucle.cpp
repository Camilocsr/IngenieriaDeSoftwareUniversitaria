#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

int main()
{
    int opcion;
    cout << "**********************EJERCICIOS CICLOS**********************" << endl;
    cout << "Digite el numero del ejercicio al cual desea ingresar del 1 al 12: " << endl;
    cin >> opcion;
    char opcio;

    do
    {
        switch (opcion)
        {
            { // inicio caso 1

            case 1:
                for (int i = 1; i <= 100; i++)
                {
                    cout << i << endl;
                }
                break;

            } // Fin caso 1
            { // inicio caso 2

            case 2:
                for (int i = 100; i >= 0; i--)
                {
                    cout << i << endl;
                }

                break;

            } // Fin caso 2
            { // inicio caso 3

            case 3:

                for (int i = 1; i <= 100; i++)
                {
                    if (i % 2 == 0)
                    {
                        cout << i << " ";
                    }
                }

                break;

            } // Fin caso 3
            { // inicio caso 4

            case 4:
                int suma = 0;
                for (int i = 1; i <= 100; i++)
                {
                    suma += i;
                }
                cout << "La suma de los primeros 100 numeros es: " << suma << endl;

                break;

            } // Fin caso 4
            { // inicio caso 5

            case 5:
                int conteoimp = 0;

                for (int i = 1; i <= 100; i++)
                {
                    if (i % 2 != 0)
                    {
                        cout << i << endl;
                        conteoimp++;
                    }
                }
                cout << "Cantidad de n�meros impares: " << conteoimp << endl;

                break;

            } // Fin caso 5
            { // inicio caso 6

            case 6:
                int n;

                cout << "Introduce un n�mero: ";
                cin >> n;

                for (int i = 1; i <= n; i++)
                {
                    cout << i << endl;
                }

                break;

            } // Fin caso 6
            { // inicio caso 7

            case 7:

                int numf;
                int cf = 0;
                string frase;
                cout << "�Cu�ntas frases deseas introducir? ";
                cin >> numf;

                for (int i = 0; i < numf; i++)
                {
                    cout << "Introduce la frase " << (i + 1) << ": ";
                    getline(cin, frase);
                    cf++;
                }
                cout << "Introduciste " << cf << " frases." << endl;

                break;

            } // Fin caso 7
            { // inicio caso 8

            case 8:
                char respuesta;

                do
                {
                    cout << "Introduce S o N: ";
                    cin >> respuesta;

                } while (respuesta != 'S' && respuesta != 'N');

                cout << "Has introducido: " << respuesta << endl;

                break;

            } // Fin caso 8
            { // inicio caso 9

            case 9:

                int numero;
                cout << "Introduce un numero: ";
                cin >> numero;

                if (numero > 0)
                {
                    cout << "El numero ingresado es positivo." << endl;
                }
                else if (numero < 0)
                {
                    cout << "El numero ingresado es negativo." << endl;
                }
                else
                {
                    cout << "El numero ingresado es cero." << endl;
                }

                break;

            } // Fin caso 9
            { // inicio caso 10

            case 10:

                int numlimite;
                int contm = 0;

                cout << "Introduce un numero: ";
                cin >> numlimite;

                if (numlimite < 1)
                {
                    cout << "El numero debe ser mayor que 1." << endl;
                }

                cout << "Multiplos de 3 hasta " << numlimite << ":" << endl;
                for (int i = 1; i <= numlimite; i++)
                {
                    if (i % 3 == 0)
                    {
                        cout << i << endl;
                        contm++;
                    }
                }
                cout << "Cantidad de multiplos de 3: " << contm << endl;
                break;

            } // Fin caso 10
            { // inicio caso 11

            case 11:

                int spa = 0;
                int simp = 0;
                for (int i = 1; i <= 100; i++)
                {
                    if (i % 2 == 0)
                    {
                        spa += i;
                    }
                    else
                    {
                        simp += i;
                    }
                    cout << i << endl;
                }
                cout << "Suma de numeros pares: " << spa << endl;
                cout << "Suma de numeros impares: " << simp << endl;

                break;

            } // Fin caso 11
            { // inicio caso 12

            case 12:
                int contm = 0;

                cout << "Multiplos de 2 o 3 entre 1 y 100:" << endl;
                for (int i = 1; i <= 100; i++)
                {
                    if (i % 2 == 0 || i % 3 == 0)
                    {
                        cout << i << endl;
                        contm++;
                    }
                }
                cout << "Cantidad de numeros multiplos de 2 o 3: " << contm << endl;

                break;

            } // Fin caso 12
        }
        cout << "desea continuar s" << endl;
        cin >> opcio;
    } while (opcio == 's');
}

