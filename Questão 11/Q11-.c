#include<stdio.h>
#include<stdlib.h>

 int main (){

    float aloha[10], coisas[10][5], *pf, value = 2.2;
    int i=3;

    aloha[2] = value;// V�LIDO

    scanf("%f", &aloha);// V�LIDO- PR�M � PASSIVEL DE ACARRETAR LIXO DE MEM�RIA

    //aloha = "value"; // INV�LIDO- Creio que tenha sido proposital colocar o value entre parentese. Logo, ALOHA � UM FLOAT N�O UM CHAR.

    printf("%f", aloha);// V�LIDO

    coisas[4][4] = aloha[3];// V�LIDO

    //coisas[5] = aloha;// INV�LIDO- N�O SE TEM COMO ATRIBUIR UMA VARI�VEL A UM VETOR

    //pf = value;// INV�LIDO- P COMO PONTEIRO RECEBE VALORES DO TIPO INTEIRO

    pf = aloha;// V�LIDO

return 0;
 }
