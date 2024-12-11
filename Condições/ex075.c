#include <stdio.h>

int main(){
    float tr1, tr2, tr3;

    printf("\n{{{{{{ Triangulo retangulo }}}}}}\n");
    printf("Entregue 3 angulos para indentificar um triangulo retangulo.\n\n");

    printf("Digite um angulo: ");
    scanf("%f", &tr1);
    printf("Digite um angulo: ");
    scanf("%f", &tr2);
    printf("Digite um angulo: ");
    scanf("%f", &tr3);

    if (tr1+tr2+tr3 != 180)
    {
        printf("\nISTO N E UM TRIANGULO.\n");
        return 1;
    }
    else
    {
        if ((tr1 == 90 && tr2 < 90 && tr3 < 90) || (tr2 == 90 && tr1 < 90 && tr3 < 90) || (tr3 == 90 && tr1 < 90 && tr2 < 90))
        {
            printf("\nSeu triangulo e um triangulo retangulo.\n");
        }
        else
        {
            printf("\nSeu triangulo n e triangulo retangulo.\n");
        }
    }
    
    return 0;
}