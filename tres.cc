// hacer una función y pasarle por parámetro un puntero a una lista.
#include <iostream>
#include<conio.h>
#include<list>

using namespace std;


void imprimeLista(int* lista){
for (int i=0;i<5;i++){
    cout<<lista[i]<<endl;
}
    
}




int main(){
    

    int* lista = (int*)malloc(5+sizeof(int));
    lista[0] = 1;
    lista[1] = 1;
        lista[2] = 1;
            lista[3] = 1;
                lista[4] = 1;

   imprimeLista(lista);

 return 0;
}

