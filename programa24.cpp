#include <iostream>
#include <string>

int main() {
    std::string nombreCompleto;
    std::cout << "Ingrese su nombre completo (nombre y apellido): ";
    std::getline(std::cin, nombreCompleto);

    std::cout << "\nBuenos dias, mi nombre es: " << nombreCompleto;

    return 0;
}