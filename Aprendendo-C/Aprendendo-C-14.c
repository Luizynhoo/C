#include <stdio.h>

int main()
{
    int g=0, i=0, l=0, k=0;
    int m,n,o;
    
    while(i<=10)
    {
        m=g++;
        n=+l;
        o=++k;
        i++;
    }
    
    printf("m=%d n=%d o=%d", m,n,o);
    
}

//Resultado = 10 0 11
