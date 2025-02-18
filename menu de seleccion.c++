#include <iostream>
using namespace std;


int main() {
    float a;
    int b, c, d, e, mayor;
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
    cout << "El mayor numero es " << mayor << endl; // fin de la tercera parte

return 0;
}