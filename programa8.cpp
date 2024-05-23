#include <iostream>
#include <cmath>

int main() {
    double num, total = 1;
    int potencia;
    std::cout << "Ingrese un numero: ";
    std::cin >> num;
    std::cout << "Ingrese la potencia a la que lo quiere elevar: ";
    std::cin >> potencia;
    total = std::pow(num, potencia);
    std::cout << std::fixed << std::setprecision(2) << num << " elevado a la potencia " << potencia << " es igual a " << total << std::endl;

    return 0;
}

