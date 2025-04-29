//Permitindo que o programa utilize funções padrões de entrada e saida
#include <stdio.h>

//Int = numero inteiro
int main() {
    //Float = variaveis com ponto flutuante, decimal
    float salario, aumento = 0;
    //O que aparece para o usúario
    printf("Informe o seu salario: R$");
    //Lendo e (&) armazenando a informação (salario) do usuario 
    scanf("%f", &salario);
    printf("Informe a porcentagem de aumento do seu salario: ");
    scanf("%f", &aumento );
    //Utilizando matematica para a logica, conversão da porcentagem
    aumento = aumento*salario/100;
    salario = salario+aumento;
    //%.f = para uso de variaveis com ponto flutuante, decimal 
    printf("\nO seu salario aumentou: R$%.2f ", aumento);
    printf("\nO seu salario agora e: R$%.2f\n ", salario);

    return 0;
}

