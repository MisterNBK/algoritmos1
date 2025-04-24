/*esse codigo apenas recebe como entrada as 3 dimensões de um algoritmo em metros e os exibe na tela*/

#include <stdio.h>
    int main(){
        float n1,n2,n3;

        printf("insira o primeiro numero em metros: ");
        scanf("%f", &n1);

        printf("insira o segundo numero em metros: ");
        scanf("%f", &n2);
    
        printf("insira o terceiro numero em metros: ");
        scanf("%f", &n3);

        printf("dimensao 1: %f \ndimensao 2: %f \ndimensao 3: %f",n1,n2,n3);
        return 0;
    }
