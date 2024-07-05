#include <stdio.h>
#include <string.h>

int main (){
	char str[20];

	printf("Digite qualquer String que irei te retorna o seu comprimento:");
	fgets(str, sizeof(str), stdin);

	printf("O comprimento da String e: %i\n", strlen(str)-1);
	
	return 0;
}