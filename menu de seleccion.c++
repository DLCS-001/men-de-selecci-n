#include <iostream>
using namespace std;


int main() {
    float a;
    int b, c, d, e, mayor, año, f;
    cout << "identificar si el numero es positivo, negativo o cero" << endl;
    std::cout << "Ingrese un número: ";
    std::cin >> a;

    if (a > 0) {
        std::cout << "El número " << a << " es positivo." << std::endl;
    } else if (a < 0) {
        std::cout << "El número" << a << " es negativo." << std::endl;
    } else {
        std::cout << "El número es cero." << std::endl;
    }// fin de la primera parte

    cout << "identificar si el numero es par o impar" << endl;
    cout << "ingresa un numero: ";
    cin >> b;

    if (b % 2 == 0) {
        cout << "el numero es par" << endl;
    } else {
        cout << "el numero es impar" << endl;
    } // fin de la segunda parte

    cout << "identificar si el numero es mayor, menor o igual" << endl;
    cout << "ingresa tres numeros: ";
    cin >> c >> d >> e;

    if (c >= d && c >= e) {
        mayor = c;
    } else if (d >= c && d >= e) {
        mayor = d;
    } else {
        mayor = e;
    }
    cout << "El mayor numero es " << mayor << endl; 
    // fin de la tercera parte

    cout << "Identificar si un año es bisiesto" << endl;
    int año;
    cout << "Ingrese un año: ";
    cin >> año;

    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        cout << "El año " << año << " es bisiesto." << endl;
    } else {
    cout << "El año " << año << " no es bisiesto." << endl;
    } // fin de la cuarta parte

    cout << "Identificar si una letra es vocal o consonante" << endl;
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        cout << "La letra " << letra << " es una vocal." << endl;
    } else {
        cout << "La letra " << letra << " es una consonante." << endl;
    } // fin de la quinta parte


    cout << "\n\nVerificar si un numero es primo" << endl;
    int num, i, flag = 0;
    cout << "Ingrese un numero: ";
    cin >> num;

    if (num <= 1) {
        cout << num << " no es un numero primo." << endl;
    } else {
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
            cout << num << " es un numero primo." << endl;
        else
            cout << num << " no es un numero primo." << endl;
    } // fin de la sexta parte
    

    cout << "Verificar si un año de nacimiento es válido" << endl;
    cout << "ingrese su año de nacimiento";
    cin >> año;
    if (año > 1900 && año < 2025)
        cout << "el año es valido";
    else
        cout << "el año no es valido";
    // fin de la septima parte


    cout << "verisicar si un número es multiplo de 5 y de 7" << endl;
    cout << "ingrese un numero: ";
    cin >> f;
    if (f % 5 == 0 && f % 7 == 0)
        cout << "el numero es multiplo de 5 y de 7";
    else
        cout << "el numero no es multiplo de 5 y de 7";
    // fin de la octava parte


    
    return 0;

}
