#include <stdio.h>

int main(){
    float x,y, reta;

    printf("\n{{{{{{{{ Pertence a reta? }}}}}}}}\n");
    printf("Informe qualquer ponto (x,y) para saber se este ponto pertence a reta y = 2x +1.\n\n");

    printf("Digite o X: ");
    scanf("%f", &x);
    printf("Digite o Y: ");
    scanf("%f", &y);

    reta = (2*x)+1;

    if (reta == y)
    {
        printf("\nEste ponto pertence a reta.\n");
    }
    else{
        printf("\nEste ponto n pertence a reta.\n");
    }

    return 0;
}