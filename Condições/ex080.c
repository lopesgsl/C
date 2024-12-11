#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,delta, x1, x2;

    printf("\n---------- Equacao de segundo grau V2.0 ----------\n");
    printf("Preciso que voce me informe os coeficientes para saber resolver as raizes de uma equacao de segundo grau.\n\n");

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
            x1 = (-(b) + sqrt(delta)) / (2*a);
            x2 = (-(b) - sqrt(delta)) / (2*a);

            printf("O resultado dessas raizes e:\n\nx1 = %.2f\nx2 = %.2f", x1,x2);

    }
    else if (delta < 0)
    {
        printf("\nA equacao nao possui raizes reais.\n\n");
    }
    else
    {
        printf("\nA equacao possui duas raizes reais e iguais.\n\n");
            x2 = (-(b) - sqrt(delta)) / (2*a);
            x1 = (-(b) + sqrt(delta)) / (2*a);
    
            printf("O resultado dessas raizes e:\n\nx1 = %.2f\nx2 = %.2f", x1,x2);

    }

    return 0;
}