#include <vector>
#include <string>
#include <list>
#include <queue>
using namespace std;

class FilaDeSuper{

public:
    FilaDeSuper();
    // POST: La FilaDeSuper es vacía y sus cajas están libres.

    int cantidad_esperando() const;

    string siguiente() const;

    bool esta_ocupada(int caja) const;
    // PRE: caja es igual a 1 o 2.

    void llega_persona(string dni);
    // PRE: dni es un dni válido
    // POST: El dni se agrega al final de la fila

    void atender_siguiente(int caja);
    // PRE: caja es igual a 1 o 2, cantidad_esperando() no es 0 y esta_ocupada(caja) es false.
    // POST: Se quita de la fila a la siguiente() persona que estaba esperando.
    // Y esta_ocupada(caja) se vuelve true.

    void liberar_caja(int caja);
    // PRE: caja es igual a 1 o 2, esta_ocupada(caja) es true.
    // POST: esta_ocupada(caja) se vuelve false.

private:
    queue<string> _fila_de_espera;
    bool _caja_uno_ocupada;
    bool _caja_dos_ocupada;
};
