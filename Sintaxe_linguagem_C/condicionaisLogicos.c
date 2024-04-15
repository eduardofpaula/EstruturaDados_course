#include <stdio.h>

int main()
{
    int a,b,c;

    printf("Digite um numero: ");
    scanf("%d",&a);
    printf("Digite um numero: ");
    scanf("%d",&b);
    printf("Digite um numero: ");
    scanf("%d",&c);
    

    if (a == b && b == c)
    { 
            printf("a,b e c tem valores iguais");
        
    }

    if (a == b || b == c)
    { 
            printf("a,b e c tem valores iguais");
        
    }

    if (!(a == b) && !(b == c))
    { 
            printf("a,b e c tem valores diferentes");
        
    }
    
    return 0;
}
