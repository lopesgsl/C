#include <stdio.h>
#include <string.h>

int main(){
	char str[30];
	int num;
	
	printf("Indentificador de lugares de letras\nEscrevar uma palavra: ");
	fgets(str, sizeof(str), stdin);
	printf("Agora digite o numero do lugar da letra que deseja descobrir: ");
	scanf("%i", &num);

	printf("A %i letra de sua palavra e %c",num, str[num-1]);
	
	return 0;
}