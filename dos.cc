#include <iostream>
#include<conio.h>

using namespace std;

int main(){

    int num;

    int *dir_num;


    num = 20;
    dir_num= &num;

    cout<<"numero: "<<*dir_num<<endl; // arroja lo que guarda esa posición de memoria
    cout<<"direccion de memoria: "<<dir_num<<endl;//arroja la dirección de memoria
    
}