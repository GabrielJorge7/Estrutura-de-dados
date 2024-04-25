#include <stdio.h>

int main() {
    int idadeemdias;
    int anos, meses, dias;

   
    printf("Digite a idade da pessoa em dias: ");
    scanf("%d", &idadeemdias);

   
    anos = idadeemdias / 365;
    meses = (idadeemdias % 365) / 30;
    dias = (idadeemdias % 365) % 30;

    
    printf("A idade da pessoa é: %d anos, %d meses e %d dias.", anos, meses, dias);

  
}
