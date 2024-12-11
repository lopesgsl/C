#include <stdio.h>

int main(){
    int num1, num2;

    printf("\n========== Qual numero e menor que??? ==========\n\n");

    printf("Digite o primeiro numero: ");
    scanf("%i", &num1);
    printf("Digite o segundo numero: ");
    scanf("%i", &num2);

    if(num1>num2){
        printf("O %i e maior que %i.\n", num1, num2);
    }
    else if (num1 == num2)
    {
        printf("Os dois numeros sao iguais.\n");
    }
    else
    {
        printf("O %i e maior que %i.\n", num2, num1);
    }
    
    return 0;
}