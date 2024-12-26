/*152. A matemática prova que números inteiros podem ser representados de maneira 
única como um produto de potências de números primos distintos. Este produto é 
chamado de decomposição em fatores primos do número e os expoentes são 
chamados de multiplicidade do primo respectivo. Por exemplo, 360 = 23x32x5 e 21 = 
3X7. Com base nessas informações, escreva um programa em pascal que obtenha a 
decomposição em fatores primos de um número inteiro positivo informado pelo 
usuário. */
#include <stdio.h>
#include <conio.h>

void main(){
    int num, fator = 2;

    printf("\n--------Multiplicador do primo respectivo.--------\n\n");

    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("%d = ", num); 

    do
    {
        if (num%fator == 0)
        {
            num /= fator;
            printf(" %d ", fator);
            if (num != 1)
            {
                printf("*");
            }
        }
        else{
            fator++;
        }
    } while (num != 1);

    getch();
}