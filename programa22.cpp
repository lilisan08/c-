#include <iostream>

int main() {
    int hora;
    std::cout << "Escribe la hora del día: ";
    std::cin >> hora;
    
    if (hora < 12) {
        std::cout << "Buenos días";
    } else {
        std::cout << "Buenas tardes";
    }
    
    return 0;
}

