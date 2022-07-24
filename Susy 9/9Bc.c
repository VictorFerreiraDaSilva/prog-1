#include <stdio.h>
#include <math.h>

void ordena(int a[], int n) {
    int aux = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            if(a[i] > a[j]){
                aux = a[i];
                a[i] = a[j];
                a[j] = aux;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    int vetor[n];
    for(int i=0; i<n; i++){
        scanf("%d", &vetor[i]);
    }
    ordena(vetor, n);
    printf("maior valor: %d\n", vetor[n-1]);
    printf("menor valor: %d\n", vetor[0]);

    return 0;
}
