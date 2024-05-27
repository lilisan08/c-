#include <iostream> 
#include <vector>
#include <string>
int main(){
    int n;
    //pedios el numero de posiciones o tamaño
    std::cout<< "digite el numero de posiciones: ";
    std::cin>> n;
    //creamos el arreglo le damos un nombre y le pasamos el tamaño ingresado 
    std::vector<std::string> personas(n);
    //a cada posicion le damosun dato con el ciclo para
    for (int i=0; i<n; ++i){
        std::cout<<"Digite un nombre para la posicion"<<i<<"es: "<<personas[i];
    } 
    return 0;
}