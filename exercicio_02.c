/*o programa avalia a altura de uma pessoa em relacao a media nacional com base no genero informado
primeiramente, o programa verifica se a altura e valida, caso a altura seja menor que zero, uma mensagem de erro e exibida
se a altura for maior que metros o programa a converte e apos a conversao verifica se a altura esta dentro de um intervalo valido caso contrario exibe uma mensagem de erro
se o genero nao for M ou F , o programa exibe uma mensagem de erro e termina
caso todas as condicoes sejam cumpridas o programa compara a altura da pessoa com a media nacional para o genero correspondente
*/

#include <stdio.h>
int main(){
    float altura;
    char genero;
    int metros = 100;
    printf("Digite a altura da pessoa em Metros: ");
    scanf("%f", &altura);

   
    printf("Digite o numero correspondente ao genero da pessoa (1-M/2-F): ");
    scanf(" %c", &genero);
    

    if(altura<0){
        printf("altura invalida \n");
        return 1;
    }
    if (altura < metros){
        altura--;
        if (altura < 1.0){
        
            altura++;
        }
        else if (altura > 1.0){

            printf("altura invalida");
            return 1;
        }
    }
   
    if (altura > metros){

        altura = altura / 100;

        if (altura < 1 || altura >=10){

            printf("altura invalida \n");
            return 1;
        }
    }
    
    if (genero != 'F'){

        if (genero != 'M'){

            printf("genero informado errado");
            return 1;
        }
    }

    if (genero == 'M' && altura >= 1.75){

        printf("este homem esta acima da media de altura nacional");
    }
    else if (genero == 'M'){

        printf("este homem esta abaixo da media de altura nacional");
    }

    if (genero == 'F' && altura >= 1.62){

        printf("esta mulher esta acima da media de altura nacional");
    }
    else if (genero == 'F'){

        printf("esta mulher esta abaixo da media de altura nacional");
    }
    return 0;
}