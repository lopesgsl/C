#include <stdio.h>

int main(){
    float num_pares =0, num_impa = 0, pares = 0, impares = 0;
    int num;

    printf("\n                  Media aritmetica.\n\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero: ");
        scanf("%d", &num);

        if (num%2 == 0)//par
        {
            num_pares+=num;
            pares++;
        }
        else{//impar
            num_impa+=num;
            impares++;
        }   
    }
    
    printf("\nA media aritmetica dos numeros pares e: %.1f", num_pares/pares);
    printf("\nA media aritmetica dos numeros impares e: %.1f", num_impa/impares);

    return 0;
}