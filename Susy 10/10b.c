#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int l, c, sim=0, nao=0;
    int** mat;
    int** trans; 

    scanf("%d %d", &l, &c);

    mat = (int**)malloc(l*sizeof(int*));
    for (int i=0; i<l; i++) {
    mat[i] = (int*) malloc(c*sizeof(int));
    }

    trans = (int**)malloc(l*sizeof(int*));
    for (int i=0; i<l; i++) {
    trans[i] = (int*) malloc(c*sizeof(int));
    }

    for(int i=0; i<l; i++){
        for(int j=0; j<c; j++){
            scanf("%d", &mat[i][j]);
        }
    }

    if (l == c) {
        for (int i = 0; i < l; i++){
            for (int j = 0; j < c; j++){
                trans[j][i] = mat[i][j];
            }
        }        
        
       for (int i = 0; i < l; i++){
            for (int j = 0; j < c; j++){
                if (mat[i][j] == trans[i][j]){
                    sim++;
                }
                else{
                    nao++;
                }
            }
        }

        if (sim == (l*c)){
            printf("Eh simetrica\n");
        }
        else {
            printf("Nao eh simetrica\n");
        }

    }
    else {
        printf("Nao eh simetrica\n");
    }


    return 0;
}