/*esse programa avalia se o numero inteiro digitado pelo usuario é impar ou par
o if é usado para verificar se o resto da divisao pelo numero por 2 resulta em zero, caso seja ele informara que o numero é par caso o contrario ele informara que o numero é impar
*/

#include <stdio.h>
int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);


    if (numero % 2 == 0) {
        printf("O numero %d e par\n", numero);
    } else {
        printf("O numero %d e impar\n", numero);
    }

    return 0;
}