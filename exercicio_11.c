/*esse programa é resonsavel por receber dois valores reais e retornar se a divisao entre eles é um numero inteiro
utilizando uma estrutura de condicao if para verificar se o resto da divisao entre o primeiro valor e o segundo valor é zero
porem verificar o resto de uma divisao entre numeros reais nao é possive, entao antes da verificao os valores sao transformados em inteiros podendo assim verificar se o resultado dessa divisao é um numero inteiro ou nao
*/

#include <stdio.h>
int main(){

    float numero1, numero2;
    int resultado;
    printf("insira o primeiro numero: ");
    scanf("%f", &numero1);

    printf("insira o segundo numero: ");
    scanf("%f", &numero2);

    resultado = numero1 / numero2;
    if ((int)numero1 % (int)numero2 == 0){
        printf("o resultado e: %d \n", resultado);
    }
    else{

        printf("resultado nao e um numero inteiro");
    }

    return 0;
}