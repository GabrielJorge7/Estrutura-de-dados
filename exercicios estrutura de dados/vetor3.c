#include <stdio.h>
#include <stdbool.h>

bool verificarCrescente(int vetor[], int tamanho) {
    for (int i = 1; i < tamanho; i++) {
        if (vetor[i] < vetor[i - 1]) {
            return false; 
        }
    }
    return true;
}

int main() {
    int tamanho;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    int vetor[tamanho];
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    bool ordenado = verificarCrescente(vetor, tamanho);
    if (ordenado) {
        printf("O vetor está ordenado de forma crescente.\n");
    } else {
        printf("O vetor não está ordenado de forma crescente.\n");
    }

    
}
