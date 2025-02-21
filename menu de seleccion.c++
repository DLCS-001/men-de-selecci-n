#include <iostream>
using namespace std;

bool esPrimo(int ee) {
    if (ee <= 1) return false;
    for (int i = 2; i * i <= ee; i++) {
        if (ee % i == 0) return false;
    }
    return true;
}

int main() {
    float a;
    int b, c, d, e, mayor, año, f, nota, g, h, hh, j, k, l, m, n, o = 0, p = 1, q, r, s, t, u, v, w, x, y, z, producto, num, aa, bb = 0, cc, dd, ff, gg = 0, hhh = 1, jj, kk, ll, mm, nn, oo, pp, qq, rr, ss, tt, uu, vv, ww, xx, yy, zz, suma = 0;

    

    // estrucctura de control if else

    cout << "identificar si el numero es positivo, negativo o cero" << endl;
    std::cout << "Ingrese un número: ";
    std::cin >> a;

    if (a > 0) {
        std::cout << "El número " << a << " es positivo." << std::endl;
    } else if (a < 0) {
        std::cout << "El número" << a << " es negativo." << std::endl;
    } else {
        std::cout << "El número es cero." << std::endl;
    }// fin de la parte 1

    cout << "identificar si el numero es par o impar" << endl;
    cout << "ingresa un numero: ";
    cin >> b;

    if (b % 2 == 0) {
        cout << "el numero es par" << endl;
    } else {
        cout << "el numero es impar" << endl;
    } // fin de la parte 2

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
    // fin de la parte 3

    cout << "Identificar si un año es bisiesto" << endl;
    int año;
    cout << "Ingrese un año: ";
    cin >> año;

    if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0)) {
        cout << "El año " << año << " es bisiesto." << endl;
    } else {
    cout << "El año " << año << " no es bisiesto." << endl;
    } // fin de la parte 4

    cout << "Identificar si una letra es vocal o consonante" << endl;
    char letra;
    cout << "Ingrese una letra: ";
    cin >> letra;

    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U') {
        cout << "La letra " << letra << " es una vocal." << endl;
    } else {
        cout << "La letra " << letra << " es una consonante." << endl;
    } // fin de la parte 5


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
    } // fin de la parte 6
    

    cout << "Verificar si un año de nacimiento es válido" << endl;
    cout << "ingrese su año de nacimiento";
    cin >> año;
    if (año > 1900 && año < 2025)
        cout << "el año es valido";
    else
        cout << "el año no es valido";
    // fin de la parte 7


    cout << "verisicar si un número es multiplo de 5 y de 7" << endl;
    cout << "ingrese un numero: ";
    cin >> f;
    if (f % 5 == 0 && f % 7 == 0)
        cout << "el numero es multiplo de 5 y de 7";
    else
        cout << "el numero no es multiplo de 5 y de 7";
    // fin de la parte 8


    cout << "calificacion segun su nota" << endl;
    cout << "ingrese su nota: ";
    cin >> nota;
    if (nota >= 90) cout << "calificaión A";
    else if (nota >= 80) cout << "calificacion B";
    else if (nota >= 70) cout << "calificacion C";
    else if (nota >= 60) cout << "calificacion D";
    else cout << "calificacion F";
    // fin de la parte 9

    cout << "calculadora de descuento" << endl;
    cout << "ingrese el precio del producto: ";
    cin >> g;
    cout << "ingrese el descuento: ";
    cin >> h;
    hh = g - (g * h / 100);
    cout << "el precio con descuento es: " << hh << endl;
    // fin de la parte 10
    // fin de la estructura de control if else


    // estructura de control while
    cout << "iprimir los numeros del 1 al 20" << endl;
    j = 1;
    while (j <= 20) {
        cout << j << endl;
        j++;
    } // fin de la parte 1

    cout << "los numeros del 1 hasta el numero ingresado" << endl;
    cout << "ingrese un numero: ";
    cin >> k;
    while (i <= k) {
        cout << i << " ";
        i++;
    } // fin de la parte 2
    

    cout << "suma de númeors positivos (negativo para terminar)" << endl;
    cout << "inglese números positivos (negativo para terminar)" << endl;
    while (true) {
        cin >> l;
        if (l < 0) break;
        m += l;
    }
    cout << "la suma de los numeros positivos es: " << m << endl;
    // fin de la parte 3

    
    // secuencia fibonacci
    cout << "secuencia fibonacci" << endl;
    cout << "ingrese el numero de elementos: ";
    cin >> n;
    while ( o <= n) {
        cout << p << " ";
        q = p + o;
        p = o;
        o = q;
    } // fin de la parte 4


    cout << "número que sea mayor a 100" << endl;
    while (r <= 100) {
        cout << "ingrese un numero: ";
        cin >> s;
        r += s;
    } 
    
    cout << "la suma de los numeros ingresados es: " << r << endl;
    // fin de la parte 5


    cout << "imprimir los numeros hasta el numero ingresado" << endl;
    cout << "ingrese un numero: ";
    cin >> t;
    while (u <= t) {
        cout << u << " ";
        u+= 2;
    } // fin de la parte 6


    cout << "calculadora de serie de numeros" << endl;
    cout << "ingrese un numeros (o para terminar): ";
    while (true) {
        cin >> v;
        if (v == 0) break;
        w += v;
        x++;
    }
    if (x == 0)
        cout << "no se ingresaron numeros";
    else
        cout << "la media es: " << (double)w / x << endl;

  
    // fin de la parte 7



    cout << "contador de numeors" << endl;
    do {
        cout << "ingrese un numero: (0 para terminar)";
        cin >> y;
    } while (y != 0);
    cout << "fin del programa." << endl;
    // fin de la parte 8


    cout << "primeros 10 numeros naturales y su cuadrado" << endl;
    while (i <= 10) {
        cout << i << "^2 = " << i * i << endl;
        i++;
    } // fin de la parte 9


    cout << "calculo de los primeros 10 numeros naturales" << endl;
    long long int producto = 1;
    while (i <= 10) {
        producto *= i;
        i++;
    } // fin de la parte 10
    // fin de la estructura de control while


    // estructura de control for
    cout << "imprimir los numeros pares del 2 al 20" << endl;
    for (int i = 2; i <= 20; i += 2) {
        cout << i << " ";
    } // fin de la parte 1

    cout << "tabla de multiplicar" << endl;
    cout << "Ingrese un numero: ";
    cin >> num;

    for (int i = 1; i <= 10; i++)
        cout << num << " x " << i << " = " << num * i << endl;
    // fin de la parte 2

    cout << "sumar numeros hasta n" << endl;
    cout << "Ingrese un numero: ";
    cin >> aa;
    for (int i = 2; i <= aa; i += 2)
        bb += i;
    cout << "la suma de los numeros pares es: " << bb << endl;
    // fin de la parte 3




    cout << "calular el factorial de un numero" << endl;
    cout << "Ingrese un numero: ";
    cin >> cc;
    for (int i = 1; i <= cc; i++)
        dd *= i;
    cout << "El factorial de " << cc << " es " << dd << endl;
    // fin de la parte 4



    cout << "imprimir los numeros primos del 1 al 50" << endl;
    for (int i = 1; i <= 50; i++)
        if (esPrimo(i))
            cout << i << " ";

    cout << endl;
    // fin de la parte 5


    cout << "imprimir lla sei 1,3,6,10,15,.., n" << endl;
    cout << "Ingrese un numero: ";
    cin >> ff;
    for (int i =1; suma + i <= ff; i++) {
        suma += i;
        cout << suma << " ";
    } // fin de la parte 6


    cout << "imprimir los primeros 10 numeros de la serie fibonacci" << endl;
    for (int i = 0; i<10; i++) {
        cout << gg << " ";
        jj = gg + hhh;
        gg = hhh;
        hhh = jj;
    }
    cout << endl;
    // fin de la parte 7


return 0;
}
