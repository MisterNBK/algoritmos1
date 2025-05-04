#include <stdio.h>
    int main(){
        float reais,dolar,euro;
        scanf("%f", &reais);
        
        dolar = reais * 5.64;
        euro = reais * 6.39;

        printf("dolares convertidos:%.2f\n euros convertidos:%.2f\n",dolar,euro);

        return 0;
    }