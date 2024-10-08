#include <iostream>
#include "congruencial_aditivo.h"
#include <vector>
#include <sstream>
#include <string>
#include <iomanip>
#include "truncar_decimales.h"

using namespace std;

void congruencialAditivo(string secuencia, int m, int cantidad) {
    int longitud = 0, nuevoNumero = 0;
    double resultado = 0.0;
    vector<int> numeros;
    
    istringstream stream(secuencia);
    int numero;
    while (stream >> numero) {
        numeros.push_back(numero);
    }
    
    longitud = numeros.size();

    for (int i = 0; i < cantidad; i++) {
        nuevoNumero = (numeros[0] + numeros[longitud - 1]) % m;
        resultado = static_cast<double>(nuevoNumero) / (m - 1);
        cout << "Número generado [" << i + 1 << "]:" << fixed << setprecision(4) << truncarA4Decimales(resultado) << endl;
        numeros.erase(numeros.begin());
        numeros.push_back(nuevoNumero);
    }
}
