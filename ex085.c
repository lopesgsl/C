#include <stdio.h>
#include <string.h>

int main(){
    char operado[3];
    int num1, num2;

    printf("\n-_-_-_- Calculadora V2.0 -_-_-_-\n\n");

    printf("Digite um numero: ");
    scanf("%i", &num1);
    printf("Digite um numero: ");
    scanf("%i", &num2);

    printf("\nAgora o operador (+, -, *, /): ");
    scanf("%s", &operado);

    if (strcmp(operado, "+") == 0)
    {
        printf("\n%i + %i = %i\n\n", num1,num2,num1+num2);
    }
    else if (strcmp(operado, "-") == 0)
    {
        printf("\n%i - %i = %i\n\n", num1,num2,num1-num2);
    }
    else if (strcmp(operado, "/") == 0)
    {
        printf("\n%i / %i = %i\n\n", num1,num2,num1/num2);
    }
    else if (strcmp(operado, "*") == 0)
    {
        printf("\n%i * %i = %i\n\n", num1,num2,num1*num2);
    }
    else
    {
        printf("\nPorfavor digite um operador compativel...%s\n", operado);
    }
    

    return 0;
}