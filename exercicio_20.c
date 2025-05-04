#include <stdio.h>
    int main(){
        float numeros[4],limite,media;
        int i =0;

        while (i<4){
        scanf("%f", &numeros[i]); 
        i++;  
        }
        scanf("%f", &limite);

        media = (numeros[0] + numeros[1] + numeros[2] + numeros[3]) / 4;
        
        if(media > limite){
            printf("%f, maior",media);
            return 0;
        }
        if (media == limite){
            printf("%f, igual",media);
            return 0;
        }
        if(media < limite){
            printf("%f, menor",media);
            return 0;
        }
    }