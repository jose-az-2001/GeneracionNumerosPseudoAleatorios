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
                cout << "Introduce la semilla para el algoritmo de cuadrados medios: ";
                cin >> seed1;
                cout << "Introduce la cantidad de números a generar: ";
                cin >> cantidad;
                cout << "Ejecutando Algoritmo de Cuadrados Medios..." << endl;
                cuadradosMedios(seed1, cantidad);
                break;
            case 2:
                cout << "Introduce la primer semilla para el algoritmo de productos medios: ";
                cin >> seed1;
                cout << "Introduce la segunda semilla para el algoritmo de productos medios: ";
                cin >> seed2;
                cout << "Introduce la cantidad de números a generar: ";
                cin >> cantidad;
                cout << "Ejecutando Algoritmo de Productos Medios..." << endl;
                productosMedios(seed1, seed2, cantidad);  
                break;
            case 3:
                cout << "Introduce la semilla para el algoritmo de multiplicador constante: ";
                cin >> seed1;
                cout << "Introduce la constante para el algoritmo de multiplicador constante: ";
                cin >> seed2;
                cout << "Introduce la cantidad de números a generar: ";
                cin >> cantidad;
                cout << "Ejecutando Algoritmo de Multiplicador Constante..." << endl;
                multiplicadorConstante(seed1, seed2, cantidad);  
                break;
            case 4:
                cout << "Introduce la secuencia para el algoritmo de congruencial aditivo: ";
                cin.ignore();  // Ignorar el salto de línea anterior que puede causar problemas con getline()
                getline(cin, secuencia);  // Usar getline para leer toda la secuencia con espacios
                cout << "Introduce la constante para el algoritmo de congruencial aditivo: ";
                cin >> seed1;
                cout << "Introduce la cantidad de números a generar: ";
                cin >> cantidad;
                cout << "Ejecutando Algoritmo Congruencial Aditivo..." << endl;
                congruencialAditivo(secuencia, seed1, cantidad); 
                break;
            case 5:
                cout << "Introduce el numero inicial para el Algoritmo Congruencial Mixto Lineal: ";
                cin >> seed1;
                cout << "Introduce el numero a multiplicar para el Algoritmo Congruencial Mixto Lineal: ";
                cin >> seed2;
                cout << "Introduce el numero a sumar para el Algoritmo Congruencial Mixto Lineal: ";
                cin >> c;
                cout << "Introduce el numero M para el Algoritmo Congruencial Mixto Lineal: ";
                cin >> m;
                cout << "Introduce la cantidad de números a generar: ";
                cin >> cantidad;
                cout << "Ejecutando Algoritmo Congruencial Mixto Lineal..." << endl;
                congruencialMixto(seed1, seed2, c, m, cantidad);  
                break;
            /* case 6:
                cout << "Ejecutando Algoritmo Congruencial Multiplicativo..." << endl;
                congruencialMultiplicativo();  
                break; */
            case 0:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opción no válida. Inténtalo de nuevo." << endl;
        }
        cout << endl;
    } while (opcion != 0);

    return 0;
}
