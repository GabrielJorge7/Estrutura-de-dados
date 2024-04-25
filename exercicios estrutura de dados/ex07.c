#include <stdio.h>

int main() {
    float salario, mediaSalario, mediaFilhos, maiorSalario;
    int numFilhos, totalPessoas = 0, totalFilhos = 0, pessoasSalarioAte100 = 0;

    
    maiorSalario = -1;

    printf("Digite o salario da pessoa (ou um valor negativo para terminar): ");
    scanf("%f", &salario);

    while (salario >= 0) {
        printf("Digite o numero de filhos: ");
        scanf("%d", &numFilhos);

       
        if (salario <= 100) {
            pessoasSalarioAte100++;
        }

       
        mediaSalario += salario;

        
        totalFilhos += numFilhos;

        
        if (salario > maiorSalario) {
            maiorSalario = salario;
        }

        
        totalPessoas++;

        
        printf("Digite o salario da pessoa (ou um valor negativo para terminar): ");
        scanf("%f", &salario);
    }

    
    if (totalPessoas > 0) {
        mediaSalario /= totalPessoas;
    }

    
    if (totalPessoas > 0) {
        mediaFilhos = (float) totalFilhos / totalPessoas;
    }

    
    float percentualSalarioAte100 = ((float) pessoasSalarioAte100 / totalPessoas) * 100;

    
    printf("\n");
    printf(" Media do salario da populacao: %.2f\n", mediaSalario);
    printf(" Media do numero de filhos: %.2f\n", mediaFilhos);
    printf(" Maior salario: %.2f\n", maiorSalario);
    printf(" Percentual de pessoas com salario ate R$100,00: %.2f%%\n", percentualSalarioAte100);

    return 0;
}
