/*142. O Banco do Povo está realizando uma grande promoção em seus financiamentos. Ele 
financia qualquer valor em até 240 prestações. O valor da primeira prestação 
corresponde ao valor do empréstimo dividido pelo número de parcelas. Os valores 
das demais prestações correspondem ao valor da parcela anterior acrescido de uma 
taxa de juros de 7%. Escreva um programa que leia o valor a ser financiado por um 
cliente e o número de prestações desejadas e calcule: o valor de cada prestação, o 
valor total que o cliente vai pagar pelo empréstimo e a diferença entre o valor a ser 
pago e o valor financiado. */
#include <stdio.h>
#include <windows.h>


void main(){
    int prest;
    float valor, valor_total = 0, valor_ant;
    printf("\n            Sistema de financiamento\n\n");

    //Entrada de dados
    printf("Digite o valor do emprestimo: R$");
    scanf("%f", &valor);
    do
    {
        printf("Digite a quantidade de parcelas (MAX: 240): ");
        scanf("%d", &prest);
    } while (prest > 240);

    //1° prestações 
    valor_ant = valor/prest;
    valor_total += valor_ant;

    printf("1 prestacao: R$%.2f\n", valor_ant);
    //Valor das demais e o total
    for (int i = 2; i <= prest; i++)
    {
        valor_ant += valor_ant*0.07;
        valor_total += valor_ant;
        printf("%d prestacao: R$%.2f\n", i, valor_ant);
        Sleep(250);
    }
    
    printf("\nO valor total que voce devera pagar e: R$%.2f", valor_total);

}