/*esse programa recebe 2 valores e realiza a soma entre eles e apos isso recebe mais 2 numeros e os soma
 apos isso retorna a divisao entre os dois resultados 
*/

#include <stdio.h>
int main(){
    int valor1,valor2;

    printf("insira o primeiro numero: ");
    scanf("%d",&valor1);
    printf("insira o segundo numero: ");
    scanf("%d",&valor2);
    
    int soma = valor1 + valor2;
    printf("o resultado da soma e: %d \n", soma);
    
    int valor3, valor4;

    printf("insira o terceiro numero: ");
    scanf("%d",&valor3);
    printf("insira o quarto numero: ");
    scanf("%d",&valor4);
    
    int soma2 = valor3 + valor4;
    printf("o resultado da soma e: %d \n", soma2);

   float divisao = (float)soma / soma2;
    printf("o resultado da divisao e: %f \n", divisao);
    return 0;
}