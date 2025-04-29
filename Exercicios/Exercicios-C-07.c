#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, n;

    // Solicita ao usuário um número
    printf("Digite um número: ");
    scanf("%i", &n);

    // Loop para verificar os números de 1 até n
    printf("Verificando se os números de 1 até %i são pares ou ímpares:\n", n);
    for (x = 1; x <= n; x++) {

        // Verifica se o número é par
        if (x % 2 == 0) {
            printf("O número %i é par.\n", x);
        } else {
            printf("O número %i é ímpar.\n", x);
        } 
    }

    return 0;
}
