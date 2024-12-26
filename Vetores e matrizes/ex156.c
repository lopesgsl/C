#include <stdio.h>
#include <conio.h>

void main(){
    int num[10], n;

    printf("\n        Numeros maiores de N\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &num[i]);
    }

        printf("Digite o valor de N: ");
        scanf("%d", &n);


    printf("Os numero maiores de %d eh: ", n);
    for (int i = 0; i < 10; i++)
    {
        if (num[i] > n)
        {
            printf("%d ", num[i]);
        }    
    }
    
    getch();

}