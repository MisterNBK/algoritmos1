#include <stdio.h>
    int main(){

    float peso=0,altura=0;
    float IMC = 0;
    
    scanf("%f %f", &peso, &altura);
    IMC = peso / (altura * altura);

    printf("seu indice de massa corporal e: %.2f",IMC);
        return 0;
    }