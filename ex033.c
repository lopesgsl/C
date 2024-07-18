#include <stdio.h>

int main(){
    int t;
    float c1,c2,c3;

    printf("\nPara difinir o novo prefeito da cidade informe a quantidade de votos de cada candidato.\n\n");

    printf("Candidato 1: ");
    scanf("%f", &c1);
    printf("Candidato 2: ");
    scanf("%f", &c2);
    printf("Candidato 3: ");
    scanf("%f", &c3);

    t=c1+c2+c3;

    c1 = c1/t;
    c2 = c2/t;
    c3 = c3/t;

    printf("\nNeste turno foram contados %i votos\nSendo que o primeiro candidato teve %.1f%%\nO segundo candidato teve %.1f%%\nE o terceiro canditado %.1f%%.", t, c1*100, c2*100, c3*100);

    return 0;
}