#include "Ejercicio7.h"

template <typename T>
bool DiccionarioDeInt<T>::esta_definida(int clave) const {
    if(this->raiz == nullptr) {
        return false;
    } else if(this->raiz->clave == clave) {
        return true;
    } else {
        bool izquierda = esta_definida(this->raiz->hijo_izq);
        bool derecha = esta_definida(this->raiz->hijo_der);
        return izquierda || derecha;
    }
}

// Preguntar

template <typename T>
void DiccionarioDeInt<T>::definir(int clave, T valor) {
    if(this->raiz == nullptr) {
        this->raiz = new nodo(clave, valor);
    } else if(clave < this->raiz->clave) {
        insertar(clave, valor, this->raiz->hijo_izq);
    } else if(clave > this->raiz->clave) {
        insertar(clave, valor, this->raiz->hijo_der);
    }
}

nodo* insertar(int n, nodo* abb) {
3 if (abb == nullptr) {
4 return new nodo(n);
5 } else if (n < abb->elem)
6 abb->izquierdo = insertar(n, abb->izquierdo);
7 else if (n > abb->elem)
8 abb->derecho = insertar(n, abb->derecho);
9
10 // devuelve raiz sin modificar
11 return abb;
12 } // Complejidad: O(h)