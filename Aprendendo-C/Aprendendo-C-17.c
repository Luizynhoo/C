#include <stdio.h>
#include <stdlib.h>
int main() {
  int a, b;
  char op = 's';
  while ((op == 's') || (op == 'S')){
    printf("Digite um numero: ");
    scanf("%d",&a);
    
    printf("Digite outro numero: ");
    scanf("%d",&b);
    
    printf("A soma e: %d", a + b);
    printf("\nNovo calculo (S/N)?");
    scanf("%s",&op);
}
return 0;}
