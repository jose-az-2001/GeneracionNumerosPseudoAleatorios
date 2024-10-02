#include <iostream>
#include <cmath>
#include "cuadrados_medios.h"

using namespace std;


// Implementación de la función cuadradosMedios
void cuadradosMedios(int seed, int cantidad) {
    int numero = seed;
    int d = to_string(seed).length();
    int cuadrado = seed;
    
    for (int i = 0; i < cantidad; i++) {
        cuadrado = numero * numero;
        string cuadradoString = to_string(cuadrado);
        int longitud = cuadradoString.length();
        int inicio = (longitud - d) / 2;
        string resultadoString = cuadradoString.substr(inicio, d);
        int resultado = stoi(resultadoString);
        numero = resultado;
        cout << "Número generado [" << i + 1 << "]: 0." << resultado << endl;
    }
}
