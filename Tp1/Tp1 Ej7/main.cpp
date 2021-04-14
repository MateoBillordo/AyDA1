#include <iostream>

using namespace std;

void CargarArreglo (int Arreglo[], int N);
double ElementoMayoria(int Arreglo[], int N);

int main()
{
    int N;
    double MayoriaOcurrencias;
    cout << "Cantidad de enteros del arreglo: ";
    cin >> N;
    int Arreglo[N];
    CargarArreglo(Arreglo, N);
    MayoriaOcurrencias=ElementoMayoria(Arreglo,N);
    if (MayoriaOcurrencias==-1){
        cout << "No existe un elemento mayoria";
    }else cout << "El elemento mayoria aparece: " << MayoriaOcurrencias << " veces";
    return 0;
}

void CargarArreglo (int Arreglo[], int N){
    cout << "Ingrese los enteros a continuacion: " << endl;
    for (int i=0; i<N; i++){
        cin >> Arreglo[i];
    }
}

double ElementoMayoria(int Arreglo[], int N){
    int i=0, Ocurrencias=0;
    bool Encontrado = false;
    while (i<N && !Encontrado){
        for (int j=i; j<N;j++){
            if (Arreglo[j]==Arreglo[i]){
                Ocurrencias++;
            }
        }
        if (Ocurrencias>N/2){
            Encontrado=true;
        }else {
            i++;
            Ocurrencias=0;
        }
    }
    if (Encontrado){
        return Ocurrencias;
    }else return -1;
}
