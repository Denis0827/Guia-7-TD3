#include "Ejercicio2c.h"

FilaDeSuper::FilaDeSuper(int cantidad_cajas) {
    this->_fila_de_espera;
    this->_cantidad_cajas = cantidad_cajas;

    this->_caja_ocupada;
    for(int i = 0; i < cantidad_cajas; i++) {
        this->_caja_ocupada.push_back(false);
    }
}

int FilaDeSuper::cantidad_esperando() const {
    return this->_fila_de_espera.size();
}

string FilaDeSuper::siguiente() const {
    return this->_fila_de_espera.front();
}
    
bool FilaDeSuper::esta_ocupada(int caja) const {
    int i = 0;
    auto it = this->_caja_ocupada.begin();
    bool res;

    while(it != this->_caja_ocupada.end()) {
        if(caja == i) {
            res = *it;
        }
        i++;
        ++it;
    }

    return res;
}

void FilaDeSuper::llega_persona(string dni) {
    this->_fila_de_espera.push(dni);
}

void FilaDeSuper::atender_siguiente(int caja) {
    int i = 0;
    this->_fila_de_espera.pop();

    auto it = this->_caja_ocupada.begin();
    while(it != this->_caja_ocupada.end()) {
        if(caja == i) {
            *it = true;
        }
        i++;
        ++it;
    }
}

void FilaDeSuper::liberar_caja(int caja) {
    int i = 0;
    auto it = this->_caja_ocupada.begin();

    while(it != this->_caja_ocupada.end()) {
        if(caja == i) {
            *it = false;
        }
        i++;
        ++it;
    }
}
