/*107. Escreva um programa que leia dois números inteiros M e N e calcule a média 
aritmética dos números primos do intervalo [M, N].*/
#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool num_primo(int num) {
    if (num < 2) {
        return false;
    }
    for (int t = 2; t <= num / 2; t++) { // Correção: t <= num / 2
        if (num % t == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int m, n, menor, maior;
    float total = 0, media = 0;

    printf("\n----- Numeros do intervalo V3.0 -----\n\n");
    
    printf("Digite um numero: ");
    scanf("%i", &m);
    printf("Digite outro numero: ");
    scanf("%i", &n);
    
    // Determinando o menor e maior número
    if (m > n) {
        maior = m;
        menor = n;
    } else {
        maior = n;
        menor = m;
    }
    
    // Iterando sobre o intervalo e calculando a média dos primos
    for (int i = menor; i <= maior; i++) {
        if (num_primo(i)) {
            total += i;
            media++;
            printf("\nPrimo encontrado: %i", i); // Removido a impressão da media
        }
    }

    if (media > 0) {
        printf("\nA media aritmetica dos numeros primos do intervalo entre os numeros (%i a %i) e de: %.1f\n", menor, maior, total / media);
    } else {
        printf("\nNao ha numeros primos no intervalo entre (%i a %i).\n", menor, maior);
    }

    return 0;
}