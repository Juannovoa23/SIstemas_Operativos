/*********************************************
*
* Autor: JUAN NOVOA 
* Fehca:  15 AGOSTO 2023
* Materia: SIS OPERATIVOS
* Tema: MEMORIA , ACCESO 
* Tópico: MULTIPLICIACION DE MATRICES
*
*********************************************/



#include <stdio.h>
#include <math.h>
#include <stdlib.h>



int main(){
  int n = 3;
  int size = n*n;
  int mA[size];
  int mB[size];    
  int mC[size];  
  
  /* Incialiación*/
  for(int i=0; i<size; i++){
    mA[i] = 2;
    mB[i] = 1;
    mC[i] = 0;
  }
  /* impresion*/
    
    for(int i=0; i<size ; i++){
      if(i%n==0)
        printf("\n");
      printf("%d", mA[i]);
    }
  
  
      printf("\n\n\n.... fin de Ma\n");

  
  
  for(int i=0; i<size ; i++){
      if(i%n==0)
        printf("\n");
      printf("%d", mB[i]);
    }
  
      printf("\n\n\n.... fin de mB\n");

  
  for(int i=0; i<size ; i++){
      if(i%n==0)
        printf("\n");
      printf("%d", mC[i]);
    }
    
    printf("\n\n\n.... fin de mC\n");
      
      return 0;
    
    
    
}

