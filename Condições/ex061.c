#include <stdio.h>

int main(){
    int num;
    printf("\n[[[[[[[[ Descobrindo o valor absoluto ]]]]]]]]\n\n");

    printf("Digite um numero: ");
    scanf("%i", &num);

    if (num<0)
    {
        num = num * -1;
    }
    
    printf("O valor absoluto de seu numero e %i.\n", num);


    return 0;
}