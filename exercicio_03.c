/*esse programa recebe tres valores inteiros e os imprime na tela na ordem em que foram inseridos
*/

#include <stdio.h>
int main()
{
    int numero1, numero2, numero3;
    printf("insira o valor de A: ");
    scanf("%d", &numero1);

    printf("insira o valor de B: ");
    scanf("%d", &numero2);

    printf("insira o valor de C: ");
    scanf("%d", &numero3);

    printf("os valores inseridos foram \n numero1: %d \n numero2: %d \n numero3: %d", numero1, numero2, numero3);
    return 0;
}