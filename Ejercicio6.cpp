struct arbol_binario {
    int valor;
    arbol_binario* izq;
    arbol_binario* der;
};

bool verificar_max_heap(const arbol_binario* raiz) {
    if(raiz == nullptr) {
        return true;
    } else {
        bool izquierda = verificar_max_heap(raiz->izq);
        bool derecha = verificar_max_heap(raiz->der);
        return izquierda && derecha;
    }
}