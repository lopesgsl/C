/*132. Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N 
é o número de elementos impressos na primeira linha. No exemplo abaixo, foi 
considerado que N=5.
*****
****
 ***
 **
 **/
#include<stdio.h>

void main(){
    int tam;

    printf("\n              Piramides.\n\n");

    printf("Base da escada: ");
    scanf("%d", &tam);
    
    int linhas = tam;
    int tam2 = tam;

    for (int cont = 0; cont < linhas; cont++)
    {
        for (int i = 5; i < tam2; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < tam; i++)
        {
            printf("*");
        }
        printf("\n");
        tam--;
        tam2++;
    }
    
}