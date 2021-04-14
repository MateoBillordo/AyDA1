#include <iostream>

using namespace std;

bool EsPrimo (int N);

int main()
{
    int N;
    cout << "Ingrese un nro para saber si es o no primo: ";
    cin >> N;
    if (EsPrimo(N)){
        cout << "El nro es primo";
    }else cout << "El nro NO es primo";
    return 0;
}

bool EsPrimo (int N){
    int d=2;
    while (N%d !=0 && d<N){
        d++;
    }
    return d!=N? false:true;
}
