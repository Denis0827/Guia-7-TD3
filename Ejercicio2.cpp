#include "Ejercicio2.h"

FilaDeSuper::FilaDeSuper() {                          // O(1)
    this->_fila_de_espera;  
    this->_caja_dos_ocupada = false;
    this->_caja_uno_ocupada = false;
}

int FilaDeSuper::cantidad_esperando() const {         // O(1)
    return this->_fila_de_espera.size();
}

string FilaDeSuper::siguiente() const {              // O(1)
    return this->_fila_de_espera.front();
}
    
bool FilaDeSuper::esta_ocupada(int caja) const {     // O(1)
    switch(caja) {
        case 1:
            return this->_caja_uno_ocupada;
        case 2:
            return this->_caja_dos_ocupada;
    }
}

void FilaDeSuper::llega_persona(string dni) {        // O(1)
    this->_fila_de_espera.push(dni);
}

void FilaDeSuper::atender_siguiente(int caja) {     // O(1)
    switch(caja) {
        case 1: 
            this->_fila_de_espera.pop();
            this->_caja_uno_ocupada = true;
        case 2:
            this->_fila_de_espera.pop();
            this->_caja_dos_ocupada = true;
    }
}

void FilaDeSuper::liberar_caja(int caja) {         // O(1)
    switch(caja) {
        case 1:
            this->_caja_uno_ocupada = false;
        case 2: 
            this->_caja_dos_ocupada = false;
    }
}