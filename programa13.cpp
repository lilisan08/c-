#include <iostream>
using namespace std;
int main() {
    int x;

    cout << "Ingresa un número: ";
    cin >> x;

    if (x % 2 == 0) {
        cout << "El número " << x << " es par";
    } else {
        cout << "El número " << x << " no es par";
    }

    if (x % 3 == 0) {
        cout << "El número " << x << " es divisible de 3";
    } else {
        cout << "El número " << x << " no es divisible de 3";
    }

    return 0;
}