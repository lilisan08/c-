#include <iostream>

int main() {
    int n1, n2, n3;
    
    std::cout << "Ingresa 3 numeros: ";
    std::cin >> n1 >> n2 >> n3;
    
    if (n1 == 1 && n2 == 2 && n3 == 3) {
        std::cout << "Tu acceso es permitido";
    } else {
        std::cout << "Tu acceso no es permitido";
    }

    return 0;
}
