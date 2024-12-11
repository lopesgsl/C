#include <stdio.h>
#include <string.h>

int main() {
    char num[5], num_inver[5];

    printf("\n[[[[[[[ Palíndromo ]]]]]]]\n");

    printf("Digite um numero entre 1000 e 9999: ");
    scanf("%s", num);

    int len = strlen(num);
    for (int i = 0; i < len; i++) {
        num_inver[i] = num[len - 1 - i];
    }
    num_inver[len] = '\0';

    if (strcmp(num, num_inver) == 0) {
        printf("\nE um palindromo.\n");
    } else {
        printf("\nNao e um palindromo.\n");
    }

    return 0;
}