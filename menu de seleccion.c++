#include <iostream>
using namespace std;


int main() {
    float a;
    int b;

    std::cout << "Ingrese un número: ";
    std::cin >> a;

    if (a > 0) {
        std::cout << "El número " << a << " es positivo." << std::endl;
    } else if (a < 0) {
        std::cout << "El número" << a << " es negativo." << std::endl;
    } else {
        std::cout << "El número es cero." << std::endl;
    }

    cout << "ingresa un numero: ";
    cin >> b;

    if (b % 2 == 0) {
        cout << "el numero es par" << endl;
    } else {
        cout << "el numero es impar" << endl;
    }

return 0;
}