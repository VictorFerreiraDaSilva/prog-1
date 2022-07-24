#include <stdio.h>

int main()
{
    int numerozinho;
    scanf("%d",&numerozinho);

    if(numerozinho % 2 == 0) {
        printf("par\n");
    }
    else {
        printf("impar\n");
    }

    return 0;
}
