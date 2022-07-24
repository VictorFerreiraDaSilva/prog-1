#include <stdio.h>
#include <string.h>

int main()
{
    
    char texto[1002], fim[5], copia[5];
    int coisos[62] = {0}, contador = 0;
    //fgets(texto, 1002, stdin);
    for(int i=0; i<4; i++) copia[i] = texto[i];
    fim[0] = 'F';
    fim[1] = 'I';
    fim[2] = 'M';
    fim[3] = '\n';
    fim[4] = '\0';
    copia[4] = '\0';
    
    //printf("%d", strcmp(fim, copia));
    
    while(strcmp(fim, copia) != 0){
        fgets(texto, 1002, stdin);
        for(int i=0; i<4; i++) copia[i] = texto[i];
        copia[4] = '\0';
        
        if(strcmp(fim, copia) == 0) break;
        
        for(int i=0; i<strlen(texto); i++){
            if((texto[i] >= 48 && texto[i] <= 57)){
                coisos[texto[i]-48]++;
                contador++;
            }
            if((texto[i] >= 65 && texto[i] <= 90)){
                coisos[texto[i]-55]++;
                contador++;
            }
            if((texto[i] >= 97 && texto[i] <= 122)){
                coisos[texto[i]-61]++;
                contador++;
            }
        }
    }
    
    
    printf("Caracteres Maiusculos:\n");
    for(int i=10; i<=35; i++) {
        float a = coisos[i];
        float probabilidade = a/contador;
        printf("%c: ", i+55);
        if(coisos[i]!=0){
            for(int j=0; j<coisos[i]; j++){
                printf("*");
            }
        }
        printf(" (%d - %.2f)\n", coisos[i], probabilidade);
    }
    printf("\n");
    
    printf("Caracteres Minusculos:\n");
    for(int i=36; i<=61; i++) {
        float a = coisos[i];
        float probabilidade = a/contador;
        printf("%c: ", i+61);
        if(coisos[i]!=0){
            for(int j=0; j<coisos[i]; j++){
                printf("*");
            }
        }
        printf(" (%d - %.2f)\n", coisos[i], probabilidade);
    }
    printf("\n");
    
    printf("Digitos:\n");
    for(int i=0; i<=9; i++) {
        float a = coisos[i];
        float probabilidade = a/contador;
        printf("%c: ", i+48);
        if(coisos[i]!=0){
            for(int j=0; j<coisos[i]; j++){
                printf("*");
            }
        }
        printf(" (%d - %.2f)\n", coisos[i], probabilidade);
    }
    
    
    return 0;
}