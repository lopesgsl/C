#include <stdio.h>

int main(){
    float valor, milhas, new_milhas, new_valor;

    printf("\n:::::::::: AeroPorto Milhas ::::::::::\n");
    printf("Nosso aeroporto aceita passagens pagas 100%% apenas com milhas (Esse sistema e de uso exclusivo de funcionarios).\n\n");
    
    printf("Valor de uma passagem em Reais: R$");
    scanf("%f", &valor);
    printf("Valor da mesma passagem em milhas: ");
    scanf("%f", &milhas);
    printf("\nAgora o valor da passagem desejada: R$");
    scanf("%f", &new_valor);

    new_milhas = (new_valor*milhas)/valor;

    printf("E necessario no total %.2f milhas para uma passagem de R$%.2f.", new_milhas, new_valor);

    return 0;
}