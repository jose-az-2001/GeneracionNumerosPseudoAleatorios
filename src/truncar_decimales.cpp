#include <iostream>
#include <iomanip>
#include <cmath>
#include <unordered_set>  
#include "truncar_decimales.h"

using namespace std;


double truncarA4Decimales(double numero) {
    return floor(numero * 10000) / 10000;
}