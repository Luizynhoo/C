#include <stdio.h>

int main(){

int c,f;

printf("Digite de que valor iniciara:  ");
  scanf("%d", &c);
printf("Digite de que valor terminara:  ");
  scanf("%d", &f);
  
for(c = c; c<=f; c++){
  if(c%4 == 0 && c%6 == 0){
    printf("%d\n", c);
  }
}
  
return 0;

}

//Escreva uma rotina que imprima os números múltiplos de 4 e 6 em um intervalo definido pelo usuário.
