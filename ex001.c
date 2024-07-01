#include <stdio.h>

int main(){
	int n1,n2,n3;
	int soma;
	float media;
	
	printf("Digite 3 numeros: ");
	scanf("%i\n%i\n%i", &n1, &n2, &n3);
	
	soma = n1+n2+n3;
	media =soma/3;
	
	printf("%.2f\n", media/(int)3);
	return 0;
}