#include <stdio.h>

int main(){
short idade = 0;

printf("digite a idade ");
scanf("%hd", &idade);

if (idade >=5 && idade <= 7)
{
    printf("esta classificado na categoria infatil A");
}
else if(idade >=8 && idade <= 10)
{
    printf("esta classificado na categoria infatil B");
}

else if (idade >=11 && idade <= 13)
{
    printf("esta classificado na categoria Juvenil A");
}

else if (idade >=14 && idade <= 17)
{
    printf("esta classificado na categoria Juvenil B");
}

else if (idade >= 18)
{
    printf("esta classificado na categoria adulto");
}

else 
{
    printf("Idade não valida");
}




}