#include <stdio.h>
#include <math.h>

void cubo(int a[], int b[]) {
    for(int i=0; i<10; i++){
        b[i] = pow(a[i], 3);
    }
}

int main()
{
    int primeiro[10], segundo[10];
    for(int i=0; i<10; i++){
        scanf("%d", &primeiro[i]);
    }
    cubo(primeiro, segundo);
    for(int i=0; i<10; i++){
        printf("%d\n", segundo[i]);
    }

    return 0;
}
