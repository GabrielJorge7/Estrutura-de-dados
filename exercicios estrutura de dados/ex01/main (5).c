#include <stdio.h>

int main() {
    int idade_anos;
    int idade_meses, idade_dias, idade_horas, idade_minutos;

    
    printf("Digite a idade em anos: ");
    scanf("%d", &idade_anos);

    
    idade_meses = idade_anos * 12;
    idade_dias = idade_anos * 365;
    idade_horas = idade_dias * 24;
    idade_minutos = idade_horas * 60;

   
    printf("Idade em meses: %d\n", idade_meses);
    printf("Idade em dias: %d\n", idade_dias);
    printf("Idade em horas: %d\n", idade_horas);
    printf("Idade em minutos: %d\n", idade_minutos);

    return 0;
}
