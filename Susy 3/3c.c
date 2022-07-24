#include <stdio.h>

int main()
{
    float numero1, numero2;
    char operador;
    scanf("%f%c%f", &numero1, &operador, &numero2);

    if(operador != '+' && operador != '-' && operador != '*' && operador != '/') {
        printf("Operador invalido\n");
    }
    else {
        if(operador == '+') {
            printf("%0.3f+%0.3f=%0.3f\n", numero1, numero2, (numero1+numero2));
        } else if (operador == '-') {
            printf("%0.3f-%0.3f=%0.3f\n", numero1, numero2, (numero1-numero2));
        } else if (operador == '*') {
            printf("%0.3f*%0.3f=%0.3f\n", numero1, numero2, (numero1*numero2));
        } else if (operador == '/') {
            printf("%0.3f/%0.3f=%0.3f\n", numero1, numero2, (numero1/numero2));
        }
    }
    return 0;
}
