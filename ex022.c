#include <stdio.h>

int main(){
	int a,b, resu, multi;
	printf("Vou mostrar maior multiplo de A que e menor ou igual a B\n");
	printf("Digite A: ");
	scanf("%i", &a);
	printf("Digite B: ");
	scanf("%i", &b);
	printf("\n");
	
	for(int i = 0; resu <= b;  i++){
		resu = a*i;
		if (!(resu > b)){
			printf("%i * %i = %i\n", a, i, resu);
			multi = resu;
		}
	}
	
	printf("\n\nLogo o multiplo %i e menor ou igual a %i seu B", multi, b);
	return 0;
}