#include <cmath>
#include <algorithm>
#include <ctime>
#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

string textoVerde(const string& texto) {
    return "\x1b[32m" + texto + "\x1b[0m";
}

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}

std::string convertirARomano(int numero)
{
    switch (numero)
    {
    case 1:
        return "I";
    case 2:
        return "II";
    case 3:
        return "III";
    case 4:
        return "IV";
    case 5:
        return "V";
    case 6:
        return "VI";
    case 7:
        return "VII";
    case 8:
        return "VIII";
    case 9:
        return "IX";
    case 10:
        return "X";
    default:
        return "N�mero no v�lido";
    }
}

void convertirTiempo(int minutos)
{
    int horas = minutos / 60;
    int minutosRestantes = minutos % 60;
    int segundos = minutosRestantes * 60;

    std::cout << "El tiempo " << minutos << " minutos equivale a "
              << horas << " horas, " << minutosRestantes << " minutos y "
              << segundos << " segundos." << std::endl;
}

double calcularVolumenEsfera(double radio)
{
    return (4.0 / 3.0) * 3.14159 * pow(radio, 3);
}

double rangoFuncion(double x)
{
    return (5.0 / 3) * x + (3.0 / 2) * x + 8;
}

struct Persona
{
    char sexo;
    int puntos;
};

double pesosToDollars(double pesos)
{
    const double exchangeRate = 0.050; // Tasa de cambio actual de pesos a d�lares
    return pesos * exchangeRate;
}

// Función para leer los datos de cada persona
void leerDatos(vector<Persona> &personas, int N)
{
    for (int i = 0; i < N; ++i)
    {
        Persona p;
        cout << "Ingrese el sexo (M/F) de la persona " << i + 1 << ": ";
        cin >> p.sexo;
        cout << "Ingrese los puntos obtenidos por la persona " << i + 1 << ": ";
        cin >> p.puntos;
        personas.push_back(p);
    }
}

float convertirDolaresAPesos(float dolares)
{
    const float tipoCambio = 3875; // Tipo de cambio actual, 1 d�lar = 20 pesos
    return dolares * tipoCambio;
}

// Función para calcular el promedio de puntos de cada sexo y determinar cuál tuvo mejor desempeño
char mejorDesempeno(const vector<Persona> &personas)
{
    double promedioHombres = 0, promedioMujeres = 0;
    int totalHombres = 0, totalMujeres = 0;

    // Calcular los promedios separados por sexo
    for (const auto &p : personas)
    {
        if (p.sexo == 'M')
        {
            promedioHombres += p.puntos;
            ++totalHombres;
        }
        else if (p.sexo == 'F')
        {
            promedioMujeres += p.puntos;
            ++totalMujeres;
        }
    }

    // Verificar que haya al menos una persona de cada sexo
    if (totalHombres == 0 || totalMujeres == 0)
    {
        cout << "No hay suficientes datos para comparar." << endl;
        return '-';
    }

    // Calcular promedio y determinar el sexo con mejor desempeño
    promedioHombres /= totalHombres;
    promedioMujeres /= totalMujeres;

    if (promedioHombres > promedioMujeres)
    {
        return 'M';
    }
    else if (promedioMujeres > promedioHombres)
    {
        return 'F';
    }
    else
    {
        return 'I'; // Indefinido, ambos sexos tienen el mismo promedio
    }
}

