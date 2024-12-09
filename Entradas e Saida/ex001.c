#include <stdio.h>

int main(){
	int n1,n2,n3;
	int soma;
	float media;
	
	printf("Vou te dar a media de 3 numeros\nDigite 3 numeros: ");
	scanf("%i\n%i\n%i", &n1, &n2, &n3);
	
	soma = n1+n2+n3;
	media =soma/3;
	
	printf("Media: %.2f\n", media);
	return 0;
}