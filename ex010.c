#include<stdio.h>

int main(void){
    int quilometro;
    printf("Informe a distancia percorrida(em km): ");
    scanf("%d", &quilometro);
    int segundo;
    printf("Informe o tempo gasto(em horas): ");
    scanf("%d", &segundo);
    int transforma = (quilometro / segundo) / 3.6;
    printf("A velocidade informada eh o mesmo que %dm/s", transforma);
}