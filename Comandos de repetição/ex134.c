/*134. Escreva um programa que leia um número inteiro N e imprima a figura abaixo, onde N 
é o número de elementos impressos na primeira linha. No exemplo abaixo, foi 
considerado que N=5.
*****
****
***
**
**/

#include <stdio.h>

void main(){
    int tam;
    printf("\n          Piramedes v3.0\n\n");

    printf("Base da piramede: ");
    scanf("%d", &tam);

    int linha = tam;
    for (int i = 0; i < linha; i++)
    {
        for (int i = 0; i < tam; i++)
        {
            printf("*");
        }
        printf("\n");
        tam--;
    }
}