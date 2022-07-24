#include <stdio.h>
#include <math.h>

int main()
{
    typedef struct ponto {
        int x;
        int y;      
    } Ponto;
    
    typedef struct retangulo {
        Ponto infEsq, supDir;
    } Retangulo;
    
    Retangulo r1, r2;
    
    scanf("%d %d", &r1.infEsq.x, &r1.infEsq.y);
    scanf("%d %d", &r1.supDir.x, &r1.supDir.y);
    scanf("%d %d", &r2.infEsq.x, &r2.infEsq.y);
    scanf("%d %d", &r2.supDir.x, &r2.supDir.y);

    

    if((r2.infEsq.x < r1.infEsq.x || r2.infEsq.y < r1.infEsq.y) || (r2.supDir.x > r1.supDir.x || r2.supDir.y > r1.supDir.y)){
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }
    else {
        printf("o segundo retangulo esta contido no primeiro\n");
    }

    return 0;
}
    