#include "Ejercicio1.h"

template <typename T>
Pila<T>::Pila() {
    this->_elementos;
}

template <typename T>
bool Pila<T>::es_vacia() const {
    auto it = this->_elementos.begin();

    if(it == this->_elementos.end()) {
        return true;
    } else {
        return false;
    }
}
    // POST: La pila está vacía.

template <typename T>
const T& Pila<T>::tope() const {
    auto it = this->_elementos.begin();

    while(it != this->_elementos.end()) {
        it++;
    } 

    return *it;
}
    // PRE: es_vacia() da falso.

template <typename T> 
void Pila<T>::apilar(T elem) {
    this->_elementos.push_back(elem);
}
    // PRE: Verdadero
    // POST: Se agrega a la pila el valor elem, por lo tanto tope() es igual a elem.

template <typename T>
void Pila<T>::desapilar() {
    auto it = this->_elementos.begin();

    while(it != this->_elementos.end()) {
        it++;
    }

    this->_elementos.erase(it);
}
    // PRE: es_vacia() da falso.
    // POST: elimina de la pila el elemento devuelto por tope()