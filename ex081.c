#include <stdio.h>
#include <math.h>

int main(){
    float x1,y1,x2,y2,raio,dis;

    printf("                                        O ponto esta dentro da circuferencia???\n");
    printf("Este programa ira analisar um ponto e verificar se este ponto esta localizado dentro de uma circunferencia, \n");
    printf("mas antes preciso que me informe os siguintes dados da circunferencia.\n\n");

    printf("[ Coordenadas X e Y do centro da circuferencia e seu raio ]\n");
    printf("Coordenadas X: ");
    scanf("%f", &x1);
    printf("Coordenadas Y: ");
    scanf("%f", &y1);
    printf("Raio: ");
    scanf("%f", &raio);

    printf("\n[ Coordenadas X e Y do ponto desejado ]\n");
    printf("Coordenadas X: ");
    scanf("%f", &x2);
    printf("Coordenadas Y: ");
    scanf("%f", &y2);

    dis = sqrt((pow((x1 - x2), 2) + pow((y1 - y2), 2)));

    if (dis < raio)
    {
        printf("\nO ponto esta dentro a circunferencia.\n");
    }
    else if (dis ==  raio)
    {
        printf("\nO ponto esta sobre a circunferendcia.\n")
    }
    else{
        printf("\nO ponto esta fora circunferencia.\n");
    }

    return 0;
}