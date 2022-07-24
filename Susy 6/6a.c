#include <stdio.h>

int main()
{
    int linha, coluna;
    int v[20][20];
    scanf("%d %d", &linha, &coluna);
    
    
    for(int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){
            scanf("%d", &v[i][j]);
        }
    }
    for(int i=0; i<coluna; i++){
        for(int j=0; j<linha; j++){
            printf("%d ", v[j][i]);
        }
        printf("\n");
    }
    /*
    printf("%d ", v[0][0]);
    printf("%d ", v[0][1]);
    printf("%d ", v[1][0]);
    printf("%d ", v[1][1]);
    return 0;*/
}