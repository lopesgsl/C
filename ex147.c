/*147. Escreva um programa que imprima todos os palíndromos existentes no intervalo 
[1000, 9999]. Um número é palíndromo quando o seu valor lido da esquerda para a 
direita é idêntico ao valor lido da direita para a esquerda. Exemplos: 1001, 2002, 
1221, 8888.*/
#include <stdio.h>

void main(){
    int uni,dez,cen,mil;

    printf("\nTodos os palindromos [1000, 9999]\n\n");

    for (int i = 1000; i <= 9999; i++)
    {
        mil = i/1000;
        cen = i/100%10;
        dez = i/10%10;
        uni = i%10;

        if (mil == uni && cen == dez)
        {
            printf("%d, ",i); 
        }
        
    }
    
}