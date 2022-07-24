#include <stdio.h>
#include <stdlib.h>
#include <math.h> 

int main () {
    int grau;
    float* valores;
    float resultado=0, x;
    
    scanf ("%d", &grau);
    
    valores = (float*)malloc((grau+1)*sizeof(float));
    
    for (int i=0; i<grau+1; i++) {
        scanf ("%f", &valores[i]);
    }
    
    scanf ("%f", &x);
    if (grau!=0) {
        for (int i=(grau+1); i>0; i--) {
            resultado += ((pow(x,i))*valores[i]);;
            }
    }
    resultado += valores[0];
    printf ("%.2f\n", resultado);
    //printf ("%f %f %f %f %f", coefs[0], coefs[1], coefs[2], coefs[3], coefs[4]);
    return 0;
}