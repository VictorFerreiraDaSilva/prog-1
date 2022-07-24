#include <stdio.h>
#include <math.h>

float media(char qual, float n1, float n2);

int main()
{
    char qual;
    float n1, n2;
    scanf("%c", &qual);
    scanf("%f %f", &n1, &n2);
    printf("%.3f\n", media(qual, n1, n2));
    return 0;
}
    
float media(char qual, float n1, float n2){
    if(qual == 'A') return ((n1+n2)/2);
    if(qual == 'B') return (sqrt(n1*n2));
}