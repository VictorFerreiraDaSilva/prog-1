#include <stdio.h>
#include <string.h>

int main()
{   
    int tamanho;
    scanf("%d", &tamanho);
    int matriz[tamanho][tamanho], origem, destino/*, passadas[5], total = 0, escolhida, controlador = 0, tem = 0, */;
    int passei[tamanho], c = 1, ordenador[tamanho][2], to = -1, aux, pontuacao = 0;
    
    for(int i = 0; i < tamanho; i++) {
        passei[i] = -1;
    }
    
    for(int i = 0; i < tamanho; i++){
        scanf("%d %d %d %d %d", &matriz[i][0], &matriz[i][1], &matriz[i][2], &matriz[i][3], &matriz[i][4]);
    }
    scanf("%d", &origem);
    scanf("%d", &destino);
    to = origem;
    passei[0] = origem;
    
    while(to != destino) {
        if(to == destino) break;
        /*for(int i=0; i<5; i++){
            printf("%d ", matriz[to][i]);
        }
        printf("\n\n");*/
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
        /*for(int i=0; i<5; i++){
            printf("%d ", ordenador[i][0]);
        }
        printf("\n");
        for(int i=0; i<5; i++){
            printf("%d ", ordenador[i][1]);
        }
        printf("\n agora to em %d\n", to);
        printf("\n pontuacao: %d", pontuacao);
        printf("\n passei em ");
        for(int i=0; i<5; i++){
            printf("%d ", passei[i]);
        }
        
        printf("\n-----------");
        printf("\n\n");*/
    }
    printf("Distancia total entre %d e %d: %d\n", origem, destino, pontuacao);
    printf("Caminho: %d", passei[0]);
    for(int i=1; i<tamanho; i++){
            if(passei[i] != -1){
                printf("->%d", passei[i]);
            }
        }
    /*for(int i=0; i<5; i++){
        printf("%d ", matriz[to][i]);
    }
    printf("\n\n");
    for(int i=0; i<5; i++){
        ordenador[i][0] = matriz[to][i];
        ordenador[i][1] = i;
    }
    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < 5; j++){
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
    for(int i=0; i<5; i++){
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
    for(int i=0; i<5; i++){
        printf("%d ", ordenador[i][0]);
    }
    printf("\n");
    for(int i=0; i<5; i++){
        printf("%d ", ordenador[i][1]);
    }
    printf("\n agora to em %d", to);
    printf("\n pontuacao: %d", pontuacao);
    printf("\n passei em ");
    for(int i=0; i<5; i++){
        printf("%d ", passei[i]);
    }*/
    //while(to != destino){
    
    /*
        for(int i = 0; i < 5; i++){
            
            if(to == destino) break;
            if(i == to) i++;
            
            if((i != passadas[0]) && (i != passadas[1]) && (i != passadas[2]) && (i != passadas[3]) && (i != passadas[4])){
                if((matriz[to][i] < pontuacao) && (matriz[to][i] > 0)){
                    pontuacao = matriz[to][i];
                    escolhida = i;
                }
            }
        }
        if(to != destino) {
            passadas[controlador] = escolhida;
            to = escolhida;
            total += pontuacao;
            controlador++;
        }
        
        */
        /*for(int i = 0; i < 5; i++){
            if(to == destino) break;
            tem = 0;
            for(int j = 0; j < 5; j++){ 
                if(to == passadas[j]){
                    tem = 1;
                    break;
                }
            }
            if(tem == 1) continue;
            if((matriz[to][i] < pontuacao) && (matriz[to][i] > 0)){
                pontuacao = matriz[to][i];
                escolhida = i;
            }
        }
        passadas[controlador] = escolhida;
        to = escolhida;
        total += pontuacao;
        controlador++;*/
    //}
    /*
    printf("\noi\n");
    printf("%d\n", total);
    printf("%d\n", to);
    printf("%d\n", controlador);
    for(int i = 0; i < 5; i++) {
        printf("%d ", passadas[i]);
    }
    printf("\n\n");
    
    
    printf("---------\n\n");
    
    
    /*for(int i=0; i<5; i++){
        printf("%d ", matriz[to][i]);
    }
    
        for(int i = 0; i < 5; i++){
            
            if(to == destino) break;
            if(i == to) continue;
            
            if((i != passadas[0]) && (i != passadas[1]) && (i != passadas[2]) && (i != passadas[3]) && (i != passadas[4])){
                if((matriz[to][i] < pontuacao) && (matriz[to][i] > 0)){
                    pontuacao = matriz[to][i];
                    escolhida = i;
                }
            }
        }
        if(to != destino) {
            passadas[controlador] = escolhida;
            to = escolhida;
            total += pontuacao;
            controlador++;
        }
    
    printf("\noi\n");
    printf("%d\n", total);
    printf("%d\n", to);
    printf("%d\n", controlador);
    for(int i = 0; i < 5; i++) {
        printf("%d ", passadas[i]);
    }
    printf("\n");
    /*for(int i = 0; i < 1; i++)
    printf("%d %d %d %d %d", matriz[i][0], matriz[i][1], matriz[i][2], matriz[i][3], matriz[i][4]);
    
    while(to != destino) {
        printf("%d\n", to);
        for(int i = 0; i < 5; i++) {
            if(to == destino) break;
            for(int j = 0; j < 5; j++) {
                if(to == passadas[i]){
                    tem = 1;
                    break;
                }
            }
            if(tem == 1){
                tem = 0;
                continue;
            }
            if((matriz[to][i] != 0) && (matriz[to][i] < pontuacao)){
                pontuacao = matriz[to][i];
                passadas[controlador] = i;
            }
        }
        to = passadas[controlador];
        controlador++;
    }
    printf("oi\n");
    printf("%d\n", pontuacao);
    printf("%d\n", to);
    printf("%d\n", controlador);
    for(int i = 0; i < 5; i++) {
        printf("%d ", passadas[i]);
    }
    printf("\n");
    for(int j = 0; j < 5; j++) {
        for(int i = 0; i < 5; i++) {
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }*/
    return 0;
}

