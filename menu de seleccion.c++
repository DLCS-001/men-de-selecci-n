#include <iostream>
#include <limits>
using namespace std;

bool esPrimo(int n) // Solo necesitas una función
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void limpiarPantalla()
{
    cout << string(50, '\n');
}

void pausar()
{
    cout << "\nPresione Enter para continuar...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

void mostrarMenuPrincipal()
{
    limpiarPantalla();
    cout << "\n=== MENÚ PRINCIPAL DE EJERCICIOS ===\n";
    cout << "1. Ejercicios con IF-ELSE\n";
    cout << "2. Ejercicios con WHILE\n";
    cout << "3. Ejercicios con FOR\n";
    cout << "4. Salir\n";
    cout << "Seleccione una opción: ";
}

void mostrarSubmenuIfElse()
{
    limpiarPantalla();
    cout << "\n=== EJERCICIOS IF-ELSE ===\n";
    cout << "1. Identificar si un número es positivo, negativo o cero\n";
    cout << "2. Identificar si un número es par o impar\n";
    cout << "3. Identificar el mayor entre tres números\n";
    cout << "4. Identificar si un año es bisiesto\n";
    cout << "5. Identificar si una letra es vocal o consonante\n";
    cout << "6. Verificar si un número es primo\n";
    cout << "7. Verificar si un año de nacimiento es válido\n";
    cout << "8. Verificar si un número es múltiplo de 5 y 7\n";
    cout << "9. Calificación según nota\n";
    cout << "10. Calculadora de descuento\n";
    cout << "11. Volver al menú principal\n";
    cout << "Seleccione un ejercicio: ";
}

void mostrarSubmenuWhile()
{
    limpiarPantalla();
    cout << "\n=== EJERCICIOS WHILE ===\n";
    cout << "1. Imprimir números del 1 al 20\n";
    cout << "2. Imprimir números hasta el número ingresado\n";
    cout << "3. Suma de números positivos\n";
    cout << "4. Secuencia Fibonacci\n";
    cout << "5. Suma hasta superar 100\n";
    cout << "6. Imprimir números pares hasta N\n";
    cout << "7. Calculadora de media\n";
    cout << "8. Contador de números\n";
    cout << "9. Primeros 10 números y sus cuadrados\n";
    cout << "10. Producto de los primeros 10 números\n";
    cout << "11. Volver al menú principal\n";
    cout << "Seleccione un ejercicio: ";
}

void mostrarSubmenuFor()
{
    limpiarPantalla();
    cout << "\n=== EJERCICIOS FOR ===\n";
    cout << "1. Imprimir números pares del 2 al 20\n";
    cout << "2. Tabla de multiplicar\n";
    cout << "3. Suma de números pares hasta N\n";
    cout << "4. Calcular factorial\n";
    cout << "5. Números primos del 1 al 50\n";
    cout << "6. Serie 1,3,6,10,15,...,N\n";
    cout << "7. Primeros 10 números Fibonacci\n";
    cout << "8. Suma de los primeros 100 números\n";
    cout << "9. Divisores de un número\n";
    cout << "10. Primeros 10 números primos\n";
    cout << "11. Volver al menú principal\n";
    cout << "Seleccione un ejercicio: ";
}

void salir()
{
    std::cout << "saliendo del programa...";
}
void ejecutarEjercicioIfElse(int opcion)
{
    limpiarPantalla();
    switch (opcion)
    {
    case 1:
    {
        float a;
        cout << "identificar si el numero es positivo, negativo o cero" << endl;
        std::cout << "Ingrese un número: ";
        std::cin >> a;

        if (a > 0)
        {
            std::cout << "El número " << a << " es positivo." << std::endl;
        }
        else if (a < 0)
        {
            std::cout << "El número" << a << " es negativo." << std::endl;
        }
        else
        {
            std::cout << "El número es cero." << std::endl;
        } // fin de la parte 1
        break;
    }
    case 2:
    {
        int b;
        cout << "identificar si el numero es par o impar" << endl;
        cout << "ingresa un numero: ";
        cin >> b;

        if (b % 2 == 0)
        {
            cout << "el numero es par" << endl;
        }
        else
        {
            cout << "el numero es impar" << endl;
        } // fin de la parte 2
        break;
    }
    case 3:
    {
        int c, d, e, mayor;
        cout << "identificar si el numero es mayor, menor o igual" << endl;
        cout << "ingresa tres numeros: ";
        cin >> c >> d >> e;

        if (c >= d && c >= e)
        {
            mayor = c;
        }
        else if (d >= c && d >= e)
        {
            mayor = d;
        }
        else
        {
            mayor = e;
        }
        cout << "El mayor numero es " << mayor << endl;
        // fin de la parte 3
        break;
    }
    case 4:
    {
        cout << "Identificar si un año es bisiesto" << endl;
        int año;
        cout << "Ingrese un año: ";
        cin >> año;

        if ((año % 4 == 0 && año % 100 != 0) || (año % 400 == 0))
        {
            cout << "El año " << año << " es bisiesto." << endl;
        }
        else
        {
            cout << "El año " << año << " no es bisiesto." << endl;
        } // fin de la parte 4
        break;
    }
    case 5:
    {
        cout << "Identificar si una letra es vocal o consonante" << endl;
        char letra;
        cout << "Ingrese una letra: ";
        cin >> letra;

        if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' ||
            letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
        {
            cout << "La letra " << letra << " es una vocal." << endl;
        }
        else
        {
            cout << "La letra " << letra << " es una consonante." << endl;
        } // fin de la parte 5
        break;
    }
    case 6:
    {
        cout << "\n\nVerificar si un numero es primo" << endl;
        int num, i, flag = 0;
        cout << "Ingrese un numero: ";
        cin >> num;

        if (num <= 1)
        {
            cout << num << " no es un numero primo." << endl;
        }
        else
        {
            for (i = 2; i <= num / 2; ++i)
            {
                if (num % i == 0)
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
                cout << num << " es un numero primo." << endl;
            else
                cout << num << " no es un numero primo." << endl;
        } // fin de la parte 6
        break;
    }
    case 7:
    {
        cout << "Verificar si un año de nacimiento es válido" << endl;
        int añoNacimiento;
        cout << "ingrese su año de nacimiento: ";
        cin >> añoNacimiento;
        if (añoNacimiento > 1900 && añoNacimiento < 2024)
            cout << "el año es valido";
        else
            cout << "el año no es valido";
        // fin de la parte 7
        break;
    }
    case 8:
    {
        int f;
        cout << "Verificar si un número es múltiplo de 5 y 7" << endl;
        cout << "ingrese un numero: ";
        cin >> f;
        if (f % 5 == 0 && f % 7 == 0)
            cout << "el numero es multiplo de 5 y de 7";
        else
            cout << "el numero no es multiplo de 5 y de 7";
        // fin de la parte 8
        break;
    }
    case 9:
    {
        int nota;
        cout << "calificacion segun su nota" << endl;
        cout << "ingrese su nota: ";
        cin >> nota;
        if (nota >= 90)
            cout << "calificaión A";
        else if (nota >= 80)
            cout << "calificacion B";
        else if (nota >= 70)
            cout << "calificacion C";
        else if (nota >= 60)
            cout << "calificacion D";
        else
            cout << "calificacion F";
        // fin de la parte 9
        break;
    }
    case 10:
    {
        int g, h, hh;
        cout << "calculadora de descuento" << endl;
        cout << "ingrese el precio del producto: ";
        cin >> g;
        cout << "ingrese el descuento: ";
        cin >> h;
        hh = g - (g * h / 100);
        cout << "el precio con descuento es: " << hh << endl;
        // fin de la parte 10
        break;
    }
    }
    pausar();
}

void ejecutarEjercicioWhile(int opcion)
{
    limpiarPantalla();
    switch (opcion)
    {
    case 1:
    {
        int j;
        cout << "Imprimir los números del 1 al 20" << endl;
        j = 1;
        while (j <= 20)
        {
            cout << j << endl;
            j++;
        } // fin de la parte 1
        break;
    }
    case 2:
    {
        int k, i = 1;
        cout << "los numeros del 1 hasta el numero ingresado" << endl;
        cout << "ingrese un numero: ";
        cin >> k;
        while (i <= k)
        {
            cout << i << " ";
            i++;
        } // fin de la parte 2
        break;
    }
    case 3:
    {
        int l, m = 0;
        cout << "suma de númeors positivos (negativo para terminar)" << endl;
        cout << "Ingrese números positivos (negativo para terminar)" << endl;
        while (true)
        {
            cin >> l;
            if (l < 0)
                break;
            m += l;
        }
        cout << "la suma de los numeros positivos es: " << m << endl;
        // fin de la parte 3
        break;
    }
    case 4:
    {
        int n, o = 1, p = 0, q;
        // secuencia fibonacci
        cout << "secuencia fibonacci" << endl;
        cout << "ingrese el numero de elementos: ";
        cin >> n;
        while (o <= n)
        {
            cout << p << " ";
            q = p + o;
            p = o;
            o = q;
        } // fin de la parte 4
        break;
    }
    case 5:
    {
        int s, r = 0;
        cout << "número que sea mayor a 100" << endl;
        while (r <= 100)
        {
            cout << "ingrese un numero: ";
            cin >> s;
            r += s;
        }

        cout << "la suma de los numeros ingresados es: " << r << endl;
        // fin de la parte 5
        break;
    }
    case 6:
    {
        int u, t;
        cout << "imprimir los numeros hasta el numero ingresado" << endl;
        cout << "ingrese un numero: ";
        cin >> t;
        while (u <= t)
        {
            cout << u << " ";
            u += 2;
        } // fin de la parte 6
        break;
    }
    case 7:
    {
        int x, w, v;
        cout << "calculadora de serie de numeros" << endl;
        cout << "ingrese un numeros (o para terminar): ";
        while (true)
        {
            cin >> v;
            if (v == 0)
                break;
            w += v;
            x++;
        }
        if (x == 0)
            cout << "no se ingresaron numeros";
        else
            cout << "la media es: " << (double)w / x << endl;
        // fin de la parte 7
        break;
    }
    case 8:
    {
        int y;
        cout << "contador de numeors" << endl;
        do
        {
            cout << "ingrese un numero: (0 para terminar)";
            cin >> y;
        } while (y != 0);
        cout << "fin del programa." << endl;
        // fin de la parte 8
        break;
    }
    case 9:
    {
        int i = 1;
        cout << "primeros 10 numeros naturales y su cuadrado" << endl;

        while (i <= 10)
        {
            cout << i << "^2 = " << i * i << endl;
            i++;
        } // fin de la parte 9
        break;
    }
    case 10:
    {
        int i = 1;
        cout << "calculo de los primeros 10 numeros naturales" << endl;
        long long int producto = 1;
        while (i <= 10)
        {
            producto *= i;
            i++;
        } // fin de la parte 10
        break;
    }
    }
    pausar();
}

void ejecutarEjercicioFor(int opcion)
{
    limpiarPantalla();
    switch (opcion)
    {
    case 1:
    {
        int num;
        cout << "imprimir los numeros pares del 2 al 20" << endl;
        for (int i = 2; i <= 20; i += 2)
        {
            cout << i << " ";
        } // fin de la parte 1
        break;
    }
    case 2:
    {
        int num;
        cout << "tabla de multiplicar" << endl;
        cout << "Ingrese un numero: ";
        cin >> num;

        for (int i = 1; i <= 10; i++)
            cout << num << " x " << i << " = " << num * i << endl;
        // fin de la parte 2
        break;
    }
    case 3:
    {
        int aa, bb;
        cout << "sumar numeros hasta n" << endl;
        cout << "Ingrese un numero: ";
        cin >> aa;
        for (int i = 2; i <= aa; i += 2)
            bb += i;
        cout << "la suma de los numeros pares es: " << bb << endl;
        // fin de la parte 3
        break;
    }
    case 4:
    {
        int dd = 1, cc;
        cout << "Calcular el factorial de un numero" << endl;
        cout << "Ingrese un numero: ";
        cin >> cc;
        for (int i = 1; i <= cc; i++)
            dd *= i;
        cout << "El factorial de " << cc << " es " << dd << endl;
        // fin de la parte 4
        break;
    }
    case 5:
    {
        cout << "imprimir los numeros primos del 1 al 50" << endl;
        for (int i = 1; i <= 50; i++)
            if (esPrimo(i))
                cout << i << " ";

        cout << endl;
        // fin de la parte 5
        break;
    }
    case 6:
    {
        int ff, sum = 0;
        cout << "imprimir lla sei 1,3,6,10,15,.., n" << endl;
        cout << "Ingrese un numero: ";
        cin >> ff;
        for (int i = 1; sum + i <= ff; i++)
        {
            sum += i;
            cout << sum << " ";
        }
        cout << endl;
        // fin de la parte 6
        break;
    }
    case 7:
    {
        int jj, hhh = 1, gg = 0;
        cout << "imprimir los primeros 10 numeros de la serie fibonacci" << endl;
        for (int i = 0; i < 10; i++)
        {
            cout << gg << " ";
            jj = gg + hhh;
            gg = hhh;
            hhh = jj;
        }
        cout << endl;
        // fin de la parte 7
        break;
    }
    case 8:
    {
        int gg = 0;
        cout << "sumar 100 numeros naturales" << endl;
        for (int i = 1; i <= 100; i++)
            gg += i;

        cout << "la suma de los 100 numeros naturales es: " << gg << endl;
        // fin de la parte 8
        break;
    }
    case 9:
    {
        int kk;
        cout << "Los divisores de un número ingresado" << endl;
        cout << "Ingrese un numero: ";
        cin >> kk;
        cout << "Los divisores de " << kk << " son: ";
        for (int i = 1; i <= kk; i++)
            if (kk % i == 0)
                cout << i << " ";
        cout << endl;
        // fin de la parte 9
        break;
    }
    case 10:
    {
        int nume = 2, contador = 0;
        cout << "10 numeros primos" << endl;
        while (contador < 10)
        {
            if (esPrimo(nume))
            {
                cout << nume << " ";
                contador++;
            }
            nume++;
        }
        cout << endl;
        // fin de la parte 10
        break;
    }
    }
    pausar();
}

int main()
{
    int opcionPrincipal, opcionSubmenu;
    bool salir = false;

    while (!salir)
    {
        mostrarMenuPrincipal();
        cin >> opcionPrincipal;

        switch (opcionPrincipal)
        {
        case 1:
        {
            do
            {
                mostrarSubmenuIfElse();
                cin >> opcionSubmenu;

                if (opcionSubmenu >= 1 && opcionSubmenu <= 10)
                {
                    ejecutarEjercicioIfElse(opcionSubmenu);
                }
            } while (opcionSubmenu != 11);
            break;
        }

        case 2:
        {
            do
            {
                mostrarSubmenuWhile();
                cin >> opcionSubmenu;

                if (opcionSubmenu >= 1 && opcionSubmenu <= 10)
                {
                    ejecutarEjercicioWhile(opcionSubmenu);
                }
            } while (opcionSubmenu != 11);
            break;
        }

        case 3:
        {
            do
            {
                mostrarSubmenuFor();
                cin >> opcionSubmenu;

                if (opcionSubmenu >= 1 && opcionSubmenu <= 10)
                {
                    ejecutarEjercicioFor(opcionSubmenu);
                }
            } while (opcionSubmenu != 11);
            break;
        }

        case 4:
            salir = true;
            break;

        default:
            cout << "\nOpción no válida. Intente nuevamente.\n";
            pausar();
        }
    }

    cout << "\n¡Gracias por usar el programa!\n";
    return 0;
}