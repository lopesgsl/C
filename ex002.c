#include <stdio.h>

int main(){
	int n1,n2,n3;
	float p1,p2,p3;
	int soma;
	float medpod;
	
	printf("Vou te dar uma media ponderada\nDigite 3 numeros: ");
	scanf("%i\n%i\n%i", &n1,&n2,&n3);
	printf("Agora digite os seus respectivos pesos:");
	scanf("%f\n%f\n%f", &p1,&p2,&p3);
	
	soma = n1+n2+n3;
	n1 = n1*p1;
	n2 = n2*p2;
	n3 = n3*p3;
	medpod = n1+n2+n3;
	medpod = medpod/soma;
	
	printf("Media ponderada: %.2f\n", medpod);
	return 0;
}