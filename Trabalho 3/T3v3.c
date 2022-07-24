#include <stdio.h>

int main()
{   
    int tamanho;
    scanf("%d", &tamanho);
    int matriz[tamanho][tamanho], origem, destino;
    int passei[tamanho], c = 1, ordenador[tamanho][2], to = -1, aux, pontuacao = 0;
    
    for(int i = 0; i < tamanho; i++) {
        passei[i] = -1;
    }
    
    for(int i = 0; i < tamanho; i++){
        for(int j = 0; j < tamanho; j++){
           fscanf(stdin, "%d", &matriz[i][j]);
        }
    }
    scanf("%d", &origem);
    scanf("%d", &destino);
    to = origem;
    passei[0] = origem;
    
    while(to != destino) {
        if(to == destino) break;
        for(int i=0; i<tamanho; i++){
            ordenador[i][0] = matriz[to][i];
            ordenador[i][1] = i;
        }
        for(int i = 0; i < tamanho; i++){
            for(int j = i+1; j < tamanho; j++){
                if(ordenador[i][0] > ordenador[j][0]){
                    aux = ordenador[i][0];
                    ordenador[i][0] = ordenador[j][0];
                    ordenador[j][0] = aux;
                    aux = ordenador[i][1];
                    ordenador[i][1] = ordenador[j][1];
                    ordenador[j][1] = aux;
                }
            }
        }
        for(int i=0; i<tamanho; i++){
            if(ordenador[i][0] != 0) {
                if((ordenador[i][1] != passei[0]) && (ordenador[i][1] != passei[1]) && (ordenador[i][1] != passei[2]) && (ordenador[i][1] != passei[3]) && (ordenador[i][1] != passei[4])) {
                    to = ordenador[i][1];
                    pontuacao += ordenador[i][0];
                    passei[c] = ordenador[i][1];
                    c++;
                    break; 
                }
            }
        }
    }
    printf("Distancia total entre %d e %d: %d\n", origem, destino, pontuacao);
    printf("Caminho: %d", passei[0]);
    for(int i=1; i<tamanho; i++){
            if(passei[i] != -1){
                printf("->%d", passei[i]);
            }
        }
    printf("\n");
    return 0;
}

