#include <stdio.h>

void soma(int *a, int *b, int c, int d){
    *a += c;
    *b += d;
}

void multiplicacao(int *a, int *b, int c, int d){
    int aa, bb;
    aa = (*a*c)-(*b*d);
    bb = (*a*d)+(*b*c);
    *a = aa;
    *b = bb;
}

int main()
{
    int a, b, c, d;
    char ch;
    scanf("%d %d %c %d %d", &a, &b, &ch, &c, &d);
    if(ch == '+') soma(&a, &b, c, d);
    else multiplicacao(&a, &b, c, d);
    printf("%d + %di\n", a, b);
    return 0;
}
