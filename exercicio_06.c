//esse programa recebe dois valores inseridos pelo usuario e imprime seu resultado na tela

#include <stdio.h>
int main(){
    int a,b;

    printf("insira o primeiro numero: ");
    scanf("%d",&a);
    printf("insira o segundo numero: ");
    scanf("%d",&b);
    
    int soma = a + b;
    printf("o resultado da soma e: %d \n", soma); 
    return 0;
}