#include <stdio.h>

int main(){
    float valor, pag;
    	printf("\n           -----Confirme o pagamento-----\n");
        printf("Seu pedido esta quase concluido....\n\n");

        printf("Valor do produto: R$");
        scanf("%f", &valor);
        printf("\n===Forma de pagamento===\n\n");
        printf("A vista = 1\nEm ate 3X = 2\nEm ate 10X = 3\n\n");
        printf("Selecione (1 a 3):");
        scanf("%f", &pag);

        if (pag == 1){
            printf("\nO valor total a vista e R$ %.2f(Desconto de 10%%)\n", valor-(valor*0.1));
        }
        if (pag == 2){
            printf("\nO valor total parcelado em 3X e R$ %.2f sendo cada parcela R$ %.2f", valor, valor/3);
        }
        if(pag == 3){
            printf("\nO valor total parcelado em 10X e de R$ %.2f(Taxa de 20%%) sendo cada parcela R$ %.2f", valor+(valor*0.2), (valor+(valor*0.2))/10);
        }
    return 0;
}