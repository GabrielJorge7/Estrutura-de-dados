#include <stdio.h>

int main(){
float preco;
int codigo;
int quant;

 printf("digite o codigo do pedido");
 scanf("%d", &codigo);
 
 
printf("digite a quantidade do pedido");
 scanf("%d", &quant);
 
 switch(codigo){
     
     case 100:
     preco = 1.20;
     break;
      case 101:
     preco = 1.30;
     break;
      case 102:
     preco = 1.50;
     break;
      case 103:
     preco = 1.20;
     break;
      case 104:
     preco = 1.30;
     break;
      case 105:
     preco = 1.00;
     break;
     
     default:
     printf("codigo invalido");
     return 1;
 }
 
 float total = preco * quant;
  printf("o valor total é %.2f\n", total);
   return 0;
 


}