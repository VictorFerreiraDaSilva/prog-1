#include<stdio.h>

int main()
{
    int n = 0;
    int s = 0;
    int sfat = 1;
    int nfat = 1;
    int ns = 1;
    int combo = 0;
    scanf("%d", &n);
    scanf("%d", &s);
    for(int i=n;i>=1;i--){
        nfat *= i;
    }
    for(int i=s;i>=1;i--){
        sfat *= i;
    }
    for(int i=(n-s);i>=1;i--){
        ns *= i;
    }
    combo = nfat/(sfat*ns);
    printf("%d\n", combo);
    return 0;
}