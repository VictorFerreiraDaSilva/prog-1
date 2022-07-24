#include<stdio.h>

int main()
{
    int par = 0;
    int impar = 0;
    for(int i=1;i<=10;i++){
        int numerozinho = 0;
        scanf("%d", &numerozinho);
        if(numerozinho % 2 == 0) par++;
        else impar++;
    }
    printf("%d pares, %d impares\n", par, impar);
    return 0;
}