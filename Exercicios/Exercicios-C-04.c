#include <stdio.h>
#include <stdlib.h>

int main(){

    int a;
    int b;
    int count = 0;

    // Lendo o valor do usuário
    printf("Digite um valor: ");
    scanf("%i", &b);

    // Loop para imprimir os números de 'b' até o limite de 5 iterações
    for(a = b; count < 5; a--){

        // Verificação se o número é positivo ou negativo
        if(a >= 0){
            printf("%i é positivo\n", a);
        } else {
            printf("%i é negativo\n", a);
        }

        count++;  // Incrementa o contador após cada iteração
    }

    return 0;
}
