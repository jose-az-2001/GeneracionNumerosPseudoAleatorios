# Generación de Números Pseudoaleatorios

Este repositorio contiene la implementación de varios algoritmos clásicos para la **generación de números pseudoaleatorios** en C++. Estos algoritmos son útiles en áreas como la simulación, criptografía, y en otros contextos donde se requieren secuencias de números que simulan aleatoriedad.

## Algoritmos implementados

1. **Algoritmo de Cuadrados Medios**: Utiliza el cuadrado de un número anterior para generar el siguiente número pseudoaleatorio.
2. **Algoritmo de Productos Medios**: Genera nuevos números a partir del producto de dos números previos, extrayendo los dígitos centrales.
3. **Algoritmo de Multiplicador Constante**: Usa un valor constante como multiplicador para crear una secuencia de números.
4. **Algoritmo Congruencial Aditivo**: Genera números mediante la suma de una constante a un valor previo en la secuencia.
5. **Algoritmo Congruencial Mixto Lineal**: Combina una multiplicación y una suma con valores constantes para generar números pseudoaleatorios.
6. **Algoritmo Congruencial Multiplicativo**: Solo usa multiplicación con un valor constante para producir números.

## Requisitos

Para compilar y ejecutar el proyecto, necesitarás:

- Un compilador de C++ (g++)
- CMake (opcional, pero recomendado para facilitar la compilación)

## Compilación y Ejecución

### Manualmente

Para compilar el archivo fuente, usa el siguiente comando:

```bash
g++ -o numeros_pseudoaleatorios src/numeros_pseudoaleatorios.cpp
./cuadrados_medios
```

Usando CMake
Clona el repositorio:
```bash
git clone https://github.com/tu-usuario/GeneracionNumerosPseudoAleatorios.git
cd GeneracionNumerosPseudoAleatorios
```

Crea el directorio de compilación y compila:
```bash
mkdir build
cd build
cmake ..
make
```

Ejecucion del programa: 
```bash
./numeros_pseudoaleatorios
```
