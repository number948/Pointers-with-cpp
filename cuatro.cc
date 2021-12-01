// verificar si un numero es par o impar usando punteros e imprimir su d dirección de memoria.

#include <iostream>
#include<conio.h>

using namespace std;

int main(){
    int numero, *dir_numero;

    cout<<"Ingrese un numero: "<<endl; cin>>numero;

    dir_numero = &numero; //guarda posicion de memomia de variable numero

    if(*dir_numero%2 == 0){
        cout<<"el numero"<<*dir_numero<<"es par"<<endl;
        cout<<"Posicion de memoria"<<dir_numero<<endl;
    }
    else{
        cout<<"el numero"<<*dir_numero<<"es impar"<<endl;
        cout<<"Posicion de memoria: "<< dir_numero<<endl;
    }


    return 0;
}