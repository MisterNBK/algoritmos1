/*esse programa é responsavel por receber um conjunto de caracteres limitados pelo programa(100 caracteres)
o usuario podera digitar ate mais que o limite proposto pelo programa mas sera apenas exibido os 100 primeiros caracteres atraves da propiedade "%100s" dentro da funcao scanf */

#include <stdio.h>
    int main(void){
        char caracteres[100];

        printf("escreva ate 100 caracteres (obs: substitua os espacos por '_')  \n texto=");
        scanf("%100s", &caracteres);

        printf("%s", caracteres);
    

    }