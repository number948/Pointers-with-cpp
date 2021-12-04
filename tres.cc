// hacer una función y pasarle por parámetro un puntero a una lista.

// 

// 

#include <iostream>
#include<conio.h>



using namespace std;


void imprimeLista(int* lista){
    int size = sizeof(lista)/sizeof(lista[0]);
for (int i=0;i<=sizeof(*lista);i++){
    cout<<lista[i]<<endl;
}
    
}

int main(){
    

    int* lista = (int*)malloc(5+sizeof(int));
    lista[0] = 1;
    lista[1] = 1;
    lista[2] = 3;
    lista[3] = 3;
    lista[4] = 1;
    
    //int a = sizeof(lista);
    
    //cout<<a;

   imprimeLista(lista);



 return 0;
}

