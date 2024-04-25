#include <stdio.h>


int main() {
    float numero;
    int parte_inteira;
    float parte_fracionaria;
    int arredondamento;

    printf("Digite um número real: ");
    scanf("%f", &numero);

    
    parte_inteira = (int)numero;

    
    parte_fracionaria = numero - parte_inteira;

    arredondamento = round(numero);
    

    
    printf("Parte inteira: %d\n", parte_inteira);
    printf("Parte fracionária: %.2f\n", parte_fracionaria);
    printf("Arredondamento: %d\n", arredondamento);

    return 0;
}
