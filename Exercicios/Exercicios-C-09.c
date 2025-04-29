#include <stdio.h>

int main(){
int numeros[5];
int i;
int media = 0;

printf("Digite 5 numeros \n");
for(i = 0; i<5; i++){
  printf("numero %d:  ", i + 1);
  scanf("%d", &numeros[i]);
}

for(i = 0; i<5; i++){
  media += numeros[i];
}
  
printf("Sua media é %.2f\n", (float)media / 5);

return 0;

}

//Crie um programa que receba 10 números inteiros do usuário, armazene-os em um vetor e calcule a média desses números.
