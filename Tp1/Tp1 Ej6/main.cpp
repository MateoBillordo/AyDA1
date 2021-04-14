#include <iostream>

using namespace std;

int main(int argc, char * argv[])
{
    string A, B, Mensaje;
    if (argc==3){
        A= argv[1];
        B= argv[2];
        cout << "Reemplazar: " << A << " por: " << B << endl;
        cout << "Escriba su mensaje a continuacion:" << endl;
        getline(cin,Mensaje);
        for (int i=0;i<Mensaje.length();i++){
            if (Mensaje[i]==A[0]){
                Mensaje[i]=B[0];
            }
        }
        cout << "Su mensaje modificado es: " << Mensaje;
    }else cout << "Error: No se ingresaron correctamente los parametros";
    return 0;
}
