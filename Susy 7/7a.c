#include <stdio.h>
#include <string.h>

int main()
{
    char s[81];
    fgets(s, 81, stdin);
    for (int i = (strlen(s)-1); i >= 0; i--) {
        if(s[i] != '\n'){
        printf("%c", s[i]);
        }
    }
    printf("\n");
}