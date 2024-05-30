#include <iostream>
#include <string>
using namespace std;

int calcularTotal(int cantidad, int precioUnitario) {
    int total = 0;
    if (cantidad >= 0 && precioUnitario >= 0) {
        total = cantidad * precioUnitario;
    }
    return total;
}

int main() {
    string n, contra;
    int precioUnitario, cantidad;
    int intentos = 3;
    int total = 0;
    do {
        cout << "Introduce tu nombre de usuario: ";
        cin >> n;
        cout << "Introduce tu contraseña:";
        cin >> contra;
        if (n == "lilian" && contra == "2b38") {
            cout << "Bienvenido al sistema.\n";
            break;
        } else {
            intentos--;
            if (intentos > 0) {
                cout << "Nombre de usuario o contraseña incorrectos. Te quedan " << intentos << " intentos.\n";
            } else {
                cout << "Se ha superado el número de intentos permitido.\n";
                return 1;
            }
        }
    } while (intentos > 0);

    cout << "Para terminar, introduce la cantidad de 0.\n\n";
    while (true) {
        cout << "Ingresa la cantidad de los artículos: ";
        cin >> cantidad;
        if (cantidad == 0) {
            break;
        }
        cout << "Ingresa el precio unitario del artículo: ";
        cin >> precioUnitario;
        if (cantidad < 0 || precioUnitario < 0) {
            cout << "Lo siento, las cantidades no pueden ser negativas. Ingresa otra cantidad.\n\n";
        } else {
            total += calcularTotal(cantidad, precioUnitario);
        }
    }
    cout << "El total de los productos es de " << total << " pesos.\n";
    return 0;
}
