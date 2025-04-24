/*o programa recebe 3 valores sendo eles dois valores reais 'numero1' e 'numero2' e um conjunto de caracteres 'texto'*/

#include <stdio.h>
    int main(){
        float numero1,numero2;
        char texto[5];

        printf("insira o primeiro numero: ");
        scanf("%f", &numero1);
    
        printf("insira o segundo numero: ");
        scanf("%f", &numero2);

        printf("insira 5 caracteres: ");
      
        scanf("%5s", &texto); 
       
        printf("os valores inseridos foram: \nnumero1: %f \nnumero2: %f \ntexto: %s",numero1,numero2,texto);

        return 0;
    }