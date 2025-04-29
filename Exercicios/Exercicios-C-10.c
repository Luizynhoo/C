#include <stdio.h>

int main() {
    int numeros[8];
    int maior, menor;
    int i;

    printf("Digite 8 numeros \n");
    for (i = 0; i < 8; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];
    menor = numeros[0];

    for (i = 0; i < 8; i++) {
        if (numeros[i] > maior) {
            maior = numeros[i];
        }
        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    printf("O maior e o menor numero são %d e %d\n", maior, menor);

    return 0;
}

//Escreva um programa que receba 8 números inteiros, armazene-os em um vetor e determine o menor e o maior valor presente nesse vetor.
