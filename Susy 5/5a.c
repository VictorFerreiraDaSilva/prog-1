#include <stdio.h>

int main()
{
    float notas[20]; //array das notas
    float busca = 1; //variavel pra fazer a busca, começando com 1 pra fazer uma busca ai no minimo
    for (int i = 0; i < 20; i++) { //pegando as 20 notas
        scanf("%f", &notas[i]);
    }
    while(busca >= 0) { //while pra fazer as buscas enquanto o busca não for negativo
        scanf("%f", &busca); //cata a busca
        if(busca < 0) break; //se ela for negativa já sai
        for (int i = 0; i < 20; i++) { //compara a busca com as 20 notas
            if (busca == notas[i]) { //se existir ele bota q existe e ja sai do for pra nao demorar mto
                printf("existe\n");
                break;
            }
            if (i >= 19 && busca != notas[i]) { //se chegou na ultima nota e ela não é igual a busca, entao nao existe e ele exibe e cabo, vai pra proxima busca
                printf("nao existe\n");
            }
        }
    }
    return 0;
}
