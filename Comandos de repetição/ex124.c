#include <stdio.h>

int eh_primo(int num) {
    if (num < 2) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int gemeos[12]; // 6 pares = 12 números
    int cont = 0;
    int num = 2;

    printf("\n==========  Numeros primos gemeos  ========== \n\n");

    while (cont < 12) { // Precisamos de 12 números para formar 6 pares
        if (eh_primo(num) && eh_primo(num + 2)) {
            gemeos[cont] = num;
            gemeos[cont + 1] = num + 2;
            cont += 2;
        }
        num++;
    }

    printf("Os primeiros 6 pares de números primos gêmeos são:\n");
    for (int i = 0; i < 12; i += 2) {
        printf("(%d, %d)\n", gemeos[i], gemeos[i + 1]);
    }

    return 0;
}
