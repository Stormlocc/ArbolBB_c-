#include <iostream>
#include "ArbolBB.h"
using namespace std;

static void Menu(){
    cout<<"1) Insertar elemento"<<endl;
    cout<<"2) Mostrar elementos"<<endl;
    cout<<"3) Buscar elemento"<<endl;
    //cout<<"4) Eliminar elemento"<<endl;
    cout<<"5) Salir"<<endl;
}

int main(){

    cout<<"<<<<<<<<<<Programa de Arbol Binario de Busqueda AVL>>>>>>>>>>"<<endl;
    //Instanciando el ArbolBB
    ArbolBB *arbol = new ArbolBB();
    int opcion;
    int *agregar;

    do
    {
        //Imput opcion
        Menu();
        cout<<"Ingrese opcion: ";
        cin>>opcion;
        cin.ignore();
        //Accion de opcion
        switch (opcion)
        {
        case 1:
            cout<<"Ingrese dato: ";
            cin>>*agregar;
            cin.ignore();
            arbol->Agregar(agregar);
            break;
        case 2:
            cout<<"Recorrido en PreOrden............"<<endl;
            arbol->PreOrden();
            break;
        case 3:
            bool flag = false;
            cout<<"Ingrese dato: ";
            cin>>*agregar;
            cin.ignore();
            flag = arbol->Ubicar(agregar);
            if (flag)
                cout<<"Encontrado"<<endl;
            else
                cout<<"NO Encontrado"<<endl;
            break;
        case 4:
            cout<<"Ingrese dato: ";
            cin>>*agregar;
            cin.ignore();
            arbol->Eliminar(agregar);
            break;
            
        }
    } while (opcion<5);
      
    cout<<"Programa Finalizo"<<endl;

}