#include <stdio.h>
    int main(){
        float valorOriginal, desconto, valorFinal;
        scanf("%f %f", &valorOriginal, &desconto);
        
        valorFinal = valorOriginal - (valorOriginal * (desconto / 100));
        printf("valor final: %.2f\n", valorFinal);

            return 0;
    }