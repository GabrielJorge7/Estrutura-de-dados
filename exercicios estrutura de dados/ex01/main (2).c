#include <stdio.h>


float calcular_rendimento(float deposito, float taxa_juros) {
    return deposito * (taxa_juros / 100);
}


int main() {
    
    float deposito, taxa_juros;
    
    

   
    printf("Digite o valor do depósito: ");
    scanf("%f", &deposito);
    printf("Digite a taxa de juros (em porcentagem): ");
    scanf("%f", &taxa_juros);
    
 
    float rendimento = calcular_rendimento(deposito, taxa_juros);
    
   
    float valor_total = deposito + rendimento;
    
   
    printf("O rendimento é: R$ %.2f\n", rendimento);
    printf("O valor total após o rendimento é: R$ %.2f\n", valor_total);

    return 0;
}
