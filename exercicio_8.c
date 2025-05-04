#include <stdio.h>
    int main(){
        float consumo;
        float distancia,gasto;
        scanf("%f %f",&distancia ,&gasto);

        consumo = distancia / gasto;
        printf("consumo: %f km/l",consumo);

        return 0;  
    }