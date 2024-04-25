#include <stdio.h>

int main() {
  
     int nivel_satisfacao;
    float tempo_residencia_cidade;
    int contador_insatisfeitos = 0;
    int contador_residem_dez_anos = 0;
    int total_pessoas = 0;
    float percentual_insatisfeitas;
    float percentual_residem_dezanos;
    float soma_nivel_satisfacao = 0;
    float media_nivel_satisfacao;
    
    while(1){
        
        printf("De acordo com seu nivel satisfacao, digite o numero: 1 - satisfeitas, 2 - regular, 3 - insatisfeitas, (-1 para cancelar)\n");
        scanf("%d", &nivel_satisfacao);
        
        if (nivel_satisfacao == -1) {
            break;
        }
        
        printf("Tempo de residencia na cidade (em anos): ");
        scanf("%f", &tempo_residencia_cidade);

        soma_nivel_satisfacao += nivel_satisfacao;
        total_pessoas++;
        
        if (nivel_satisfacao == 3) {
            contador_insatisfeitos++;
        }

        if (tempo_residencia_cidade > 10) {
            contador_residem_dez_anos++;
        }
  }
    percentual_insatisfeitas = contador_insatisfeitos / total_pessoas * 100;  
    percentual_residem_dezanos = contador_residem_dez_anos / total_pessoas * 100;
    media_nivel_satisfacao = soma_nivel_satisfacao / total_pessoas;
        
    printf("Media do nivel de satisfacao da populacao: %.2f\n", media_nivel_satisfacao);
    printf("Percentual de pessoas insatisfeitas: %.2f%%\n", percentual_insatisfeitas);
    printf("Percentual de pessoas que residem na cidade ha mais de 10 anos: %.2f%%\n", percentual_residem_dezanos);
    
    return 0;
        
    
    
}
