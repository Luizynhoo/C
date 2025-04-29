#include <stdio.h>
#include <stdlib.h>

int main(){
    int x,i,
    r = 1;

    printf("Digite o numero que deseja: ");
    scanf("%i", &x);
    
    for(i = 1; i<=x; i++){
       r *= i;
    }
     printf("fatorial de %i = %i\n", x, r);
}

//Fatorial de um numero 
