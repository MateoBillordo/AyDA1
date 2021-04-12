#include <iostream>

using namespace std;

int main()
{
    double interes = 0.35/12, MontoOriginal = 0, MontoFinal = 0, Rentabilidad = 0;
    int plazo = 0;
    cout << "Ingrese un monto: ";
    cin >> MontoOriginal;
    MontoFinal = MontoOriginal;
    cout << "Ingrese un plazo (minimo 1 mes):";
    cin >> plazo;
    while (plazo > 0) {
        Rentabilidad = Rentabilidad+(MontoOriginal*(interes));
        MontoOriginal += Rentabilidad;
        plazo--;
    }
    MontoFinal += Rentabilidad;
    cout << "El monto final es de: " << MontoFinal << " con una rentabilidad de: " << Rentabilidad;
    return 0;
}
