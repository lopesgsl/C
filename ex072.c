#include <stdio.h>

int main(){
    float sal, entrada;
    float tempo;

    printf("\n++++++++++ Finaciamento do carro (V.2.0) ++++++++++\n\n");
    
    printf("Digite seu salario: R$");
    scanf("%f", &sal);
    printf("Valor da entrada do carro: R$");
    scanf("%f", &entrada);

    tempo = entrada/(sal*0.25);
    int tempo_ano = tempo/12;
    int tempo_mes = tempo-(tempo_ano*12);

    if (tempo/12 < 1)
    {
        tempo_ano = 0;
    }
    

    printf("Com apenas 25%% (R$%.2f)de seu salario mensal para dar entrada em veiculo de R$%.2f sera necessario ", sal*0.25, entrada);

   switch (tempo_ano)
   {
   case 0:
        break;

   case 1:
        printf("1 ano ");
        break;

   default:
        printf("%i anos ", tempo_ano);
        break;
   }

    switch (tempo_mes)
    {
    case 0:
        break;

    case 1:
        printf("1 mes.\n");
        break;

    default:
        printf("%i meses.\n", tempo_mes);
        break;
    }


    return 0;
}