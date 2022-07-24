#include <stdio.h>

int main()
{
    int vet1[10], vet2[10];
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vet1[i]);
    }
    for(int i = 0; i < 10; i++) {
        scanf("%d", &vet2[i]);
    }
    for(int i = 0; i < 10; i++) {
        printf("%d|%d|", vet1[i], vet2[i]);
    }
    printf("\n");

    return 0;
}
