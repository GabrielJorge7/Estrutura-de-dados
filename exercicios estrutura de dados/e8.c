#include <stdio.h>

int main() {
  
 int ano;
   
  
       printf("digite o ano");
       scanf("%d", &ano);
       
       if(ano % 4 == 0 && ano % 100 != 0){
            printf("é ano bissexto");
       }
       
       else{
            printf("não é ano bissexto ");
       }
      
   
   
   
}
