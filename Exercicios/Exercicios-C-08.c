#include <stdio.h>
#include <stdlib.h>

int main() {
    int x, idade;

    // Loop para pedir 10 idades
    printf("Digite a idade de 10 pessoas:\n");
    for (idade = 1; idade <= 10; idade++) {
        printf("Pessoa %d/10: ", idade);
        scanf("%i", &x);

        // Verifica a faixa etária da pessoa
        if (x >= 18 && x <= 55) {
            printf("Você é maior de idade e tem %i anos.\n", x);
        } else if (x < 18) {
            printf("Cuidado! Você é menor de idade e tem %i anos.\n", x);
        } else {
            printf("Você já está com uma idade mais avançada e tem %i anos.\n", x);
        }
    }

    return 0;
}
