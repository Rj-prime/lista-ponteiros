#include<stdio.h>
#include<stdlib.h>

    int main(){
      int vet[] = {4,9,13};// Um vetor com cada elemento de suas colunas
      int i;
      for(i=0;i<3;i++){
      printf("%d ",*(vet+i)); //Ponteiro de " vet " acessa os conteudos de mem�ria.
      }                       //dentro desse loop � acrescido 4 bytes a frente, assim
                              //� mostrado respectivamente em ordem de cada conte�do do vetor.
    return 0;
    }

