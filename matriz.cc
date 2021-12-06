// hacer una matriz dinamica de tamaño 2x2 con malloc

#include<stdio.h>
#include<stdlib.h>
#include<iostream>

using namespace std;


// falya imprimir en forma de matriz, realizar mas tareitas con matrices

int main(){
  
  int filas = 2, columnas = 2;

  int **matrix=(int **)malloc(sizeof(int *)*filas);

  for(int i; i<filas; i++){
      matrix[i] = (int *)malloc(sizeof(int*)*columnas);

  }
  for(int i = 0; i< filas; i++){
      for (int j = 0; j < columnas; j++){
          matrix[i][j] = 0;
      }
}

    
    for(int i=0;i<filas;i++){
        cout << endl;
        for(int j = 0; j<columnas;j++){
            cout<<matrix[i][j]<<' ';
            
        }
    }


    //cout<<matrix[0][1];
  
    return 0;
}
