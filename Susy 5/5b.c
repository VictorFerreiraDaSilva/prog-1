#include <stdio.h>

int main()
{
    float valores[10], lucro = 0;
    int produtos[10], quantidade = 0;
    for(int i = 0; i < 10; i++) {
        scanf("%d", &produtos[i]);
    }
    for(int i = 0; i < 10; i++) {
        scanf("%f", &valores[i]);
    }
    for(int i = 0; i < 10; i++) {
        quantidade = quantidade + produtos[i];
        lucro = lucro + (produtos[i] * valores[i]);
    }
    printf("O lucro foi de  %.3f e a quantidade de produtos vendidos foi de %d\n", lucro, quantidade);

    return 0;
}
