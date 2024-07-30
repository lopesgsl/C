#include <stdio.h>

int main(){
    float tr1, tr2, tr3;

    printf("\n<<<<<Triangulo>>>>>\n");
    printf("Vamos descobrir se um triangulo e equilatero, isosceles ou escaleno.\n\n");
    
    printf("Digite uma lado do triangulo: ");
    scanf("%f", &tr1);
    printf("Digite uma lado do triangulo: ");
    scanf("%f", &tr2);
    printf("Digite uma lado do triangulo: ");
    scanf("%f", &tr3);

    if (tr1 != tr2 && tr2 != tr3 && tr3 != tr1)
    {
        printf("\nEste triangulo e escaleno.\n");
    }
    else if (tr1 == tr2 && tr2 == tr3)
    {
        printf("\nEste triangulo e equilatero.\n");
    }
    else if (tr1 == tr2 || tr2 == tr3 || tr3 == tr1)
    {
        printf("\nEste triangulo e isosceles.\n");
    }

    return 0;
}