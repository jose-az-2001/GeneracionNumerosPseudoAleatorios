#include <iostream>
#include <cmath>
#include "productos_medios.h"

using namespace std;

void productosMedios(int seed1, int seed2, int cantidad) {
    int numero1 = seed1;
    int numero2 = seed2;
    int mult = 0;
    int d = to_string(seed1).length();
    if (to_string(seed1).length() == to_string(seed2).length()) {
    
        for (int i = 0; i < cantidad; i++) {
            mult = numero1 * numero2;
            string multString = to_string(mult);
            int longitud = multString.length();
            int inicio = (longitud - d) / 2;
            string resultadoString = multString.substr(inicio, d);
            int resultado = stoi(resultadoString);
            numero1 = numero2;
            numero2 = resultado;
            cout << "Número generado [" << i + 1 << "]: 0." << resultado << endl;
        }
    }
    else {
        cout << "ERROR - Los números deben tener la misma cantidad de dígitos." << endl;
    }
}
