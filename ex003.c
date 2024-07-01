#include <stdio.h>

int main(void) {
  int n1;
  int peri;
  int area;  
  
  printf("Digite um dos lados do quadrado: ");  
  scanf("%d", &n1);
  
  peri = n1*4;  
  area = n1*n1;
  
  printf("%d\n", peri);
  printf("%d\n", area);
  
  return 0;
}