#include <stdio.h>

int main(){

int i, c,f;
int multi = 1;

printf("Digite de onde deseja começar: ");
  scanf("%d", &c);
printf("Digite até onde deseja ir:  ");
  scanf("%d", &f);
  
for(i = c; i<=f; i++){
  if(i % 2 == 0){
    multi *= i;
  }
}

printf("O resultado é: %i", multi);
  


return 0;

}

//Escreva uma rotina que, a partir de um intervalo definido pelo usuário, calcule o produto (multiplicação) de todos os números pares nesse intervalo.
