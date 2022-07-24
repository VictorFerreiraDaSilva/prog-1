#include <stdio.h>
int main()
{
    int contador = 0;
    scanf("%d", &contador);
    for(int a = 0; a < contador; a++) {
        int letras[2][6] = {0};
        int igual = 1;
        char filamentos[2][13];
        scanf("%s", filamentos[0]);
        filamentos[0][12] = '\0';
        scanf("%s", filamentos[1]);
        filamentos[1][12] = '\0';
        for (int j = 0; j < 2; j++) {
            for (int i = 0; i < 12; i++) { 
                switch(filamentos[j][i]){
                    case 'A':
                        letras[j][0]++;
                        break;
                    case 'B':
                        letras[j][1]++;
                        break;
                    case 'C':
                        letras[j][2]++;
                        break;
                    case 'D':
                        letras[j][3]++;
                        break;
                    case 'E':
                        letras[j][4]++;
                        break;
                    case 'F':
                        letras[j][5]++;
                        break;
                }
            }
        }
        for (int i = 0; i < 6; i++) {
            if(letras[0][i] != letras[1][i]){
                igual = 0;
                break;
            }
        }
        if(igual == 0){
            printf("Caracteristicas Diferentes\n");
        }
        else {
            printf("Caracteristicas Iguais\n");
        }
    }
    return 0;
}
