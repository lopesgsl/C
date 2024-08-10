#include <stdio.h>
#include <ctype.h>

int main() {
    char caractere;

    printf("\n[[[[[[ De que tipo e seu caractere ]]]]]]\n\n");

    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    if (isalpha(caractere)) {
        if (isupper(caractere)) {
            printf("O caractere '%c' é uma letra maiúscula.\n", caractere);
        } else {
            printf("O caractere '%c' é uma letra minúscula.\n", caractere);
        }
    } else if (isdigit(caractere)) {
        printf("O caractere '%c' é um número.\n", caractere);
    } else {
        printf("O caractere '%c' não é letra nem número.\n", caractere);
    }

    return 0;
}
