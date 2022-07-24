#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    typedef struct Corpo {
        float altura, peso;
        char nome[256];      
    } Corpo;
    
    Corpo c1;
    
    scanf("%f", &c1.altura);
    scanf("%f\n", &c1.peso);
    fgets(c1.nome, 256, stdin);

    printf("%.3f\n", c1.peso/pow(c1.altura, 2));

    return 0;
}
    