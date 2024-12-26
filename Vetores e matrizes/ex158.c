#include <stdio.h>
#include <conio.h>

const int TAM = 10;

void main(){
    int num[TAM], media, soma = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
        soma += num[i];
    }
    
    media = soma/TAM;

    printf("Os numeros maiores que a media %d foi: ", media);
    for (int i = 0; i < 10; i++)
    {
        if (num[i] > media)
        {
            printf("%d ", num[i]);
        }
    }
    

    getch();
}