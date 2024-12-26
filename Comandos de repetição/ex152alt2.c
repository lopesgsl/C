#include <stdio.h>

int main()
{
    int n, c;
    printf("Digite o N: ");
    scanf("%d", &n);
    while (n!=1) {
        c = 1;
        for(int k = 2; c != 0; k++) {
            if (n%k == 0) {
                printf("%d", k);
                n=n/k;
                c = 0;
            }
        }
        if(n!=1) printf("x");
    }
    return 0;
}