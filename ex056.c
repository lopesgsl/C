#include <stdio.h>
#include <string.h>

int main(){
    char alfa[] = {"abcdefghijklmnopqrstuvwxyz"};
    char cifra;
    char cripto;
    char no_cripto;

    printf("\n                  ==========Cifra de Cezar==========\n");
    printf("       Este programa ira criar uma cifra de cezar e vai entregar qualquer letra criptografada\n\n");

    printf("Qual e o caractere principal?: ");
    scanf(" %c", &cifra);
    printf("Qual sua contraparte criptografada?: ");
    scanf(" %c", &cripto);

    char *ptr_cifra = strchr(alfa, cifra);
    char *ptr_cripto = strchr(alfa, cripto);
    
    int pos_cifra = ptr_cifra - alfa;
    int pos_cripto = ptr_cripto - alfa;

    int pos = pos_cripto - pos_cifra;

    printf("Deseja saber a contraparte de qual letra?: ");
    scanf(" %c", &no_cripto);

    char *ptr_no_cripto = strchr(alfa, no_cripto);

    int pos_no_cripto = ptr_no_cripto - alfa;
    int pos_yes_cripto = (pos_no_cripto + pos)%26;

    if (pos_yes_cripto > 26) pos_yes_cripto -= 26;
    
    char yes_cripto = alfa[pos_yes_cripto];

    printf("\nA contra parte criptografada de '%c' e '%c'.", no_cripto, yes_cripto, pos_yes_cripto);

    return 0;
}