/*esse programa exibe um cardapio para o usuario e exibe na tela a opcao escolhida
a variavel 'escolha' é utilizado como seletor de escolha do usuario 
utilizando uma estrutura switch case para verficar qual das opcoes em forma de numero o usuario escolheu, a opcao escolhida é imprimida na tela
caso o usuario nao insira uma opcao entre 1 a 5 o programa retornara uma mensagem de erro
*/

#include <stdio.h>
int main() {
    int escolha;

    printf("=== Cardapio ===\n");
    printf("1-Pizza\n");
    printf("2-Hamburguer\n");
    printf("3-Salada\n");
    printf("4-Lasanha\n");
    printf("5-Sorvete\n");
    printf("Escolha uma opcao (1-5): ");
    scanf("%d", &escolha);

    
    switch (escolha) {
        case 1:
            printf("Voce escolheu Pizza\n");
            break;
        case 2:
            printf("Voce escolheu Hamburguer\n");
            break;
        case 3:
            printf("Voce escolheu Salada\n");
            break;
        case 4:
            printf("Voce escolheu Lasanha\n");
            break;
        case 5:
            printf("Voce escolheu Sorvete\n");
            break;
        default:
    
            printf("Opcao invalida\n");
            break;
    }

    return 0;
}