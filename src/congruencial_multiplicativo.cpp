#include <iostream>
#include "congruencial_multiplicativo.h"
#include <iomanip>
#include <cmath>
#include <unordered_set>
#include "truncar_decimales.h"

using namespace std;


void congruencialMultiplicativo(int X, int k, int g) {
    int m = pow(2, g);  
    int a = 5 + (8 * k);
    int nuevoNumero = 0.0;
    double resultado = 0.0;
    unordered_set<int> generados;  
    int ciclo = 0;
    if(X % 2 == 1) {
        while (generados.find(X) == generados.end()) {
            generados.insert(X);  
            nuevoNumero = (a * X) % m;
            resultado = static_cast<double>(nuevoNumero) / (m - 1);
            cout << "Número generado [" << ciclo + 1 << "]: " << fixed << setprecision(4) << truncarA4Decimales(resultado) << endl;
            X = nuevoNumero;
            ciclo++;
        }
        cout << "Ciclo de vida encontrado después de " << ciclo << " números generados." << endl;
    } else {
        cout << "La semilla debe ser un número impar." << endl;
    }
}
