#include <stdio.h>
#include <math.h>

float mais(float n1, float n2);
float menos(float n1, float n2);
float divisao(float n1, float n2);
float vezes(float n1, float n2);
float elevado(float n1, float n2);

int main()
{
    float n1, n2, resultado;
    char operando;
    scanf("%f%c%f", &n1, &operando, &n2);
    switch(operando){
        case '+':
            resultado = mais(n1, n2);
            break;
        case '-':
            resultado = menos(n1, n2);
            break;
        case '*':
            resultado = vezes(n1, n2);
            break;
        case '/':
            resultado = divisao(n1, n2);
            break;
        case '^':
            resultado = elevado(n1, n2);
            break;
    }
    printf("%.3f\n", resultado);
    return 0;
}

float mais(float n1, float n2){
    return n1+n2;
}
float menos(float n1, float n2){
    return n1-n2;
}
float divisao(float n1, float n2){
    return n1/n2;
}
float vezes(float n1, float n2){
    return n1*n2;    
}
float elevado(float n1, float n2){
    return pow(n1, n2);
}
