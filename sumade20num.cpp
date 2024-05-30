#include <iostream>
#include <vector>
int main() {
    const int MAX_NUMEROS = 20;
    std::vector<int> numeros;
    
    std::cout << "Ingrese numeros enteros (0 para terminar):";
    
    int numero;
    for (int i = 0; i < MAX_NUMEROS; ++i) {
        std::cout << "Numero " << i+1 << ": ";
        std::cin >> numero;
        
        if (numero == 0) {
            break;
        }
        
        numeros.push_back(numero);
    }
    
    std::cout << "Numeros en orden inverso y suma:";
    int suma = 0;
    for (int i = numeros.size() - 1; i >= 0; --i) {
        std::cout << numeros[i] << " ";
        suma += numeros[i];
    }
    
    std::cout << "\nSuma total: " << suma;
    
    return 0;
}