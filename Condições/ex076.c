#include <stdio.h>

int main(){
    int x,y;

    printf("\n[[[[[[[ Quadrante ]]]]]]]\n\n");

    printf("Digite a coordenada x: ");
    scanf("%i", &x);
    printf("Digite a coordenada y: ");
    scanf("%i", &y);

    if (x > 0 && y >0)
    {
        printf("\nO ponto pertence ao I quadrante.\n");
    }
    else if (x < 0 && y > 0)
    {
        printf("\nO ponto pertence ao II quadrante.\n");
    }
    else if(x < 0 && y < 0)
    {
        printf("\nO ponto pertence ao III quadrante.\n");
    }
    else if(x > 0 && y < 0)
    {
        printf("\nO ponto pertence ao IV quadrante.\n");
    }
    else if(x == 0 && y == 0)
    {
        printf("\nO ponto Esta na origem.\n");
    }
    else
    {
        printf("\nO ponto esta sobre um dos eixos.\n");
    }
    

    return 0;
}