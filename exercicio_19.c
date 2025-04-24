/*esse programa recebe dois valores reaois e realiza a multiplicacao desses valores e retorna obrigatoriamente um valor inteiro
apos o algoritmo receber os valores pelo usuario, e realizada a multiplicacao desses valores
com uma estrutura if o codigo faz a verificacao do resultado dessa multiplicacao o comparando com o seu valor convertido para inteiro se os valores forem iguais o programa retorna o resutlado na tela
caso o valor nao seja um numero inteiro o programa converte o valor dessa multiplicacao para seu numero inteiro e o imprime na tela 
*/

#include <stdio.h>
int main(){

    float num1, num2;
    float multiplicacao;
    printf("insira o primeiro numero: ");
    scanf("%f", &num1);

    printf("insira o segundo numero: ");
    scanf("%f", &num2);

    multiplicacao = num1 * num2;

    if (multiplicacao == (int)multiplicacao ){

        printf("o resultado e: %f \n", multiplicacao);
    }
    else{
        
        printf("o resultado %f nao e um numero inteiro,convertendo\n",multiplicacao);
        multiplicacao = (int)multiplicacao;
        printf("o novo resultado e: %f \n", multiplicacao);
    }

    return 0;
}