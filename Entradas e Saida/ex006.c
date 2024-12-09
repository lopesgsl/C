#include <stdio.h>

int main(){
	int n1, antecessor, sucessor;
	
	printf("Digite um numero e diremos o seu antecessor e seu sucessor: ");
	scanf("%i", &n1);
	
	antecessor = n1-1;
	sucessor = n1+1;
	
	printf("Antecerssor: %i\nSucessor: %i\n", antecessor, sucessor);
	
	 return 0;
}