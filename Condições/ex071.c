#include <stdio.h>

int main(){
    int num1, num2, num3;

    printf("\n//////// O maior numero ///////\n");

    printf("Digite um numero: ");
    scanf("%i", &num1);
    printf("Digite um numero: ");
    scanf("%i", &num2);
    printf("Digite um numero: ");
    scanf("%i", &num3);

    printf("A ordem do maior ao menor e ");
    if (num3 > num2 && num2 > num1)
    {
        printf("%i > %i > %i", num3, num2, num1);
    }
    else if (num3 > num1 && num1 > num2)
    {
        printf("%i > %i > %i", num3, num1, num2);
    }
    else if (num2 > num1 && num1 > num3)
    {
        printf("%i > %i > %i", num2, num1, num3);
    }
    else if (num2 > num3 && num3 > num1)
    {
        printf("%i > %i > %i", num2, num3, num1);
    }
    else if(num1 > num2 && num2 > num3)
    {
        printf("%i > %i > %i", num1, num3, num2);
    }
    else
    {
        printf("%i > %i > %i", num1, num2, num3);
    }
    

    return 0;
}