#include <stdio.h>

int main(){
    int num1, num2, num3, mmc = 1;

    printf("\n                MMC(Minimo multiplo comum)\n\n");
    
    printf("Digite um numero: ");
    scanf("%d", &num1);
    printf("Digite outro numero: ");
    scanf("%d", &num2);
    printf("Digite outro numero: ");
    scanf("%d", &num3);

    for(int i = 2;num1 > 1 || num2 > 1 || num3 > 1;)
    {
        //condição para verifica se realmente aconteceu uma divisão
        if (num3 % i == 0 || num2 % i == 0 || num1 % i == 0)
        {
            printf("\n%d, %d, %d| %d", num1, num2, num3, i);
            mmc *= i;
        }
        //dividir
        if (num1 % i == 0){
            num1/=i;
        }
        if (num2 % i == 0){
            num2/=i;
        }
        if (num3 % i == 0){
            num3/=i;
        }

        if (num1 % i != 0 && num2 % i != 0 && num3 % i != 0)
        {
            i++;
        }
    }

    printf("\n1, 1, 1| \nMMC: %d", mmc);
    return 0;
}