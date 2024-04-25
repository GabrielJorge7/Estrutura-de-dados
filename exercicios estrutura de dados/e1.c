#include <stdio.h>

int main() {
    int idade, contador_pessoas = 0, maior_idade = 0, contador_altura_acima_de_180 = 0;
    float altura, soma_idades = 0, soma_alturas = 0;

    
    while (1) {
        printf("Digite a idade da pessoa (ou um número negativo para encerrar): ");
        scanf("%d", &idade);

        if (idade < 0) {
            break;
        }

        printf("Digite a altura da pessoa (em metros): ");
        scanf("%f", &altura);

        soma_idades += idade;
        soma_alturas += altura;
        contador_pessoas++;

        if (idade > maior_idade) {
            maior_idade = idade;
        }
        
        if (altura > 1.80) {
            contador_altura_acima_de_180++;
        }
    }

     float media_idade = soma_idades / contador_pessoas;
    float media_altura = soma_alturas / contador_pessoas;

   printf("a) Média da idade da população: %.2f\n", media_idade);
    printf("b) Média da altura da população: %.2f\n", media_altura);
    printf("c) Maior idade registrada: %d\n", maior_idade);
    printf("d) Percentual de pessoas com altura acima de 1,80 metros: %.2f%%\n", (float)contador_altura_acima_de_180 / contador_pessoas * 100);

    return 0;
}
