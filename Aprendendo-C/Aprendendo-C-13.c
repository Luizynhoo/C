#include <stdio.h>

int main() {
  int a, b, valor;
  
    printf("Digite o valor de A :");
    scanf("%i",&a);
    printf("Digite o valor de b :");
    scanf("%i",&b);
    
    valor = a*b;
    
    if(valor>=50 && valor <= 100){
        printf("O resultado é: %i\n", valor);
    }else{
        printf("O resultado é maior que 100 ou menor que 50");
    }
    
    return 0;
}
