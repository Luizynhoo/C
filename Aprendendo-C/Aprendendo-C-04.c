//Permitindo que o programa utilize funções padrões de entrada e saida (print e scanf)
#include <stdio.h>

int main() {
    //Float = variavel com ponto flutuante
    float salarioMIN = 1412;
    float salario = 0;
    //O que aparece para o usuario
    printf("Informe o seu salario: ");
    //(&) Armazenando e lendo as informações 
    scanf("%f", &salario);
    
    salario = salario/salarioMIN;

    //%.f = para uso de variaveis com ponto flutuante, decimal
    printf("\nO salario minimo e: %.2f R$", salarioMIN);
    printf("\nO seu salario em salarios minimos e: %.2f\n", salario);

    return 0;
}




