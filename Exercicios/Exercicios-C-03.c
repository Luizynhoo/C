#include <stdio.h>
#include <stdlib.h>

int main(){

    int a;
    int b;
    int count = 0;

    // Lendo o valor do usuário
    printf("Digite um valor: ");
    scanf("%i", &b);

    // Loop para imprimir os números de 'b' até 1
    for(a = b; a > 0 && count <= 10; a--){

     
        // Verificação se o número é par ou ímpar
        if(a % 2 == 0){
            printf("%i é par\n", a);
        } else {
            printf("%i é ímpar\n", a);
        }

       count++;
    }

    return 0;
}

//Utilizando for e if/else
