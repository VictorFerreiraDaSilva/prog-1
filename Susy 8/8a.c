#include <stdio.h>
#include <math.h>

int main()
{
    typedef struct ponto {
        float x;
        float y;      
    } Ponto;
    float distancia;
    Ponto p1, p2;
    
    scanf("%f %f", &p1.x, &p1.y);
    scanf("%f %f", &p2.x, &p2.y);

    distancia = sqrt(((pow(p1.x - p2.x, 2))+(pow(p1.y - p2.y, 2))));

    if(distancia < 0.0000001){
        printf("os pontos sao iguais\n");
    }
    else {
        printf("os pontos nao sao iguais\n");
    }

    return 0;
}
    