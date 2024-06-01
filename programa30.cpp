#include <iostream>

int main() {
    float producto, unidad, subtotal, precio, descuento, iva, total;

    std::cout << "Ingrese la cantidad de unidades: ";
    std::cin >> unidad;

    std::cout << "Ingrese el precio: ";
    std::cin >> precio;

    subtotal = unidad * precio;

    if (subtotal < 1000) {
        descuento = subtotal * 0;
        std::cout << "El descuento es: " << descuento;
    } else if (subtotal > 1000 && subtotal <= 2000) {
        descuento = subtotal * 0.1;
        std::cout << "El descuento es: " << descuento;
    } else if (subtotal > 2000 && subtotal <= 3000) {
        descuento = subtotal * 0.2;
        std::cout << "El descuento es: " << descuento;
    } else if (subtotal > 3000) {
        descuento = subtotal * 0.3;
        std::cout << "El descuento es: " << descuento;
    }

    iva = subtotal * 0.16;
    std::cout << "El IVA es de: " << iva;

    total = subtotal - descuento + iva;
    std::cout << "El total es: " << total;

    return 0;
}



