/******************************************************************************
                    Victor Ferreira da Silva (177950)

*******************************************************************************/

#include <stdio.h>

int main()
{
    int contador = 0; //fazer aqui um contador pra controlar quantos pares serão
    scanf("%d", &contador);
    
    for(int i = 0; i < contador; i++) {
        int letras[12] = {0}; //aqui um array das quantidades de cada letra, 12 pq sao 6 tipos e 2 filamentos, ai achei mais facil fazer em array pra comparar depois num for
        int igual = 1; //não achei o tipo boolean em C, então bo fazer bool a moda antiga, 0 e 1, começando como true e se achar divergencia nos filamentos, ai bota false
        char filamento1[13]; //aq pa dois arreys de char pra virar uma string
        char filamento2[13];
    
        scanf("%s", filamento1); //aq cata o primeiro filamento
        filamento1[12] = '\0'; //e depois delimita o array
        scanf("%s", filamento2); //e depois faz a msm coisa com o segundo
        filamento2[12] = '\0';
        
        for (int i = 0; i < 12; i++) { //um forzinho que compara os valores do array e se for uma certa letra, aumenta o valor dela no array de letras
            switch(filamento1[i]){
                case 'A':
                    letras[0]++;
                    break;
                case 'B':
                    letras[1]++;
                    break;
                case 'C':
                    letras[2]++;
                    break;
                case 'D':
                    letras[3]++;
                    break;
                case 'E':
                    letras[4]++;
                    break;
                case 'F':
                    letras[5]++;
                    break;
            }
        }
        for (int i = 0; i < 12; i++) { //esse faz a msm coisa q o for anterior soq com o outro filamento
            switch(filamento2[i]){
                case 'A':
                    letras[6]++;
                    break;
                case 'B':
                    letras[7]++;
                    break;
                case 'C':
                    letras[8]++;
                    break;
                case 'D':
                    letras[9]++;
                    break;
                case 'E':
                    letras[10]++;
                    break;
                case 'F':
                    letras[11]++;
                    break;
            }
        }
        for (int i = 0; i < 6; i++) { //e esse compara os valores das letras pra saber se tao iguais, se achar um diferente ele ja aborta o resto pra ir mais rapido
            if(letras[i] != letras[i+6]){
                igual = 0; //aq bota false se achar algo diferente
                break;
            }
        }
        
        if(igual == 0){ //e aq manda na tela do cara
            printf("Caracteristicas Diferentes\n");
        }
        else {
            printf("Caracteristicas Iguais\n");
        }
    }
    return 0;
}
