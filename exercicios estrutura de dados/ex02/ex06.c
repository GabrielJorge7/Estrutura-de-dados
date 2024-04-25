#include <stdio.h>

int main() {
    int codigo;
    float precouni;
    int quant;

    printf("Digite o código do produto: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quant);

    switch (codigo) {
        case 1001:
            precouni = 5.32;
            break;
        case 1324:
            precouni = 6.45;
            break;
        case 6548:
            precouni = 2.37;
            break;
        case 987: 
            precouni = 5.32;
            break;
        case 7623:
            precouni = 6.45;
            break;
        default:
            printf("Código de produto inválido.");
           
    }

    float precototal = precouni * quant;
    printf("O preço total devido é: R$ %.2f", precototal);

  
}
