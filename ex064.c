#include <stdio.h>

int main(){
    int num;

    printf("\n-_-_-_- Negativo ou positivo? (ou nenhum dos dois) _-_-_-\n");
    
    printf("Primeiro digite um numero: ");
    scanf("%i", &num);
    if (num == 0)
    {
        printf("\nSeu numero e neutro.\n");
    }
    else if (num > 0)
    {
        printf("\nSeu numero e positivo.\n");
    }
    else
    {
        printf("\nSeu numero e negativo.\n");
    }
    
    return 0;
}