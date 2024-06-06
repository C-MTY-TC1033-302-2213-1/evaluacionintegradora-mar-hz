
#include "Combo.h"

Combo::Combo() : Producto() {
    clave = 0;
}

Combo::Combo(string _nombre, int _precio, int _peso, int _clave) : Producto (_nombre, _precio, _peso) {
    clave = _clave;
}

string Combo::str() {
    return nombre + '-' + '$' + to_string(precio) + '-' + to_string(peso) + '-' + '$' + to_string(calculaTotalPagar())
    + '-' + to_string(clave);
}

int Combo::calculaTotalPagar() {
    int total, descuento;
    
    total = precio * peso * clave;
    descuento = 0;

    if (clave == 1) {
        descuento = (total / 100) * 25;
        total -= descuento;
    } else if (clave == 2) {
        descuento = (total / 100) * 30;
        total -= descuento;
    }

    return total;
}