#include <stdio.h>

int calcularProdutoEscalar(int vetor1[], int vetor2[], int tamanho) {
    int produtoEscalar = 0;
    for (int i = 0; i < tamanho; i++) {
        produtoEscalar += vetor1[i] * vetor2[i];
    }

}

int main() {
    int tamanho;
    printf("Digite o tamanho dos vetores ");
    scanf("%d", &tamanho);

    int vetor1[tamanho];
    int vetor2[tamanho];

    printf("Digite os elementos do primeiro vetor\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("Digite os elementos do segundo vetor\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    int produtoEscalar = calcularProdutoEscalar(vetor1, vetor2, tamanho);
    printf("O produto escalar entre os dois vetores é %d\n", produtoEscalar);

    
}
