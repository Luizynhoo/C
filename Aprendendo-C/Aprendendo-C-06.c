#include <stdio.h>

int main () {
    int x=0; 
    int y=0;

    printf ("Escreva o valor de X: ");
    scanf ("%i", &x);

    printf ("Escreva o valor de Y: ");
    scanf ("%i", &y);

    if (x < y) {
        printf ("Y eh o maior numero: %i\n", y);
    } else if (x > y) {
        printf ("X eh o maior numero: %i\n", x);
    } else {
        printf ("X e Y são iguais: %i\n", x);
    }

    return 0;
}