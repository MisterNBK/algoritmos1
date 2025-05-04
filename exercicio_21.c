#include <stdio.h>
    int main(){
        int inicial =0;
        int contador=0;

        while(inicial != 5){
            inicial++;
        }
        if(inicial == 5 ){
            inicial--;
            for(inicial;inicial>0;inicial--){
                if(inicial % 2 ==0){
                    contador++;
                }
                
            }
        }
        printf("%d e %d",inicial, contador);
        return 0;
    }