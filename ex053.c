#include <stdio.h>

int main(){
    int ano, mes, pena_ano, pena_mes, ano_final, mes_final, total;

    printf("\n_-_-_-_Penitenciaria_-_-_-_\n");

    printf("Calculadora penal.\n\n");
    printf("Ano que ira preso: ");
    scanf("%i", &ano);
    printf("Mes que ira preso: ");
    scanf("%i", &mes);

    printf("\nAgora informe a quantidade de anos e meses a comprir.\n");
    printf("Anos: ");
    scanf("%i", &pena_ano);
    printf("Meses: ");
    scanf("%i", &pena_mes);

    total = pena_ano*12+pena_mes;
    ano_final = (total+ano)/12;
    mes_final = (total+mes)%12;

    printf("\nO detento deve ser liberado na data de %02i/%i.", mes_final, ano_final);


    return 0;
}