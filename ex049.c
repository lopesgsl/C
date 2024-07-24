#include <stdio.h>

int main(){
    float car;

    printf("\n<<<<<Revendedora gravel>>>>>\n");
    printf("Nossa revendedora esta em uma super oferta retirando a taxa de IPI de 20%%\n\n");

    printf("Valor do carro: R$");
    scanf("%f", &car);

    car = car+(car*0.17)+(car*0.2);

    printf("\nO valor do seu carro nesta oferta e de R$%.2f.", car);

    return 0;
}