template <typename T>
class DiccionarioDeInt {
public:
    DiccionarioDeInt();
    bool esta_definida(int clave, nodo* node) const;
    const T& obtener_valor(int clave) const;
    void definir(int clave, T valor);
    void borrar(int clave);
    ~DiccionarioDeInt();

private:
    struct nodo {
        nodo(int c, T v) : clave(c), valor(v), hijo_izq(nullptr), hijo_der(nullptr) {}
        int clave;
        T valor;
        nodo* hijo_izq;
        nodo* hijo_der;
    };
    nodo* raiz;
};