#include <stdio.h>

int main()
{
    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int a, b;

    printf("digite o valor de a e b:  ");
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++)
    {

        printf("%d\n", vetor[i]);
    }
}

// vetores
