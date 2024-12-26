
#include <stdio.h>

int main(){
    int n, k = 2;

    printf("Digite o N: ");
    scanf("%d", &n);

    while (n!=1) {
        if (n%k == 0) {
            printf("%d", k);
            n=n/k;
            if(n!=1){
                printf("x");
            } 
        }
        else{
            k++;
        }
        
    }
    return 0;
}