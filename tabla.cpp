#include <iostream>

int main() {

    int num[4][3];
    std::cout << "Ingrese los valores para 4 filas por 3 columnas:";
    for(int i = 0; i < 4; ++i) {
        for(int j = 0; j < 3; ++j) {
            std::cout << "columna [" << i << "][" << j << "]: ";
            std::cin >> num[i][j];
        }
    }

    int mayor_suma = 0;

    for(int j = 0; j < 3; ++j) {
        int suma_columna = 0;
        for(int i = 0; i < 4; ++i) {
            suma_columna += num[i][j];
        }
        if(suma_columna > mayor_suma) {
            mayor_suma = suma_columna;
        }
    }

   
    std::cout << "La suma de las columnas es: " << mayor_suma;

    return 0;
}