/*140. Escreva um programa que leia vários números inteiros e calcule a média dos 
números pares e a média dos números ímpares. O processamento deverá ser 
encerrado quando for lido o valor 0, que não deverá ser processado. */
#include <stdio.h>

void main(){
    int num, par, impar;
    int cont_par = 0, cont_impar = 0;
    printf("\n{{{{{{{  Media de numeros pares ou impares  }}}}}}}\n");
    printf("Para encerrar a entrada de dados digite 0.\n\n");

    while (num > 0)
    {
        printf("Digite um numero: ");
        scanf("%d", &num);

        if (num%2 == 0)
        {
            cont_par++;
            par += num;
        }
        else if (num%2 == 0)
        {
            cont_impar++;
            impar += num;
        }
    }
    
    printf("A media dos numeros pares foi: %d", par/cont_par);
    printf("A media dos numeros impares foi: %d", impar/cont_impar);
}