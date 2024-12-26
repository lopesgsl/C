#include <stdio.h>
#include <conio.h>

void main(){
    int num[10];

    printf("\n               Vertores\n\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }
    printf("\nOs numeros da lista em ordem: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", num[i]);
    }
    
    getch();
}