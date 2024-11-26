#include <vector>
#include <string>
#include <list>
using namespace std;

template <typename T>
class Pila {
    
public:
    Pila() = default;

    bool es_vacia() const;
    // POST: La pila está vacía.

    const T& tope() const;
    // PRE: es_vacia() da falso.
    
    void apilar(T elem);
    // PRE: Verdadero
    // POST: Se agrega a la pila el valor elem, por lo tanto tope() es igual a elem.

    void desapilar();
    // PRE: es_vacia() da falso.
    // POST: elimina de la pila el elemento devuelto por tope()

private:
    list<T> _elementos;
};
