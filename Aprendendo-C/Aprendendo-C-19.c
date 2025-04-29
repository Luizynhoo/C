#include <stdio.h>

int main(){

  int i, h;

  printf("digite o inicio do intervalo: ");
  scanf("%d", &i);

  printf("digite o intervalo: ");
  scanf("%d", &h);

  for(i = i; i<=h; i++){

    if(i % 3 == 0 && i % 5 == 0){
      printf("%d\n", i);
    }
    
  }
    
  return 0;
}

//Escreva uma rotina que imprima os múltiplos 3 e 5 em um intervalo definido pelo usuário 
