#include <iostream>
#include <string>
#include "cuadrados_medios.h"
#include "productos_medios.h"
#include "multiplicador_constante.h"
#include "congruencial_aditivo.h"
#include "congruencial_mixto.h"
#include "congruencial_multiplicativo.h"

using namespace std;

void mostrarMenu() {
    cout << "======================================" << endl;
    cout << "  Generación de Números Pseudoaleatorios" << endl;
    cout << "======================================" << endl;
    cout << "Selecciona el algoritmo que deseas ejecutar:" << endl;
    cout << "1. Algoritmo de Cuadrados Medios" << endl;
    cout << "2. Algoritmo de Productos Medios" << endl;
    cout << "3. Algoritmo de Multiplicador Constante" << endl;
    cout << "4. Algoritmo Congruencial Aditivo" << endl;
    cout << "5. Algoritmo Congruencial Mixto Lineal" << endl;
    cout << "6. Algoritmo Congruencial Multiplicativo" << endl;
    cout << "0. Salir" << endl;
    cout << "======================================" << endl;
    cout << "Opción: ";
}

int main() {
    int opcion;
    int seed1, seed2, cantidad, c, m;
    string secuencia;

    do {
        mostrarMenu();
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Introduce la semilla (número inicial) para el algoritmo de Cuadrados Medios: ";
                cin >> seed1;
                cout << "Introduce la cantidad de números a generar: ";
                cin >> cantidad;
                cout << "Ejecutando Algoritmo de Cuadrados Medios..." << endl;
                cuadradosMedios(seed1, cantidad);
                break;
            case 2:
                cout << "Introduce la primera semilla (número inicial) para el algoritmo de Productos Medios: ";
                cin >> seed1;
                cout << "Introduce la segunda semilla (número inicial) para el algoritmo de Productos Medios: ";
                cin >> seed2;
                cout << "Introduce la cantidad de números a generar: ";
                cin >> cantidad;
                cout << "Ejecutando Algoritmo de Productos Medios..." << endl;
                productosMedios(seed1, seed2, cantidad);  
                break;
            case 3:
                cout << "Introduce la semilla (número inicial) para el algoritmo de Multiplicador Constante: ";
                cin >> seed1;
                cout << "Introduce la constante multiplicativa: ";
                cin >> seed2;
                cout << "Introduce la cantidad de números a generar: ";
                cin >> cantidad;
                cout << "Ejecutando Algoritmo de Multiplicador Constante..." << endl;
                multiplicadorConstante(seed1, seed2, cantidad);  
                break;
            case 4:
                cout << "Introduce la secuencia inicial (números separados por espacios) para el algoritmo de Congruencial Aditivo: ";
                cin.ignore();  // Para eliminar el salto de línea pendiente en el buffer
                getline(cin, secuencia);
                cout << "Introduce la constante para el algoritmo de Congruencial Aditivo: ";
                cin >> seed1;
                cout << "Introduce la cantidad de números a generar: ";
                cin >> cantidad;
                cout << "Ejecutando Algoritmo Congruencial Aditivo..." << endl;
                congruencialAditivo(secuencia, seed1, cantidad); 
                break;
            case 5:
                cout << "Introduce la semilla (número inicial) para el Algoritmo Congruencial Mixto Lineal: ";
                cin >> seed1;
                cout << "Introduce el valor de 'a' (multiplicador): ";
                cin >> seed2;
                cout << "Introduce el valor de 'c' (incremento): ";
                cin >> c;
                cout << "Introduce el valor de 'm' (módulo): ";
                cin >> m;
                cout << "Introduce la cantidad de números a generar: ";
                cin >> cantidad;
                cout << "Ejecutando Algoritmo Congruencial Mixto Lineal..." << endl;
                congruencialMixto(seed1, seed2, c, m, cantidad);  
                break;
            case 6:
                cout << "Introduce la semilla (número inicial) para el Algoritmo Congruencial Multiplicativo: ";
                cin >> seed1;
                cout << "Introduce el valor de 'k' (para calcular el multiplicador): ";
                cin >> seed2;
                cout << "Introduce el valor de 'g' (para calcular el módulo): ";
                cin >> c;
                cout << "Ejecutando Algoritmo Congruencial Multiplicativo..." << endl;
                congruencialMultiplicativo(seed1, seed2, c);  
                break;
            case 0:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción no válida. Por favor, selecciona una opción válida." << endl;
        }
        cout << endl;
    } while (opcion != 0);

    return 0;
}
