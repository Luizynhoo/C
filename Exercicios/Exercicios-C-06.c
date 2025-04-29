#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, loop;

    // Loop para pedir 10 números
    for (loop = 1; loop <= 10; loop++) {
        printf("Digite um número (%d/10): ", loop);
        scanf("%i", &x);

        // Verifica se o número é positivo ou negativo
        if (x > 0) {
            printf("Esse número é positivo: %i\n", x);
        } else if (x < 0) {
            printf("Esse número é negativo: %i\n", x);
        } else {
            printf("Esse número é zero.\n");
        }
    }

    return 0;
}
