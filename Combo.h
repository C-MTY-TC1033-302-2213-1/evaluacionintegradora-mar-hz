#ifndef Combo_h
#define Combo_h

#include "Producto.h"

class Combo : public Producto {
private:
    int clave;
public:
    Combo();
    Combo(string _nombre, int _precio, int _peso, int _clave);

    string str();
    int calculaTotalPagar();
};

#endif