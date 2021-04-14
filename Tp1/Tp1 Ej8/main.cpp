#include <iostream>

using namespace std;

void CargarArreglo(int Arreglo[],int N);
void MostrarInvertido(int Arreglo[], int N);

int main()
{
    int N;
    cout << "Indique el tamanio del arreglo: ";
    cin >> N;
    int Arreglo[N];
    CargarArreglo(Arreglo,N);
    MostrarInvertido(Arreglo,N);
    return 0;
}

void CargarArreglo (int Arreglo[], int N){
    cout << "Ingrese " << N << " enteros al arreglo:" << endl;
    for (int i=0;i<N;i++){
        cin >> Arreglo[i];
    }
}

void MostrarInvertido (int Arreglo[], int N){
    cout << "El arreglo contiene: " << endl;
    for (int i=N-1;i>=0;i--){
        cout << Arreglo[i] << " ";
    }
}
