#include <stdio.h>

int main() {
    char sexo;
    char estado_civil;
    int total_habitantes = 0;
    int contador_sexo_masculino = 0;
    int contador_sexo_feminino = 0;
    int contador_solteiros = 0;
    int contador_casados = 0;
    int contador_divorciados = 0;

   
    while (1) {
        printf("Digite o sexo (M - Masculino, F - Feminino, X para encerrar): ");
        scanf(" %c", &sexo);

       
        if (sexo == 'X') {
            break;
        }

        printf("Digite o estado civil (S - Solteiro, C - Casado, D - Divorciado): ");
        scanf(" %c", &estado_civil);

       
        if (sexo == 'M' || sexo == 'm') {
            contador_sexo_masculino++;
        } else if (sexo == 'F' || sexo == 'f') {
            contador_sexo_feminino++;
        }

        if (estado_civil == 'S' || estado_civil == 's') {
            contador_solteiros++;
        } else if (estado_civil == 'C' || estado_civil == 'c') {
            contador_casados++;
        } else if (estado_civil == 'D' || estado_civil == 'd') {
            contador_divorciados++;
        }

        total_habitantes++;
    }

  
    float percentual_solteiros = (float)contador_solteiros / total_habitantes * 100;
    float percentual_divorciados = (float)contador_divorciados / total_habitantes * 100;

   
    printf("a) Distribuição da população por sexo:\n");
    printf("   Masculino: %d\n", contador_sexo_masculino);
    printf("   Feminino: %d\n", contador_sexo_feminino);
    printf("b) Percentual de pessoas solteiras: %.2f%%\n", percentual_solteiros);
    printf("c) Quantidade de pessoas casadas: %d\n", contador_casados);
    printf("d) Percentual de pessoas divorciadas: %.2f%%\n", percentual_divorciados);

    return 0;
}
