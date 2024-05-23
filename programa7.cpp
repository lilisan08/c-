#include <iostream>
int main()
{
    char l;
    std::cout << "ingresa una letra";
    std::cin >> l;
    switch(l)
    {
    case 'a':case 'A':
    case 'e':case 'E':
    case 'i':case 'I':
    case 'o':case 'O':
    case 'u':case 'U':
        std::cout << "es una vocal: " << l << std::endl;
        break;
    default:
        std::cout << "no es un vocal: " << l << std::endl;
    }
    return 0;
}

