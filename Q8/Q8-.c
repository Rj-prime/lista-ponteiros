#include<stdio.h>
#include<stdlib.h>

int main(){

    int mat[4], *p, x;

    printf ("p = mat + 1 --> %d",p = mat + 1 );//6422288 V�LIDA// P recebe o endere�o do segunda coluna do vetor
    //printf ("\np = mat` --> %d",p = mat` );//INV�LIDA - O programa n�o compila pois h� um carctere n�o declarado no caso o `.
    //printf ("p = `mat + 1 --> %d",p = `mat ); //INV�LIDA- A mesma situa��o.
    //printf ("\nx = (*mat) --> %d", x = (*mat) );` // INV�LIDA- Mesma situa��o.

return 0;
}
