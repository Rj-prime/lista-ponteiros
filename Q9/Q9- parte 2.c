#include<stdio.h>
#include<stdlib.h>

int main(){

  int vet[] = {4,9,13};
  int i;
  for(i=0;i<3;i++){
  printf("%X ",vet+i);// Aqui � impresso os blocos de mem�ria do vetor
  }                   // a cada loop � variado 4 bytes por se tratar de uma vari�vel int.

  return 0;
}

