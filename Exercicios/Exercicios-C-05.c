#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero, i;

    // Lendo o número do usuário
    printf("Digite um número de 1 a 10: ");
    scanf("%i", &numero);

    // Verifica se o número está na faixa de 1 a 10
    if (numero < 1 || numero > 10) {
        printf("Número inválido! Por favor, digite um número de 1 a 10.\n");
    } else {
        // Loop para gerar a tabuada
        printf("Tabuada do %i:\n", numero);
        for (i = 1; i <= 10; i++) {
        //Cada %i um numero ex:        (10 x 10 = 100)
            printf("%i x %i = %i\n", numero, i, numero * i);
        }
    }

    return 0;
}
