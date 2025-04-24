/*esse algoritmo retorna a vogal "e" para quando o usuario inserir a char "o" ou "O" 
a estrutura if verifica se o valor de char insirido pelo usuario é o requerido pelo programa
caso nao seja ele retorna uma mensagem de erro dizendo que a letra inserida esta errada
*/

#include <stdio.h>
    int main(){
        char caracter1,caracter2= 'e';

        printf("insira a letra 'o': ");
        scanf("%c",&caracter1);

        if(caracter1=='o' || caracter1 == 'O'){

            printf("%c \n", caracter2);

        }else{

            printf("letra errada \n");
            
        }


        return 0;
    }