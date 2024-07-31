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
    float tempo_mes = tempo-(tempo_ano*12);

    if (tempo/12 < 1)
    {
        tempo_ano = 0;
    }
    

    printf("Com apenas 25%% (R$%.2f)de seu salario mensal para dar entrada em veiculo de R$%.2f sera necessario ", sal*0.25, entrada);
    
if (tempo_ano == 1)
{
    printf("1 ano ");
}
else if (tempo_ano > 1)
{
    printf("%i anos ", tempo_ano);
}

if (tempo_mes == 1)
{
    printf("1 mes.\n");
}
else if (tempo_mes > 1)
{
    printf("%.0f meses.\n");
}
else
{
    printf(" menos de 1 mes");
}

    return 0;
}