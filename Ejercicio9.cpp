struct arbol_binario {
    int valor;
    arbol_binario* izq;
    arbol_binario* der;
    int cantidad_total_hijos;
};

arbol_binario* insertar(arbol_binario* raiz, int elem) {
    if(raiz == nullptr) {
        raiz->valor = elem;
    } else {
        if(raiz->valor > elem) {
            return insertar(raiz->der, elem);
        } else {
            return insertar(raiz->izq, elem);
        }
    }
}

int contar_menores_a(const arbol_binario* raiz, int valor) {
    if(raiz == nullptr) {
        return 0;
    } else {
        if(raiz->izq != nullptr && raiz->izq->valor < valor) {
            return 1 + raiz->der->cantidad_total_hijos + contar_menores_a(raiz->izq, valor);
        } else if(raiz->valor < valor) {
            return 1 + contar_menores_a(raiz->der, valor);
        } else if(raiz->valor > valor) {
            return contar_menores_a(raiz->der, valor);
        }
    }
}

// PREGUNTAR