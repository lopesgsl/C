#include <stdio.h>

int main(){
    int convidados;
    float kg;

    printf("\n-----Gestão de convidados-----\n");

    printf("Quantidade de convidados: ");
    scanf("%i", &convidados);

    kg = (convidados*250)/1000;

    printf("E necessario no total %.2f Kilos de carne para um bom churrasco.\n", kg);

    return 0;
}