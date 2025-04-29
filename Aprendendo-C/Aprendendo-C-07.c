#include <stdio.h>

int main(){
    int x = 0;
    int y = 0;

    printf("Escreva o valor de X: ");
    scanf ("%i", &x);

    printf("Escreva o valor de Y: ");
    scanf ("%i", &y);

    if (x<y)
    {
        printf ("%i" "%i", x, y);
    } else {
        printf("%i" "%i", y, x);
    }
    
    return 0;
}