#include <stdio.h>

int main(){
  int i, h, soma = 0, contador = 0;
  float media;

  printf("Digite o inicio do intervalo: ");
  scanf("%d", &i);
  
  printf("Digite o valor do intervalo: ");
  scanf("%d", &h);
  
  for(i = i; i<=h; i++){
    printf("%d\n", i);
    soma += i; //soma
    contador ++;
  }

  media = (float)soma/contador;

  printf("Media: %.2f\n", media);
  printf("Soma: %d\n", soma);

  return 0;
}

//Escreva uma rotina que a partir de um intervalo definindo pelo usuário, calcule a média e a soma dos valores constantes no intervalo
