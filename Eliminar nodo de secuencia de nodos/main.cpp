#include <iostream>

using namespace std;

struct Nodo{
    int elemento;
    Nodo * siguiente;
};

Nodo * CrearNodo (int elemento, Nodo * siguiente);
Nodo * CrearSecuencia();
Nodo * AgregarElemento (Nodo * primero, int nuevoElemento);
bool EliminarElemento (Nodo * & primero, int ElementoAeliminar);
void MostrarElementos (Nodo * primero);
void EliminarSecuencia (Nodo * & primero);

int main()
{
    Nodo * primero=NULL;
    int ElementoAEliminar;
    primero=CrearSecuencia();
    MostrarElementos(primero);
    cout << "Ingrese el elemento que desea eliminar: ";
    cin >> ElementoAEliminar;
    if (EliminarElemento(primero,ElementoAEliminar)) {
        cout << "El elemento ha sido eliminado" <<endl;
    }else cout << "No se ha eliminado el elemento" << endl;
    MostrarElementos(primero);
    EliminarSecuencia(primero);

    return 0;
}

Nodo * CrearNodo (int elemento, Nodo * siguiente){
    Nodo * nuevo= new Nodo();
    nuevo->elemento=elemento;
    nuevo->siguiente=siguiente;

    return nuevo;
}

Nodo * AgregarElemento (Nodo * primero, int nuevoElemento){
    Nodo * nuevo=CrearNodo(nuevoElemento,NULL);
    nuevo->siguiente=primero;

    return nuevo;
}

bool EliminarElemento (Nodo * & primero, int ElementoAeliminar){
    bool Eliminado=true;
    Nodo * Cursor=NULL, * NodoAEliminar=NULL;
    if (primero==NULL){
        Eliminado=false;
    }else if(primero->elemento==ElementoAeliminar) {
        NodoAEliminar=primero;
        primero=primero->siguiente;
        delete NodoAEliminar;
    }else {
        Cursor=primero;
        while (Cursor->siguiente!=NULL && Cursor->siguiente->elemento!=ElementoAeliminar)
            Cursor=Cursor->siguiente;
        if (Cursor->siguiente==NULL){
            Eliminado=false;
        }else {
            NodoAEliminar=Cursor->siguiente;
            Cursor->siguiente=Cursor->siguiente->siguiente;
            delete NodoAEliminar;
        }
    }

    return Eliminado;
}

void MostrarElementos (Nodo * primero){
    Nodo * cursor = primero;
    while (cursor!=NULL){
        cout << cursor->elemento << " ";
        cursor=cursor->siguiente;
    }
    cout << endl;
}

void EliminarSecuencia (Nodo * & primero){
    Nodo * NodoAEliminar=NULL;
    while (primero!=NULL){
        NodoAEliminar=primero;
        primero=primero->siguiente;
        delete NodoAEliminar;
    }
}

Nodo * CrearSecuencia(){
    Nodo * primero=NULL;
    int Cantidad=0,Elemento;
    cout << "Indique la cantidad de elementos que desea ingresar: ";
    cin >> Cantidad;
    if (Cantidad>0){
        cout << "Ingrese " << Cantidad << " enteros:" << endl;
        while (Cantidad>0){
            cin >> Elemento;
            primero=AgregarElemento(primero,Elemento);
            Cantidad--;
        }
    }

    return primero;
}
