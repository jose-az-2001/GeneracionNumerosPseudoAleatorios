#include <iostream>
#include <iomanip> 
#include "multiplicador_constante.h"

using namespace std;

void multiplicadorConstante(int seed1, int constante, int cantidad) {
    int numero1 = seed1;
    int mult = 0;
    int d = to_string(seed1).length();
    
    if (to_string(seed1).length() == to_string(constante).length()) {
        for (int i = 0; i < cantidad; i++) {
            mult = numero1 * constante;
            string multString = to_string(mult);
            int longitud = multString.length();
            int inicio = (longitud - d) / 2;
            string resultadoString = multString.substr(inicio, d);
            int resultado = stoi(resultadoString);
            numero1 = resultado;
            
            cout << "Número generado [" << i + 1 << "]: 0." << setfill('0') << setw(d) << resultado << endl;
        }
    }
    else {
        cout << "ERROR - Los números deben tener la misma cantidad de dígitos." << endl;
    }
}
