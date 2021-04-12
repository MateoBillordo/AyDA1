#include <iostream>

using namespace std;

double RaizCuadrada(double discr);

int main()
{
    int a=0, b=0, c=0;
    double x1=0, x2=0, xr=0, xi=0, discr;
    cout << "Ingrese los coeficientes para la ecuacion: ax^2+bx+c" << endl;
    cout << "a= ";
    cin >> a;
    cout << "b= ";
    cin >> b;
    cout << "c= ";
    cin >> c;
    cout << "La ecuacion es: " << a << "x^2+" << b << "x+" << c << endl;
    discr = (b*b)-(4*a*c);
    if (discr > 0.0){
        x1 = (-b+RaizCuadrada(discr))/(2*a);
        x2 = (-b-RaizCuadrada(discr))/(2*a);
        cout << "Las raices son: x1= " << x1 << " x2= " << x2;
    } else if (discr == 0.0){
        x1 = -b/(2*a);
        cout << "Las raices son: x1=x2= " << x1;
    } else {
        xr = -b/(2*a);
        xi = (-RaizCuadrada(-discr))/(2*a);
        cout << "La raiz real es: xr= " << xr << " y la raiz compleja es: xi= " << xi;
    }

    return 0;
}

double RaizCuadrada(double discr) {
    double x=1.0;
    for (int i=1; i<10; i++){
        x=(x+discr/x)/2;
    }
    return x;
}
