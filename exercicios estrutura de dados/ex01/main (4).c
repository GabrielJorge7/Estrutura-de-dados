#include <stdio.h>
#include <math.h>

int main() {
    int numero;
    float raiz_quadrada;
    int quadrado;

    // Solicitar o número inteiro ao usuário
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    // Calcular a raiz quadrada do número
    raiz_quadrada = sqrt(numero);

    // Calcular o quadrado do número
    quadrado = numero * numero * numero * numero;

    // Imprimir os resultados
    printf("Raiz quadrada: %.2f\n", raiz_quadrada);
    printf("Quadrado: %d\n", quadrado);

    return 0;
}
