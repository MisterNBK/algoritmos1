/* o programa verifica se a soma entre dois numeros inteiros inseridos pelo usuario é maior que 10
utilizando uma estrutura condicional if o programa faz a verificacao se o resultado da soma e maior ou menor que 10
caso seja maior o programa exibe uma mensagem de que a soma e maior que 10
caso contrario o programa exibe uma mensagem de que a soma e menor que 10
*/

#include <stdio.h>

int main() {
    int num1, num2, soma;

    printf("Digite o primeiro numero inteiro: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero inteiro: ");
    scanf("%d", &num2);
   
    soma = num1 + num2;

    if (soma >= 10) {
        printf("A soma dos numeros e maior ou igual a 10.\n");
    } else {
        printf("A soma dos numeros e menor que 10.\n");
    }

    return 0;
}