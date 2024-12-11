#include <stdio.h>

int main(){
    float a,b,c,delta;

    printf("\n---------- Equacao de segundo grau V1.0 ----------\n");
    printf("Preciso que voce me informe os coeficientes para saber a quantidade de raizes de uma equacao de segundo grau.\n\n");

    printf("Digite o coeficientes A: ");
    scanf("%f", &a);
    printf("Digite o coeficientes B: ");
    scanf("%f", &b);
    printf("Digite o coeficientes C: ");
    scanf("%f", &c);

    delta = (b*b) - (a*4*c);

    if (delta > 0)
    {
        printf("\nA equacao possui duas raizes reais e distintas.\n\n");
    }
    else if (delta < 0)
    {
        printf("\nA equacao nao possui raizes reais.\n\n");
    }
    else
    {
        printf("\nA equacao possui duas raizes reais e iguais.\n\n");
    }

    return 0;
}