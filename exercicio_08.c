/*Esse programa recebe 4 valores sendo eles nome, idade, genero e altura e os imprime na tela
*/

#include <stdio.h>
int main() {
    
    char nome[25];
    int idade;
    char genero;
    float altura;

   
    printf("Digite seu nome: ");
    scanf("%s", &nome);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu gênero (M/F): ");
    scanf("%c", genero);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    
    printf("Nome: %s\n", nome);
    printf("Idade: %d anos\n", idade);
    printf("eenero: %s\n", genero);
    printf("Altura: %f metros\n", altura);

    return 0;
}