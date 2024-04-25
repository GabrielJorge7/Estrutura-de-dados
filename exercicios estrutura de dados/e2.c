#include <stdio.h>

int main() {
    int cor_pele, grau_escolaridade;
    int total_habitantes = 0;
    int contador_cor[5] = {0}; 
    int contador_superior_completo = 0;
    int contador_medio_incompleto = 0;

   
    while (1) {
        printf("Digite a cor da pele (0 - Branca, 1 - Preta, 2 - Parda, 3 - Amarela, 4 - Indígena, -1 para encerrar): ");
        scanf("%d", &cor_pele);

       
        if (cor_pele == -1) {
            break;
        }

        printf("Digite o grau de escolaridade (0 - Ensino médio incompleto, 1 - Ensino médio completo, 2 - Ensino superior completo): ");
        scanf("%d", &grau_escolaridade);

      
        if (cor_pele >= 0 && cor_pele <= 4) {
            contador_cor[cor_pele]++;
            total_habitantes++;

            if (grau_escolaridade == 2) {
                contador_superior_completo++;
            } else if (grau_escolaridade == 0) {
                contador_medio_incompleto++;
            }
        } else {
            printf("Cor da pele inválida!\n");
        }
    }

    
    float percentual_superior_completo = (float)contador_superior_completo / total_habitantes * 100;
    float percentual_medio_incompleto = (float)contador_medio_incompleto / total_habitantes * 100;

  
    printf("a) Distribuição da população por cor da pele:\n");
    printf("   Branca: %d\n", contador_cor[0]);
    printf("   Preta: %d\n", contador_cor[1]);
    printf("   Parda: %d\n", contador_cor[2]);
    printf("   Amarela: %d\n", contador_cor[3]);
    printf("   Indígena: %d\n", contador_cor[4]);
    printf("b) Percentual de pessoas com ensino superior completo: %.2f%%\n", percentual_superior_completo);
    printf("c) Percentual de pessoas com ensino médio incompleto: %.2f%%\n", percentual_medio_incompleto);

    return 0;
}
