#include <stdio.h>

int main(){
    int num;
    int primo = 1;

    printf("\n< Numero primo >\n\n");

    printf("Digite um numero: ");
    scanf("%i", &num);

    if (num <= 1) {
        printf("\nEste numero nao e primo.");
    } else if (num == 2 || num == 3) {
        printf("\nEste numero e primo.");
    } else {
        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                primo = 0;
                break;
            }
        }
        if (primo)
        {
            printf("\nEste numero e primo.\n");
        }
        else
        {
            printf("\nEste numero nao e primo.\n");
        }
    }
    return 0;
}