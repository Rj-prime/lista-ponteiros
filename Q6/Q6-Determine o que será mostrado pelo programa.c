#include<stdio.h>
#include<stdlib.h>


int main(void){
    float vet[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");

    for(i = 0 ; i <= 4 ; i++){
        printf("\ni = %d",i); // Um cotador que vai de 0 at� 4 ao passo 1 de cada loop. Esta servindo como um organizador elecando os elementos do vetor
        printf("vet[%d] = %.1f",i, vet[i]);// Imprime o cada posi��o do vetor com seu respectivo valor n�merico
        printf("*(f + %d) = %.1f",i, *(f+i)); // *(f+1) vai apontado para cada endere�o do vetor a cada loop, revelando seu conte�do
        printf("&vet[%d] = %X",i, &vet[i]);// Aqui � revelado qual � o endere�o da mem�ria para elemento do vetor
        printf("(f + %d) = %X",i, f+i); // Acontece o mesmo da situa��o anterior pois o poteiro twem o mesmo endere�o de mem�ria do vetor

    }


return 0;
}
	
	//Resulado Impresso:
	// contador/valor/valor/endereco/endereco
/*	i = 0vet[0] = 1.1*(f + 0) = 1.1&vet[0] = 62FDF0(f + 0) = 62FDF0
	i = 1vet[1] = 2.2*(f + 1) = 2.2&vet[1] = 62FDF4(f + 1) = 62FDF4
	i = 2vet[2] = 3.3*(f + 2) = 3.3&vet[2] = 62FDF8(f + 2) = 62FDF8
	i = 3vet[3] = 4.4*(f + 3) = 4.4&vet[3] = 62FDFC(f + 3) = 62FDFC
	i = 4vet[4] = 5.5*(f + 4) = 5.5&vet[4] = 62FE00(f + 4) = 62FE00   */
	
	
	
	
	
