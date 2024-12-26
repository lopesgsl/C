/*133. Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N 
é o número de elementos impressos na primeira linha. No exemplo abaixo, foi 
considerado que N=5.
*
**
***
****
******/
#include <stdio.h>

void main(){
    int tam;
    printf("\n          Piramedes v2.0\n\n");

    printf("Base da piramede: ");
    scanf("%d", &tam);

    int linhas = tam;
    for (int i = 0; i < linhas; i++)
    {
        for (int  k = tam-1; k < tam; k++)
        {
            printf("*");
        }
        printf("\n");
        tam++;
    }
    

}