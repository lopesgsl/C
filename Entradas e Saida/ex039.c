#include <stdio.h>

int main(){
    float kbs, kb; 
    int total, hr, min, sec;

    printf("\nPara saber enquanto tempo sua transferencia deve levar informe os dados a seguir.\n\n");

    printf("Tamanho do arquivo: Kb ");
    scanf("%f", &kb);
    printf("Velocidade da internet: Kb/s ");
    scanf("%f", &kbs);

    total = kb/kbs;

    hr = total/3600;
    min = (total%3600)/60;
    sec = total%60;

    printf("\nSeu arquivo sera baixado em %i horas %i min %i sec.", hr, min, sec);
    return 0;
}