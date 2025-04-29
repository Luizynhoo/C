#include <stdio.h>
#include <stdlib.h>
int main() {
  int n, r;
    printf("Digite um numero: ");
    scanf("%d",&n);
    while (n > 0){
      //% = resto da divisão
      r = n % 10;
      //Esta tirando o ultimo digito
      n= n / 10;
      printf("\n %d",r);
    }
return 0;
}
