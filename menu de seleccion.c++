#include <iostream>



int main() {
    float a;

    std::cout << "Ingrese un número: ";
    std::cin >> a;

    if (a > 0) {
        std::cout << "El número es positivo." << std::endl;
    } else if (a < 0) {
        std::cout << "El número es negativo." << std::endl;
    } else {
        std::cout << "El número es cero." << std::endl;
    }

    

return 0;
}