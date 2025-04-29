
#include <stdio.h>
#include <string.h> 

int main(int argc, char* argv[])
{
    char p [128];
    int i=0;
    
    printf("Digite uma palavra: ");
    gets(p);
    
    while(p[i] != '\0') i++;
 
    printf("\nEsta palavra tem %d letras", i);
    
    return 0;
    
}

//Looping que diz quantas letras tem na palavra

