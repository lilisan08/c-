#include <iostream>

int main() {
    int num, sum = 0, cont = 0;

    do {
        std::cout << "Introduce un numero (0 para finalizar): ";
        std::cin >> num;

        if (num != 0) {
            std::cout << "Has introducido el numero: " << num << std::endl;
            sum += num;
            cont++;
        }
    } while (num != 0);

    std::cout << "Se ha introducido el numero 0" << std::endl;
    std::cout << "La cantidad de numeros es: " << cont << std::endl;
    std::cout << "La suma de los numeros es: " << sum << std::endl;

    return 0;
}
