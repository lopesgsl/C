/*Escreva um programa que leia vários itens de uma compra feita pelo usuário. Para 
cada item, o usuário deve informar o seu nome, o seu preço unitário e a quantidade 
comprada. Após cada leitura, o programa deve perguntar ao usuário se ele deseja 
adicionar um novo item ou fechar a conta. O programa deve considerar que o 
usuário irá digitar pelo menos um item. Após terminar a leitura, o programa deve 
mostrar o valor da conta à vista e o valor da conta a prazo. O valor da conta a prazo 
corresponde à soma do valor total de cada item digitado pelo usuário. O valor da 
conta à vista corresponde ao valor da conta a prazo com um desconto de 15%. */
#include <stdio.h>
#include <conio.h>

void main(){
    float quant, preco = 0, valor = 0;
    int fecha = 2, forma_pag;
    char nome[99];

    printf("\n                Fechamento da conta\n\n");

    do
    {
        printf("\nDigite o nome do produto: ");
        scanf("%s", nome);

        printf("\nDigite o valor do produto: R$");
        scanf("%f", &preco);
        printf("\nDigite a quantidade do produto: ");
        scanf("%f", &quant);

        valor += preco*quant;

        printf("\nDeseja adicionar mais um item? [Sim = 1 ou Nao = 2]: ");
        scanf("%d", &fecha);
    } while (fecha != 2);

    printf("\n\nQual sera a forma de pagamento?\nA vista = 1\nA prazo = 2\nDigite aqui: ");
    scanf("%d", &forma_pag);
    if (forma_pag == 1)
    {
        float valor_vista = valor - (valor*0.15);
        printf("O valor da conta a vista ficou por R$%.2f.", valor_vista);
    }
    else{
        printf("O valor da conta a prazo ficou por R$%.2f.", valor);
    }

    getch();
}