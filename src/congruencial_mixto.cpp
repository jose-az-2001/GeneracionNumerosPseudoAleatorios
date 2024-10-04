#include <iostream>
#include "congruencial_mixto.h"
#include <iomanip>  // Para usar fixed y setprecision

using namespace std;

void congruencialMixto(int X, int a, int c, int m, int cantidad) {
    int nuevoNumero = 0;
    double resultado = 0.0;
    
    for(int i = 0; i < cantidad; i++) {
        nuevoNumero = ((a * X) + c) % m;
        
        resultado = static_cast<double>(nuevoNumero) / (m - 1);
        
        cout << "Número generado [" << i + 1 << "]: " << fixed << setprecision(4) << resultado << endl;
        
        X = nuevoNumero;
    }
}
