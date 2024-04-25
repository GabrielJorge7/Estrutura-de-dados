#include <stdio.h>

int main() {
    char profissao[50];
    float renda;
    float soma_renda = 0;
    float maior_media_renda = 0;
    char profissao_maior_media[50];
    int total_habitantes = 0;
    int contador_desempregados = 0;
    int contador_renda_acima_5000 = 0;

   
    while (1) {
        printf("Digite a profissao (ou 'x' para encerrar): ");
        scanf("%s", profissao);

      
        if (profissao[0] == 'x' || profissao[0] == 'X') {
            break;
        }

        printf("Digite a renda mensal: ");
        scanf("%f", &renda);

       
        soma_renda += renda;
        total_habitantes++;

        if (renda == 0) {
            contador_desempregados++;
        } else if (renda > 5000) {
            contador_renda_acima_5000++;
        }

       
        if (renda > maior_media_renda) {
            maior_media_renda = renda;
            strcpy(profissao_maior_media, profissao);
        }
    }

   
    float media_renda = soma_renda / total_habitantes;

   
    float percentual_desempregados = (float)contador_desempregados / total_habitantes * 100;
    float percentual_renda_acima_5000 = (float)contador_renda_acima_5000 / total_habitantes * 100;

  
    printf("a) Média da renda mensal da população: %.2f\n", media_renda);
    printf("b) Profissão com maior média de renda: %s\n", profissao_maior_media);
    printf("c) Percentual de pessoas desempregadas: %.2f%%\n", percentual_desempregados);
    printf("d) Percentual de pessoas com renda acima de R$ 5000,00: %.2f%%\n", percentual_renda_acima_5000);

    return 0;
}
