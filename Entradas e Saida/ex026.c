#include <stdio.h>

int main(){
	float p1, a1, p2, a2, p3, a3, p4, a4, p5, a5, p6, a6, p7, a7, p8, a8;
	
	printf("Sistema oficial de pesagem do torneio\n\n");
	printf("----Cadastro de equipes----\n");
	printf("Aqui vamos cadastrar as 4 duplas qualificadas para competir\n");
	printf("Por isso digite o peso(kg) e a altura(m) respectivamente da dupla 1 a 4.\n");
	
	printf("\n\n                ---Dupla 1----\n");
	printf("---Atleta 1---\n");
	printf("PESO: ");
	scanf("%f", &p1);
	printf("ALTURA: ");
	scanf("%f", &a1);
	printf("---Atleta 2---\n");
	printf("PESO: ");
	scanf("%f", &p2);
	printf("ALTURA: ");
	scanf("%f", &a2);
	printf("---Media---\n");
	printf("PESO: %.2fkg", (p1+p2)/2);
	printf("\nALTURA: %.2fm", (a1+a2)/2);

	
	printf("\n\n               ----Dupla 2----\n");
	printf("---Atleta 3---\n");
	printf("PESO: ");
	scanf("%f", &p3);
	printf("ALTURA: ");
	scanf("%f", &a3);
	printf("---Atleta 4---\n");
	printf("PESO: ");
	scanf("%f", &p4);
	printf("ALTURA: ");
	scanf("%f", &a4);
	printf("---Media---\n");
	printf("PESO: %.2fkg", (p3+p4)/2);
	printf("\nALTURA: %.2fm", (a3+a4)/2);
	
	printf("\n\n              ----Dupla 3----\n");
	printf("---Atleta 5---\n");
	printf("PESO: ");
	scanf("%f", &p5);
	printf("ALTURA: ");
	scanf("%f", &a5);
	printf("---Atleta 6---\n");
	printf("PESO: ");
	scanf("%f", &p6);
	printf("ALTURA: ");
	scanf("%f", &a6);
	printf("---Media---\n");
	printf("PESO: %.2fkg", (p6+p5)/2);
	printf("\nALTURA: %.2fm", (a6+a5)/2);
	
	printf("\n\n              ----Dupla 4----\n");
	printf("---Atleta 7---\n");
	printf("PESO: ");
	scanf("%f", &p7);
	printf("ALTURA: ");
	scanf("%f", &a7);
	printf("---Atleta 8---\n");
	printf("PESO: ");
	scanf("%f", &p8);
	printf("ALTURA: ");
	scanf("%f", &a8);
	printf("---Media---\n");
	printf("PESO: %.2fkg", (p7+p8)/2);
	printf("\nALTURA: %.2fm\n", (a7+a8)/2);
	printf("--------------------------------\n\n");
	
	printf("----Media Geral----\n");
	printf("PESO: %.2fkg", (p1+p2+p3+p4+p5+p6+p7+p8)/8);
	printf("\nALTURA: %.2fm\n", (a1+a2+a3+a4+a5+a6+a7+a8)/8);
	
	return 0;
}