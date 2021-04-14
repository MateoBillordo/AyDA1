#include <iostream>

using namespace std;

void CargarArreglo (int Arreglo[], int N);
double ElementoMayoria(int Arreglo[], int N);

int main()
{
    int N;
    double Mayoria;
    cout << "Cantidad de enteros del arreglo: ";
    cin >> N;
    int Arreglo[N];
    CargarArreglo(Arreglo, N);
    Mayoria=ElementoMayoria(Arreglo,N);
    if (Mayoria==0.1){
        cout << "No existe un elemento mayoria";
    }else cout << "El elemento mayoria es: " << Mayoria;
    return 0;
}

void CargarArreglo (int Arreglo[], int N){
    cout << "Ingrese los enteros a continuacion: " << endl;
    for (int i=0; i<N; i++){
        cin >> Arreglo[i];
    }
}

double ElementoMayoria(int Arreglo[], int N){
    double Mayoria;
    int i=0, Ocurrencias=0;
    bool Encontrado = false;
    while (i<N && !Encontrado){
        Mayoria=Arreglo[i];
        for (int j=i; j<N;j++){
            if (Arreglo[j]==Mayoria){
                Ocurrencias++;
            }
        }
        if (Ocurrencias>N/2 +1){
            Encontrado=true;
        }else {
            i++;
            Ocurrencias=0;
        }
    }
    if (Encontrado){
        return Mayoria;
    }else return 0.1;
}
