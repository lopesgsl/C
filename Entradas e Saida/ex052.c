#include <stdio.h>

int main(){
    int gb, valor;

    printf("\n###### Sua provedora de internet ######\n\n");

    printf("Dados acessados (GB): ");
    scanf("%i", &gb);

    if(gb <= 100){
        printf("Voce pagara os R$80,00 normalmente.");
    }

    valor = (gb-100)*5;

    printf("\nVoce pagara R$%i,00 neste mes.", valor+80);
    return 0;
}