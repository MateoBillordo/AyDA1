#include <iostream>

using namespace std;

//Escribir un programa que lea dos números ingresados por teclado (separados por un espacio ‘ ‘), los
//multiplique e imprima el resultado por pantalla

int main()
{
    int a, b, resultado;
    cin >> a >> b;
    resultado= a*b;
    cout << a << " multiplicado por " << b << " es igual a " << resultado;
    return 0;
}
