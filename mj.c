#include <stdio.h>

int main(){
    int num[7], copy[7];

    for (int i = 0; i <= 6; i++)
    {
    	printf("Digite um numero: ");
        scanf("%i", &num[i]);
    }
    
    for (int t = 0; t < 7; t++)
    {
        printf("%i ", num[t]);
    }
    
    return 0;
}