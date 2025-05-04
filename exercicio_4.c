#include <stdio.h>
    int main(){
        int valor1=0,valor2=0;
        scanf("%d %d", &valor1, &valor2);
        int temporario;

        temporario = valor1;
        valor1 = valor2;
        valor2 = temporario;

        printf("valor1:%d\n valor2:%d",valor1,valor2);
    }