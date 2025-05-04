#include <stdio.h>
    int main(){
        float capital,juros;
        int tempo;
        float total;
    
        scanf("%f %f", &capital, &juros);
        scanf("%d", &tempo);

        
        for (int i = 0; i <= tempo; i++) {
            if(capital != total){
                total = capital;
            }
            capital*= (1 + (juros /100));
          }
          printf("%.2f",total);
    }