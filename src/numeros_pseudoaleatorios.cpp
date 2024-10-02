#include <iostream>
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
    int seed, cantidad;

    do {
        mostrarMenu();
        cin >> opcion;

        switch(opcion) {
            case 1:
                cout << "Introduce la semilla para el algoritmo de cuadrados medios: ";
                cin >> seed;
                cout << "Introduce la cantidad de números a generar: ";
                cin >> cantidad;
                cout << "Ejecutando Algoritmo de Cuadrados Medios..." << endl;
                cuadradosMedios(seed, cantidad);
                break;
            /* case 2:
                cout << "Ejecutando Algoritmo de Productos Medios..." << endl;
                productosMedios();  
                break;
            case 3:
                cout << "Ejecutando Algoritmo de Multiplicador Constante..." << endl;
                multiplicadorConstante();  
                break;
            case 4:
                cout << "Ejecutando Algoritmo Congruencial Aditivo..." << endl;
                congruencialAditivo(); 
                break;
            case 5:
                cout << "Ejecutando Algoritmo Congruencial Mixto Lineal..." << endl;
                congruencialMixto();  
                break;
            case 6:
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
