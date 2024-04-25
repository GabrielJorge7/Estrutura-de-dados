#include <stdio.h>

int contarPares(int vetor[], int tamanho) {
    int contador = 0;
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] % 2 == 0) {
            contador++;
        }
    }
 
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    printf("Digite os elementos do vetor\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int pares = contarPares(vetor, tamanho);
    printf("O vetor tem %d elementos pares\n", pares);

    
}
