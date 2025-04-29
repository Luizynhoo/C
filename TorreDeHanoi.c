#include <stdio.h>

// Função recursiva para a Torre de Hanoi
void torreHanoi(int discos, char origem, char destino, 
  char auxiliar) {
  if (discos == 1) {
    printf("Mover disco 1 de %c para %c\n", origem, destino);
    return;
  }

  torreHanoi(discos - 1, origem, auxiliar, destino);
  printf("Mover disco %d de %c para %c\n", discos, origem, 
    destino);
  torreHanoi(discos - 1, auxiliar, destino, origem);
}

int main() {
  int discos = 8;
  char origem = 'A';
  char destino = 'C';
  char auxiliar = 'B';

  torreHanoi(discos, origem, destino, auxiliar);

  return 0;
}
