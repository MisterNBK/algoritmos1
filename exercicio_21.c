/*esse algoritmo tem a funcao de verificar se o resultado da divisao entre dois numeros inteiros informados pelo usuario é par ou impar
apos receber os valores digitados pelo usuario o programa realiza a divisão de valorA por valorB
para garantir que um resultado exatoo programa converte explicitamente os valores para real antes da divisao
apos isso o algoritmo imprime o resultado dessa divisao e utilizando uma estrutura if verifica se esse resultado é par ou impar*/

#include <stdio.h>
    int main(){
        int valorA,valorB;
        float resultado;

        printf("insira o primeiro numero: ");
        scanf("%d",&valorA);

        printf("insira o segundo numero: ");
        scanf("%d",&valorB);

        
       

        resultado = (float)valorA / (float)valorB;
        int teste = valorA % valorB;
        

        printf("o resultado e: %f ",resultado);

       
        if(teste % 2 ==0){
            printf("o resto dessa divisao %d por %d e par \n",valorA,valorB);
        }
        else{
            printf("o resto dessa divisao %d por %d nao e par \n",valorA,valorB);
        }
        return 0;
    }