#pragma once
#include <iostream>
using namespace std;

class ArbolBB
{
private:
    int raiz;
    ArbolBB *hijoIzquierdo;
    ArbolBB *hijoDerecho;

public:
    ArbolBB();
    ArbolBB(int *);
    ~ArbolBB();
    void Agregar(int *);
    void PreOrden();
    bool Ubicar(int *);
    void Eliminar(int *);
};

ArbolBB::ArbolBB(/* args */)
{
    raiz = 0;
    hijoDerecho = nullptr;
    hijoIzquierdo = nullptr;
}

ArbolBB::ArbolBB(int *dato)
{
    raiz = *dato;
    hijoDerecho = nullptr;
    hijoIzquierdo = nullptr;
}

ArbolBB::~ArbolBB()
{
}

bool ArbolBB::Ubicar(int *dato)
{
    if(raiz == *dato)
        return true;
    else{
        if(hijoDerecho!= nullptr)
            hijoDerecho->Ubicar(dato);
        if(hijoIzquierdo !=nullptr)
            hijoIzquierdo->Ubicar(dato);
    }
}

void ArbolBB::Agregar(int *dato)
{
    if (raiz == 0)
    {
        raiz = *dato;
    }
    else
    {
        if (raiz < *dato){
            if(hijoDerecho == nullptr)
                hijoDerecho = new ArbolBB(dato);
            else
                hijoDerecho->Agregar(dato);
        }
        else{
            if(hijoIzquierdo==nullptr)
                hijoIzquierdo = new ArbolBB(dato);
            else
                hijoIzquierdo->Agregar(dato);
        }
    }
    cout << "Agregdo" << endl;
}

void ArbolBB::PreOrden()
{
    if (raiz != 0)
    {
        cout << raiz << endl;
        if (hijoIzquierdo != nullptr)
            hijoIzquierdo->PreOrden();
        if (hijoDerecho != nullptr)
            hijoDerecho->PreOrden();
    }
}

void ArbolBB::Eliminar(int *dato){
    //implementacion
}

