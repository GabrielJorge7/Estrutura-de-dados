#include <stdio.h>

int main() {
    char sexo;
    float altura; 
    float pesoideal;

    printf("Digite o sexo da pessoa (M para masculino, F para feminino): ");
    scanf(" %c", &sexo);

    printf("Digite a altura da pessoa em metros: ");
    scanf("%f", &altura);

    if (sexo == 'M' || sexo == 'm') {
        pesoideal = (72.7 * altura) - 58;
        printf("o peso ideal para um homem com %.2f metros de altura é %.2f kg.", altura, pesoideal);
    } 
    
    else if (sexo == 'F' || sexo == 'f') {
        pesoideal = (62.1 * altura) - 44.7;
        printf("o peso ideal para uma mulher com %.2f metros de altura é %.2f kg.", altura, pesoideal);
    } 
    
    else {
        printf("sexo inválido.");
    }

    
}
