//Permitindo que o programa utilize funções padrões de entrada e saida
#include <stdio.h>

int main() {
//Int = variavel de nuúmero inteiro
    int numero = 0;
    //O que aparece para o usúario
    printf("Informe o numero desejado: ");
    scanf("%d", &numero);
    //O que aparece para o usúario
    //(\n) = quebra de linha
    //%.i ou %.d = números inteiros
    printf("\nO antecessor: %.i", numero-1);
    printf("\nO sucessor: %.d\n", numero+1);

    return 0;
}
