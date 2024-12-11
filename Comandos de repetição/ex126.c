/*126. Escreva um programa que leia o termo inicial e a razão de uma PA e, a seguir, leia um 
número N e verifique se o número N pertence à progressão. */
#include <stdio.h>

int main(){
    int ti, razao, n, pertence;

    printf("\n                    Numero pertecente a P.A\n\n");

    printf("Termo inicial: ");
    scanf("%d", &ti);
    printf("Razao: ");
    scanf("%d", &razao);

    printf("Qual nunero voce deseja saber que se  pertence a P.A: ");
    scanf("%d", &n);

    for (int i = ti; i <= n; i += razao) {
        if (i == n) {
            pertence = 1;
            break;
        }
    }

    if (pertence) {
        printf("\nO numero %d pertence sim à P.A citada.\n", n);
    } else {
        printf("\nO numero %d nao pertence à P.A citada.\n", n);
    }

    return 0;
}