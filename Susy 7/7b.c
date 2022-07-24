#include <stdio.h>
#include <string.h>

int main()
{   
    int i, j, igual = 1;
    char s1[81], s2[81], texto[81];
    fgets(texto, 81, stdin);
    
    for(i = 0; i < strlen(texto); i++) {
        if((texto[i] >= 65) && (texto[i] <= 90)){
            texto[i] += 32;
        }
    }
    
    for(i = 0, j = strlen(texto) -2; i < strlen(texto) -1; i++, j--){
        if(texto[i] != '\n'){
            s1[i] = texto[i];
            s2[j] = s1[i];
        }
    }
    s1[80] = '\0';
    s2[80] = '\0';
    
    
    /*printf("--");
    //printf("%s", texto);
    printf("%s", s1);
    //printf("%s", s2);
    printf("--\n");*/
    for(i = 0; i < strlen(s1) -1; i++) {
        if(s1[i] != s2[i]){
            igual = 0;
            break;
        }
    }
    if(igual == 1){
        printf("Esta palavra e um palindromo\n");
    }
    else{
        printf("Esta palavra nao e um palindromo\n");
    }
    return 0;
}

