#include <stdio.h>
#include <string.h>

void int_to_roman(int num) {
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
    char *symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
    int n = sizeof(values) / sizeof(values[0]);

    char result[15];

    while (num > 0) {
        for (int j = 0; j < n; j++) {
            while (num >= values[j]) {
                num -= values[j];
                strcat(result, symbols[j]);
            }
        }
    }

    printf("%s\n", result);
}

int main() {
    int num;

    printf("Digite um numero inteiro entre 1 e 999: ");
    scanf("%d", &num);

    if (num < 1 || num > 999) {
        printf("Número invalido.\n");
    } else {
        int_to_roman(num);
    }

    return 0;
}
