#include <stdio.h>

int main(){
    char *um_dez[] = {"zero","um","dois","tres","quatro","cinco","seis","sete","oito","nove","dez"};
    int num;

    printf("\n[[[[[[[[[ Numeros por extenso ]]]]]]]]]\n\n");

    printf("Digite um numero de 1 a 10: ");
    scanf("%i", &num);

    if (num >= 1 && num <=10)
    {
        printf("\nSeu numero por extenso e: %s", um_dez[num]);
    }
    else
    {
        printf("\nPreciso que o numero seja de  1 a 10....TENTE NOVAMENTE!!");
    }
    
    return 0;
}