#include <stdio.h>
#include <math.h>

int main(){
    int xa, ya, xb, yb;
    float dis;

    printf("=========Distancia entre dois pontos=========\n");
    printf("Irei utilizar a distancia euclidiana para solucionar esse problema\n\n");

    printf("----------Coordenadas do ponto P----------\n");
    printf("Digite a coordenada X: ");
    scanf("%i", &xa);
    printf("Digite a coordenada Y: ");
    scanf("%i", &ya);

    printf("----------Coordenadas do ponto Q----------\n");
    printf("Digite a coordenada X: ");
    scanf("%i", &xb);
    printf("Digite a coordenada Y: ");
    scanf("%i", &yb);

    dis = sqrt(((xb-xa)*(xb-xa))+((yb-ya)*(yb-ya)));

    printf("A distancia entre os dois pontos e %.2f", dis);

    return 0;
}