#include <stdio.h>
#include <math.h>

int main() {
    double aprox = 0.000001;
    double valor = 0, termo = 1;
    int sinal = 1, k = 1;

    while (fabs(termo) > aprox) {
        termo = (4.0 / k) * sinal;
        valor += termo;
        sinal = -sinal;
        k += 2;
    }

    printf("Aproximacao de PI: %.20lf\n", valor);
    return 0;
}