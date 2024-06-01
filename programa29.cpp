#include <iostream>
#include <string>

int main() {
    std::string nom;
    std::string cont;
    int intentos = 3;

    do {
        std::cout << "Introduce tu nombre: ";
        std::cin >> nom;

        std::cout << "Introduce tu contraseña: ";
        std::cin >> cont;

        if (nom == "Lilian" && cont == "2b38") {
            std::cout << "Bienvenido al sistema.";
            break;
        } else {
            intentos--;
            if (intentos > 0) {
                std::cout << "Nombre de usuario o contraseña incorrectos. Te quedan " << intentos << " intentos.";
            } else {
                std::cout << "Se ha superado el número de intentos permitido.";
                break;
            }
        }
    } while (intentos > 0);

    return 0;
}
