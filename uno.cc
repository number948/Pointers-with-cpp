#include <iostream>
#include<conio.h>

using namespace std;

int main(){

    char *apuntador;

    char letra = 'a';

    apuntador = &letra;

    *apuntador = 'x';

    
    cout<<apuntador;
    //cout<<*apuntador;
    //cout<<letra;
    

}
