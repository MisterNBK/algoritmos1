/*esse algoritmo é responsavel por converter um valor real inserido pelo usuario em um numero inteiro
apos receber o valor do usuario a variavel 'inteiro' recebe a forma convertida desse valor para inteiro
e apos isso imprime a conversao na tela */



#include <stdio.h>
int main() {
    float valor;
    int inteiro;

    printf("Digite um valor em ponto flutuante: ");
    scanf("%f", &valor);

    inteiro = (int)valor;

    printf("O valor convertido para inteiro é: %d\n", inteiro);

    return 0;
}