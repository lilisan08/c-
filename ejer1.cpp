#include <iostream> 
 int main(){
    //creamos el arreglo le damos un nombre y un tamaño de 5 posiciones 
    int num[5];
    //a cada posicionla damosun dato con el ciclo para
    for (int i=0; i < 5;i++){
        //pido los datos
        std::cout<<"Digite un numero para la posicion"<<i<<":";
        std::cin>>num[i];//capturo los numeros ingresados en la variable numero
    }
    //imprimimos los datos asignados con un siclo para
    for (int i=0; i < 5;i++){
        std::cout<< "el dato en la posicion "<<i<<"es :"<< num[i];
    }
    return 0;
 }