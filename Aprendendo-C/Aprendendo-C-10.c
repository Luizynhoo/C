#include <stdio.h>

int main() {
  float n1, n2, n3, n4;
  printf("Digite o valor de N1: ");
  scanf("%f", &n1);
  printf("Digite o valor de N2: ");
  scanf("%f", &n2);
  printf("Digite o valor de N3: ");
  scanf("%f", &n3);
  printf("Digite o valor de N4: ");
  scanf("%f", &n4);

  printf("\nA sua nota final foi: %.2f", (n1+n2+n3+n4)/4);
  

  return 0;
}

//Fazendo a média de um aluno
