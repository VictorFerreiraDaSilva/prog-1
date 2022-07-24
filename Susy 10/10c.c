#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    typedef struct Aluno
    {
        char nome[101];
        int ra;
        float notasp1;
        float notasp2;
    } Aluno;

int main (){
    int x;    

    scanf("%d", &x);

    Aluno* alunos = (Aluno*)malloc(x * sizeof(Aluno));
    
    for (int i=0; i<x; i++) {
        getchar();
        fgets(alunos[i].nome, 101, stdin);
        alunos[i].nome[strcspn(alunos[i].nome, "\n")] = 0;
        scanf("%d", &alunos[i].ra);
        scanf("%f", &alunos[i].notasp1);
        scanf("%f", &alunos[i].notasp2);
    }
    
    for (int i=0; i<x; i++){        
       printf("%d\t%s\t%.2f\n",  alunos[i].ra, alunos[i].nome, (alunos[i].notasp1+alunos[i].notasp2)/2);
    }

    return 0;
    
}