int mcd(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

double eurosToDollars(double euros)
{
    const double exchangeRate = 1.18; // Tipo de cambio actual de euros a d�lares
    return euros * exchangeRate;
}

int main()
{
    char opcionhacerEjercicios50;
    int opcion1A50 = 0;
    char seguir;
    do
    {
        cout << "1. Verificar si un número es mayor, igual o menor a cero." << endl;
        cout << "2. Determinar si un número es par o impar." << endl;
        cout << "3. Mostrar los números del 100 al -2." << endl;
        cout << "4. Mostrar los números pares del 1 al 100." << endl;
        cout << "5. Calcular el promedio de una serie de notas." << endl;
        cout << "6. Identificar los múltiplos de 2 y 3 del 1 al 100." << endl;
        cout << "7. Comparar dos números y determinar cuál es mayor." << endl;
        cout << "8. Comparar dos números y determinar cuál es menor." << endl;
        cout << "9. Calcular la suma de los números del 20 al 50." << endl;
        cout << "10. Calcular la suma de 15 números ingresados por el usuario." << endl;
        cout << "11. Determinar si una persona es mayor de edad a partir de su fecha de nacimiento." << endl;
        cout << "12. Ordenar tres números de mayor a menor." << endl;
        cout << "13. Ordenar tres números de menor a mayor." << endl;
        cout << "14. Calcular el área y volumen de un cilindro." << endl;
        cout << "15. Convertir la velocidad de Km/h a m/s." << endl;
        cout << "16. Contar la cantidad de números impares del 1 al 100." << endl;
        cout << "17. Sumar los números impares del 1 al 100." << endl;
        cout << "18. Sumar los números pares del 1 al 100." << endl;
        cout << "19. Encontrar el número mayor y menor entre cinco números." << endl;
        cout << "20. Calcular el factorial de un número." << endl;
        cout << "21. Convertir un número del 1 al 10 a su representación en números romanos." << endl;
        cout << "22. Obtener la última cifra de un número." << endl;
        cout << "23. Convertir medidas de centímetros a pulgadas." << endl;
        cout << "24. Convertir tiempo en minutos a horas, minutos y segundos." << endl;
        cout << "25. Mostrar el nombre del mes correspondiente a un número del 1 al 12." << endl;
        cout << "26. Determinar el signo zodiacal de una persona según su fecha de nacimiento." << endl;
        cout << "27. Imprimir los números del 1 al n." << endl;
        cout << "28. Calcular la suma de los números del 1 al n." << endl;
        cout << "29. Calcular los residuos de un número n cuando se divide entre los números del 1 al 10." << endl;
        cout << "30. Calcular el área y perímetro de un círculo." << endl;
        cout << "31. Calcular el volumen de una esfera." << endl;
        cout << "32. Calcular la hipotenusa de un triángulo rectángulo." << endl;
        cout << "33. Convertir temperatura de Fahrenheit a Celsius." << endl;
        cout << "34. Convertir temperatura de Celsius a Fahrenheit." << endl;
        cout << "35. Calcular el promedio ponderado de tres notas." << endl;
        cout << "36. Calcular la nota final de un estudiante con diferentes ponderaciones." << endl;
        cout << "37. Mostrar el rango de una función para valores de -5 a 20." << endl;
        cout << "38. Calcular el promedio de edades ingresadas por el usuario." << endl;
        cout << "39. Encontrar números positivos entre 10 ingresados." << endl;
        cout << "40. Contar la cantidad de visitantes que mencionaron colores." << endl;
        cout << "41. Determinar cuál sexo tuvo mejor desempeño en promedio." << endl;
        cout << "42. Registrar vehículos en un peaje y calcular promedio de pasajeros." << endl;
        cout << "43. Calcular el máximo común divisor de dos números naturales." << endl;
        cout << "44. Convertir cantidad en pesos colombianos a dólares." << endl;
        cout << "45. Convertir cantidad en dólares a pesos colombianos." << endl;
        cout << "46. Convertir cantidad en euros a dólares." << endl;
        cout << "47. Convertir cantidad en dólares a euros." << endl;
        cout << "48. Consultar implementos de distintos deportes." << endl;
        cout << "49. Convertir cantidad en libras a kilogramos." << endl;
        cout << "50. Calcular el sueldo mensual de un empleado basado en pago por hora y horas trabajadas." << endl;
        cout<<textoVerde("Eliga un numero del 1 al 50: ")<<endl;
        cin >> opcion1A50;

        switch (opcion1A50)
        {
        case 1:
            do
            {
                int numero;

                cout << "Ingrese un número: ";
                cin >> numero;

                if (numero > 0)
                {
                    cout << "El número es mayor que cero" << endl;
                }
                else if (numero == 0)
                {
                    cout << "El número es igual a cero" << endl;
                }
                else
                {
                    cout << "El número es menor que cero" << endl;
                }
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');
            break;

        case 2:
            do
            {
                int numero;

                // Pedir al usuario que ingrese un número
                cout << "Ingresa un número: ";
                cin >> numero;

                // Verificar si el número es par o impar
                if (numero % 2 == 0)
                {
                    cout << "El número es par." << endl;
                }
                else
                {
                    cout << "El número es impar." << endl;
                }
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');
            break;

        case 3:
            do
            {
                for (int i = 100; i >= -2; i--)
                {
                    cout << i << " ";
                }
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');
            break;

        case 4:
            do
            {
                for (int i = 1; i <= 100; i++)
                {
                    if (i % 2 == 0)
                    {
                        cout << i << " ";
                    }
                }
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');
            break;

        case 5:
            do
            {
                int totalNotas = 0;
                double notaActual = 0;
                double sumaNotas = 0;

                cout << "Ingrese las notas una por una. Cuando haya ingresado todas las notas, ingrese -1 para finalizar." << endl;

                while (notaActual != -1)
                {
                    cout << "Ingrese una nota: ";
                    cin >> notaActual;

                    if (notaActual != -1)
                    {
                        sumaNotas += notaActual;
                        totalNotas++;
                    }
                }

                if (totalNotas > 0)
                {
                    double promedio = sumaNotas / totalNotas;
                    cout << "El promedio de las " << totalNotas << " notas ingresadas es: " << promedio << endl;
                }
                else
                {
                    cout << "No se ingresaron notas para calcular el promedio." << endl;
                }
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');
            break;

        case 6:
            do
            {
                int contador_multiplos_2 = 0;
                int contador_multiplos_3 = 0;

                for (int i = 1; i <= 100; i++)
                {
                    if (i % 2 == 0)
                    {
                        std::cout << i << " es m�ltiplo de 2" << std::endl;
                        contador_multiplos_2++;
                    }
                    if (i % 3 == 0)
                    {
                        std::cout << i << " es m�ltiplo de 3" << std::endl;
                        contador_multiplos_3++;
                    }
                }

                std::cout << "Cantidad de m�ltiplos de 2: " << contador_multiplos_2 << std::endl;
                std::cout << "Cantidad de m�ltiplos de 3: " << contador_multiplos_3 << std::endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 7:
            do
            {
                int num1, num2;

                cout << "Ingrese el primer n�mero: ";
                cin >> num1;

                cout << "Ingrese el segundo n�mero: ";
                cin >> num2;

                if (num1 > num2)
                {
                    cout << "El primer n�mero es mayor que el segundo." << endl;
                }
                else if (num2 > num1)
                {
                    cout << "El segundo n�mero es mayor que el primero." << endl;
                }
                else
                {
                    cout << "Ambos n�meros son iguales." << endl;
                }
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 8:
            do
            {
                int numero1, numero2;

                std::cout << "Ingresa el primer n�mero: ";
                std::cin >> numero1;

                std::cout << "Ingresa el segundo n�mero: ";
                std::cin >> numero2;

                if (numero1 < numero2)
                {
                    std::cout << "El primer n�mero es menor que el segundo." << std::endl;
                }
                else if (numero2 < numero1)
                {
                    std::cout << "El segundo n�mero es menor que el primero." << std::endl;
                }
                else
                {
                    std::cout << "Ambos n�meros son iguales." << std::endl;
                }
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 9:
            do
            {
                int suma = 0;

                for (int i = 20; i <= 50; i++)
                {
                    suma += i;
                }

                std::cout << "La suma de los n�meros del 20 al 50 es: " << suma << std::endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 10:
            do
            {
                const int NUM_NUMEROS = 15;
                int numeros[NUM_NUMEROS];
                int suma = 0;

                std::cout << "Ingresa 15 n�meros cualesquiera:\n";

                for (int i = 0; i < NUM_NUMEROS; i++)
                {
                    std::cout << "N�mero " << i + 1 << ": ";
                    std::cin >> numeros[i];
                    suma += numeros[i];
                }

                std::cout << "La suma de los 15 n�meros es: " << suma << std::endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 11:
            do
            {
                // Pedir al usuario que ingrese su fecha de nacimiento en formato dd/mm/aaaa
                int dia, mes, anio;
                cout << "Ingrese su fecha de nacimiento (dd/mm/aaaa): ";
                char ignore;
                cin >> dia >> ignore >> mes >> ignore >> anio;

                // Obtener la fecha actual
                time_t now = time(0);
                tm *localtm = localtime(&now);
                int anio_actual = 1900 + localtm->tm_year;

                // Calcular la edad de la persona
                int edad = anio_actual - anio;

                // Verificar si la persona es mayor de edad
                if (edad >= 18)
                {
                    cout << "La persona es mayor de edad." << endl;
                }
                else
                {
                    cout << "La persona es menor de edad." << endl;
                }
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 12:
            do
            {
                int num1, num2, num3;

                // Leer los 3 n�meros ingresados por el usuario
                std::cout << "Ingrese el primer n�mero: ";
                std::cin >> num1;

                std::cout << "Ingrese el segundo n�mero: ";
                std::cin >> num2;

                std::cout << "Ingrese el tercer n�mero: ";
                std::cin >> num3;

                // Ordenar los n�meros de mayor a menor
                if (num1 < num2)
                {
                    int temp = num1;
                    num1 = num2;
                    num2 = temp;
                }

                if (num1 < num3)
                {
                    int temp = num1;
                    num1 = num3;
                    num3 = temp;
                }

                if (num2 < num3)
                {
                    int temp = num2;
                    num2 = num3;
                    num3 = temp;
                }

                // Mostrar los n�meros ordenados de mayor a menor
                std::cout << "Los n�meros ordenados de mayor a menor son: " << num1 << ", " << num2 << ", " << num3 << std::endl;

                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 13:
            do
            {
                int num1, num2, num3;
                int temp;

                // Leer los tres n�meros
                std::cout << "Ingresa el primer n�mero: ";
                std::cin >> num1;

                std::cout << "Ingresa el segundo n�mero: ";
                std::cin >> num2;

                std::cout << "Ingresa el tercer n�mero: ";
                std::cin >> num3;

                // Ordenar los n�meros de menor a mayor
                if (num1 > num2)
                {
                    temp = num1;
                    num1 = num2;
                    num2 = temp;
                }
                if (num2 > num3)
                {
                    temp = num2;
                    num2 = num3;
                    num3 = temp;

                    if (num1 > num2)
                    {
                        temp = num1;
                        num1 = num2;
                        num2 = temp;
                    }
                }

                // Imprimir los n�meros ordenados
                std::cout << "N�meros ordenados de menor a mayor: " << num1 << " " << num2 << " " << num3 << std::endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 14:
            do
            {
                double radio, altura, area, volumen;

                cout << "Ingrese el radio del cilindro: ";
                cin >> radio;
                cout << "Ingrese la altura del cilindro: ";
                cin >> altura;

                area = 2 * M_PI * radio * (radio + altura);
                volumen = M_PI * pow(radio, 2) * altura;

                cout << "El �rea del cilindro es: " << area << endl;
                cout << "El volumen del cilindro es: " << volumen << endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 15:
            do
            {
                double velocidadKmPorHora;

                // Solicitar al usuario la velocidad del veh�culo en Km por hora
                std::cout << "Ingrese la velocidad del veh�culo en Km por hora: ";
                std::cin >> velocidadKmPorHora;

                // Calcular la velocidad en m/s (1 km/h = 0.277778 m/s)
                double velocidadMSec = velocidadKmPorHora * 0.277778;

                // Mostrar la velocidad en m/s
                std::cout << "La velocidad del veh�culo es: " << velocidadMSec << " m/s" << std::endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 16:
            do
            {
                int count = 0;

                for (int i = 1; i <= 100; i++)
                {
                    if (i % 2 != 0)
                    {
                        count++;
                    }
                }

                std::cout << "Hay " << count << " n�meros impares del 1 al 100." << std::endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 17:
            do
            {
                int suma = 0;

                for (int i = 1; i <= 100; i++)
                {
                    if (i % 2 != 0)
                    {              // Verificamos si el n�mero es impar
                        suma += i; // Sumamos el n�mero impar a la suma total
                    }
                }

                std::cout << "La suma de los numeros impares del 1 al 100 es: " << suma << std::endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 18:
            do
            {
                int suma = 0;
                for (int i = 2; i <= 100; i += 2)
                {
                    suma += i;
                }
                std::cout << "La suma de los numeros pares del 1 al 100 es: " << suma << std::endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 19:
            do
            {
                int numero, mayor, menor;

                std::cout << "Ingrese el primer n�mero: ";
                std::cin >> numero;
                mayor = numero;
                menor = numero;

                for (int i = 0; i < 4; i++)
                {
                    std::cout << "Ingrese el siguiente n�mero: ";
                    std::cin >> numero;

                    if (numero > mayor)
                    {
                        mayor = numero;
                    }

                    if (numero < menor)
                    {
                        menor = numero;
                    }
                }

                std::cout << "El n�mero mayor es: " << mayor << std::endl;
                std::cout << "El n�mero menor es: " << menor << std::endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 20:
            do
            {
                int num;

                std::cout << "Ingrese un n�mero para calcular su factorial: ";
                std::cin >> num;

                if (num < 0)
                {
                    std::cout << "No se puede calcular el factorial de un n�mero negativo." << std::endl;
                }
                else
                {
                    int result = factorial(num);
                    std::cout << "El factorial de " << num << " es: " << result << std::endl;
                }
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 21:
            do
            {
                int numero;
                std::cout << "Ingresa un n�mero del 1 al 10: ";
                std::cin >> numero;

                if (numero >= 1 && numero <= 10)
                {
                    std::string numeroRomano = convertirARomano(numero);
                    std::cout << "El n�mero " << numero << " en romano es: " << numeroRomano << std::endl;
                }
                else
                {
                    std::cout << "N�mero no v�lido. Debe ser un n�mero del 1 al 10." << std::endl;
                }
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 22:
            do
            {
                int numero, ultimaCifra;

                cout << "Ingrese un n�mero: ";
                cin >> numero;

                ultimaCifra = numero % 10;

                cout << "La �ltima cifra del n�mero es: " << ultimaCifra << endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 23:
            do
            {
                double medida_cm;
                double medida_pulgadas;

                std::cout << "Ingresa la medida en cent�metros: ";
                std::cin >> medida_cm;

                medida_pulgadas = medida_cm / 2.54;

                std::cout << "La medida en pulgadas es: " << medida_pulgadas << std::endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 24:
            do
            {
                int minutos;

                std::cout << "Ingresa un tiempo en minutos: ";
                std::cin >> minutos;

                convertirTiempo(minutos);
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 25:
            do
            {
                int numero_mes;

                cout << "Ingresa un n�mero del 1 al 12: ";
                cin >> numero_mes;

                switch (numero_mes)
                {
                case 1:
                    cout << "Enero" << endl;
                    break;
                case 2:
                    cout << "Febrero" << endl;
                    break;
                case 3:
                    cout << "Marzo" << endl;
                    break;
                case 4:
                    cout << "Abril" << endl;
                    break;
                case 5:
                    cout << "Mayo" << endl;
                    break;
                case 6:
                    cout << "Junio" << endl;
                    break;
                case 7:
                    cout << "Julio" << endl;
                    break;
                case 8:
                    cout << "Agosto" << endl;
                    break;
                case 9:
                    cout << "Septiembre" << endl;
                    break;
                case 10:
                    cout << "Octubre" << endl;
                    break;
                case 11:
                    cout << "Noviembre" << endl;
                    break;
                case 12:
                    cout << "Diciembre" << endl;
                    break;
                default:
                    cout << "N�mero inv�lido, debe ser del 1 al 12" << endl;
                }
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 26:
            do
            {
                int dia, mes;

                cout << "Ingrese el d�a de nacimiento: ";
                cin >> dia;
                cout << "Ingrese el mes de nacimiento (en n�mero): ";
                cin >> mes;

                if ((mes == 3 && dia >= 21) || (mes == 4 && dia <= 20))
                {
                    cout << "Tu signo zodiacal es Aries" << endl;
                }
                else if ((mes == 4 && dia >= 21) || (mes == 5 && dia <= 21))
                {
                    cout << "Tu signo zodiacal es Tauro" << endl;
                }
                else if ((mes == 5 && dia >= 22) || (mes == 6 && dia <= 21))
                {
                    cout << "Tu signo zodiacal es G�minis" << endl;
                }
                else if ((mes == 6 && dia >= 22) || (mes == 7 && dia <= 22))
                {
                    cout << "Tu signo zodiacal es C�ncer" << endl;
                }
                else if ((mes == 7 && dia >= 23) || (mes == 8 && dia <= 23))
                {
                    cout << "Tu signo zodiacal es Leo" << endl;
                }
                else if ((mes == 8 && dia >= 24) || (mes == 9 && dia <= 23))
                {
                    cout << "Tu signo zodiacal es Virgo" << endl;
                }
                else if ((mes == 9 && dia >= 24) || (mes == 10 && dia <= 23))
                {
                    cout << "Tu signo zodiacal es Libra" << endl;
                }
                else if ((mes == 10 && dia >= 24) || (mes == 11 && dia <= 22))
                {
                    cout << "Tu signo zodiacal es Escorpio" << endl;
                }
                else if ((mes == 11 && dia >= 23) || (mes == 12 && dia <= 21))
                {
                    cout << "Tu signo zodiacal es Sagitario" << endl;
                }
                else if ((mes == 12 && dia >= 22) || (mes == 1 && dia <= 20))
                {
                    cout << "Tu signo zodiacal es Capricornio" << endl;
                }
                else if ((mes == 1 && dia >= 21) || (mes == 2 && dia <= 19))
                {
                    cout << "Tu signo zodiacal es Acuario" << endl;
                }
                else if ((mes == 2 && dia >= 20) || (mes == 3 && dia <= 20))
                {
                    cout << "Tu signo zodiacal es Piscis" << endl;
                }
                else
                {
                    cout << "Fecha inv�lida" << endl;
                }
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 27:
            do
            {
                int numero;

                // Pedir al usuario que introduzca un n�mero
                std::cout << "Introduce un n�mero: ";
                std::cin >> numero;

                // Mostrar los n�meros desde 1 hasta el n�mero introducido
                for (int i = 1; i <= numero; i++)
                {
                    std::cout << i << " ";
                }
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 28:
            do
            {
                int numero;
                int suma = 0;

                std::cout << "Introduce un n�mero: ";
                std::cin >> numero;

                for (int i = 1; i <= numero; i++)
                {
                    suma += i;
                }

                std::cout << "La suma de los n�meros desde 1 hasta " << numero << " es: " << suma << std::endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 29:
            do
            {
                int numero;
                std::cout << "Ingresa un n�mero: ";
                std::cin >> numero;

                for (int i = 1; i <= 10; i++)
                {
                    int residuo = numero % i;
                    std::cout << "Residuo de " << numero << " dividido por " << i << ": " << residuo << std::endl;
                }
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 30:
            do
            {
                const double PI = 3.1416;
                double radio, perimetro, area;

                cout << "Ingresa el radio del c�rculo: ";
                cin >> radio;

                perimetro = 2 * PI * radio;
                area = PI * radio * radio;

                cout << "El per�metro del c�rculo es: " << perimetro << endl;
                cout << "El �rea del c�rculo es: " << area << endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 31:
            do
            {
                double radio;
                cout << "Ingresa el radio de la esfera: ";
                cin >> radio;

                double volumen = calcularVolumenEsfera(radio);

                cout << "El volumen de la esfera con radio " << radio << " es: " << volumen << endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 32:
            do
            {
                double cateto1, cateto2, hipotenusa;

                // Solicitar al usuario que ingrese los catetos
                std::cout << "Ingrese el valor del primer cateto: ";
                std::cin >> cateto1;

                std::cout << "Ingrese el valor del segundo cateto: ";
                std::cin >> cateto2;

                // Calcular la hipotenusa usando el teorema de Pit�goras
                hipotenusa = sqrt(pow(cateto1, 2) + pow(cateto2, 2));

                // Mostrar el resultado
                std::cout << "La hipotenusa del tri�ngulo rect�ngulo es: " << hipotenusa << std::endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 33:
            do
            {
                double fahrenheit, celsius;

                // Solicitar al usuario que ingrese los grados Fahrenheit
                cout << "Ingrese la temperatura en grados Fahrenheit: ";
                cin >> fahrenheit;

                // Convertir de grados Fahrenheit a grados Celsius
                celsius = (fahrenheit - 32) * 5 / 9;

                // Mostrar el resultado
                cout << "La temperatura en grados Celsius es: " << celsius << endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 34:
            do
            {
                double celsius, fahrenheit;

                // Solicitar al usuario la temperatura en grados Celsius
                cout << "Ingrese la temperatura en grados Celsius: ";
                cin >> celsius;

                // Convertir de grados Celsius a grados Fahrenheit
                fahrenheit = (9.0 / 5.0) * celsius + 32.0;

                // Mostrar el resultado de la conversi�n
                cout << "La temperatura en grados Fahrenheit es: " << fahrenheit << endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 35:
            do
            {
                float nota1, nota2, nota3;

                cout << "Ingrese la nota 1: ";
                cin >> nota1;

                cout << "Ingrese la nota 2: ";
                cin >> nota2;

                cout << "Ingrese la nota 3: ";
                cin >> nota3;

                float promedio = (nota1 * 0.3 + nota2 * 0.3 + nota3 * 0.4);

                cout << "El promedio ponderado de las notas es: " << promedio << endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 36:
            do
            {
                float nota1, nota2, nota3, nota4, nota_final;

                std::cout << "Ingresa la primera nota (20%): ";
                std::cin >> nota1;

                std::cout << "Ingresa la segunda nota (20%): ";
                std::cin >> nota2;

                std::cout << "Ingresa la tercera nota (20%): ";
                std::cin >> nota3;

                std::cout << "Ingresa la cuarta nota (40%): ";
                std::cin >> nota4;

                nota_final = (nota1 * 0.2) + (nota2 * 0.2) + (nota3 * 0.2) + (nota4 * 0.4);

                std::cout << "La nota final del estudiante es: " << nota_final << std::endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 37:
            do
            {
                for (int x = -5; x <= 20; x++)
                {
                    double resultado = rangoFuncion(x);
                    cout << "Para x = " << x << ", y = " << resultado << endl;
                }
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 38:
            do
            {
                int edad1, edad2, edad3;
                float promedio;

                std::cout << "Ingresa la primera edad: ";
                std::cin >> edad1;

                std::cout << "Ingresa la segunda edad: ";
                std::cin >> edad2;

                std::cout << "Ingresa la tercera edad: ";
                std::cin >> edad3;

                promedio = (edad1 + edad2 + edad3) / 3.0;

                std::cout << "Las edades que ingresaste son: " << edad1 << ", " << edad2 << ", " << edad3 << std::endl;
                std::cout << "El promedio de las edades es: " << promedio << std::endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 39:
            do
            {
                int numero;

                cout << "Ingrese 10 numeros:" << endl;

                for (int i = 0; i < 10; i++)
                {
                    cin >> numero;

                    if (numero > 0)
                    {
                        cout << "Numero positivo encontrado: " << numero << endl;
                    }
                }
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 40:
            do
            {
                std::string colores[3] = {"rojo", "verde", "azul"};
                int conteo[3] = {0, 0, 0};

                for (int i = 0; i < 10; i++)
                {
                    std::string color;
                    std::cout << "Por favor, ingrese el color mencionado por el visitante " << i + 1 << ": ";
                    std::cin >> color;

                    // Convertir el color a min�sculas para evitar diferencias de may�sculas y min�sculas
                    transform(color.begin(), color.end(), color.begin(), ::tolower);

                    // Verificar si el color ingresado es uno de los colores primarios
                    for (int j = 0; j < 3; j++)
                    {
                        if (color == colores[j])
                        {
                            conteo[j]++;
                            break;
                        }
                    }
                }

                std::cout << "Cantidad de visitantes que mencionaron cada color primario:" << std::endl;
                for (int i = 0; i < 3; i++)
                {
                    std::cout << colores[i] << ": " << conteo[i] << std::endl;
                }
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 41:
            do
            {
                int N;
                cout << "Ingrese el número de personas: ";
                cin >> N;

                // Vector para almacenar los datos de las personas
                vector<Persona> personas;

                // Leer los datos de cada persona
                leerDatos(personas, N);

                // Determinar cuál sexo tuvo mejor desempeño en promedio
                char mejorSexo = mejorDesempeno(personas);

                // Mostrar el resultado
                if (mejorSexo == 'M')
                {
                    cout << "El sexo masculino tuvo mejor desempeño en promedio." << endl;
                }
                else if (mejorSexo == 'F')
                {
                    cout << "El sexo femenino tuvo mejor desempeño en promedio." << endl;
                }
                else if (mejorSexo == 'I')
                {
                    cout << "Ambos sexos tuvieron el mismo desempeño en promedio." << endl;
                }
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 42:
            do
            {
                int tipoVehiculo, numPasajeros;
                int totalCarros = 0, totalBuses = 0;
                int totalPasajerosCarros = 0, totalPasajerosBuses = 0;
                int contadorCarros = 0, contadorBuses = 0;

                // Ciclo para ingresar los datos de los vehículos que pasaron por el peaje
                cout << "Ingrese los datos de los vehículos que pasaron por el peaje (tipo de vehículo y número de pasajeros)." << endl;
                cout << "Para terminar, ingrese 0 como tipo de vehículo." << endl;
                do
                {
                    cout << "Tipo de vehículo (1: carro particular, 2: bus, 3: otro): ";
                    cin >> tipoVehiculo;

                    if (tipoVehiculo == 1 || tipoVehiculo == 2)
                    {
                        cout << "Número de pasajeros: ";
                        cin >> numPasajeros;

                        // Actualizar los totales y contadores según el tipo de vehículo
                        if (tipoVehiculo == 1)
                        {
                            totalCarros++;
                            totalPasajerosCarros += numPasajeros;
                            contadorCarros++;
                        }
                        else if (tipoVehiculo == 2)
                        {
                            totalBuses++;
                            totalPasajerosBuses += numPasajeros;
                            contadorBuses++;
                        }
                    }
                } while (tipoVehiculo != 0);

                // Calcular promedios
                double promedioPasajerosCarros = 0, promedioPasajerosBuses = 0;
                if (contadorCarros > 0)
                {
                    promedioPasajerosCarros = static_cast<double>(totalPasajerosCarros) / contadorCarros;
                }
                if (contadorBuses > 0)
                {
                    promedioPasajerosBuses = static_cast<double>(totalPasajerosBuses) / contadorBuses;
                }

                // Imprimir resultados
                cout << "\nResultados del día:" << endl;
                cout << "Total de carros particulares: " << totalCarros << endl;
                cout << "Total de buses: " << totalBuses << endl;
                cout << "Promedio de personas en carros particulares: " << promedioPasajerosCarros << endl;
                cout << "Promedio de personas en buses: " << promedioPasajerosBuses << endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 43:
            do
            {
                int num1, num2;
                // Solicitar al usuario que ingrese los dos n�meros naturales
                std::cout << "Ingresa el primer n�mero natural: ";
                std::cin >> num1;

                std::cout << "Ingresa el segundo n�mero natural: ";
                std::cin >> num2;

                if (num1 <= 0 || num2 <= 0)
                {
                    std::cout << "Los n�meros deben ser mayores que 0." << std::endl;
                }
                else
                {
                    // Calcular el m�ximo com�n divisor e imprimirlo
                    int resultado = mcd(num1, num2);
                    std::cout << "El m�ximo com�n divisor de " << num1 << " y " << num2 << " es: " << resultado << std::endl;
                }
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 44:
            do
            {
                double pesos;
                std::cout << "Ingresa la cantidad en pesos a convertir a d�lares: ";
                std::cin >> pesos;

                double dollars = pesosToDollars(pesos);

                std::cout << pesos << " pesos son equivalentes a " << dollars << " d�lares." << std::endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 45:
            do
            {
                float dolares;
                std::cout << "Ingresa la cantidad en d�lares: ";
                std::cin >> dolares;

                float pesos = convertirDolaresAPesos(dolares);

                std::cout << dolares << " d�lares son " << pesos << " pesos colombianos." << std::endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 46:
            do
            {
                double euros;
                cout << "Introduce la cantidad en euros: ";
                cin >> euros;

                double dollars = eurosToDollars(euros);
                cout << euros << " euros son equivalentes a " << dollars << " d�lares." << endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 47:
            do
            {
                double tasa_conversion = 0.86; // Tasa de conversi�n de d�lares a euros

                double monto_dolares;
                std::cout << "Ingresa el monto en d�lares a convertir a euros: ";
                std::cin >> monto_dolares;

                double monto_euros = monto_dolares * tasa_conversion;

                std::cout << "El equivalente en euros es: " << monto_euros << std::endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 48:
            do
            {
                std::map<std::string, std::string> deportesImplementos;

                // Agregar deportes y sus implementos
                deportesImplementos["F�tbol"] = "bal�n, zapatos con tachones, espinilleras";
                deportesImplementos["Nataci�n"] = "traje de ba�o, gafas, gorro";

                // Leer dos deportes
                std::string deporte1, deporte2;
                std::cout << "Ingresa el primer deporte: ";
                std::cin >> deporte1;
                std::cout << "Ingresa el segundo deporte: ";
                std::cin >> deporte2;

                // Mostrar implementos de los deportes ingresados
                if (deportesImplementos.find(deporte1) != deportesImplementos.end())
                {
                    std::cout << "Implementos utilizados en " << deporte1 << ": " << deportesImplementos[deporte1] << std::endl;
                }
                else
                {
                    std::cout << "El deporte " << deporte1 << " no se encuentra en la lista." << std::endl;
                }

                if (deportesImplementos.find(deporte2) != deportesImplementos.end())
                {
                    std::cout << "Implementos utilizados en " << deporte2 << ": " << deportesImplementos[deporte2] << std::endl;
                }
                else
                {
                    std::cout << "El deporte " << deporte2 << " no se encuentra en la lista." << std::endl;
                }
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 49:
            do
            {
                double libras, kilogramos;

                // Pedir al usuario que ingrese el valor en libras
                std::cout << "Ingresa el valor en libras: ";
                std::cin >> libras;

                // Realizar la conversi�n de libras a kilogramos (1 libra = 0.453592 kg)
                kilogramos = libras * 0.453592;

                // Mostrar el resultado de la conversi�n
                std::cout << libras << " libras equivalen a " << kilogramos << " kilogramos." << std::endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        case 50:
            do
            {
                float pagoHora, horasTrabajadas, sueldoMensual;

                cout << "Ingrese el pago por hora: ";
                cin >> pagoHora;

                cout << "Ingrese las horas trabajadas al mes: ";
                cin >> horasTrabajadas;

                sueldoMensual = pagoHora * horasTrabajadas;

                cout << "El sueldo mensual del empleado es: $" << sueldoMensual << endl;
                cout << "¿Quieres volver a hacer el ejercicio?  S o s para si y cualquier otra tecla para no";
                cin >> seguir;
            } while (seguir == 's' || seguir == 'S');

            break;

        default:
            break;
        }

        cout << "¿Quieres volver a hacer un ejercicio? (s/S para sí, cualquier otra tecla para no): ";
        cin >> opcionhacerEjercicios50;
    } while (opcionhacerEjercicios50 == 's' || opcionhacerEjercicios50 == 'S');

    return 0;
}