/* esse algoritmo recebe 3 valores inteiros e retorna a media deles
a variavel 'media' realiza a soma dos 3 valores primeiro e apos isso divide o resultado por 3 imprimindo na tela o resultado*/

#include <stdio.h>
    int main(){
        int num1,num2,num3;
        int media;

        printf("insira o primeiro numero: ");
        scanf("%d", &num1);

        printf("insira o segundo numero: ");
        scanf("%d", &num2);
    
        printf("insira o terceiro numero: ");
        scanf("%d", &num3);

        media= (num1 + num2 + num3) / 3;

        printf("a media dos numeros e: %d",media);

        return 0;
    }