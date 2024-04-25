#include <stdio.h>

int main() {
    int numero, total = 0, contador = 0;
    float media;

    printf("Digite um numero entre 13 e 73 (ou um valor negativo para terminar): ");
    scanf("%d", &numero);

    while (numero >= 13 && numero <= 73) {
        total += numero;
        contador++;

        printf("Digite um numero entre 13 e 73 (ou um valor negativo para terminar): ");
        scanf("%d", &numero);
    }

    if (contador > 0) {
        media = (float) total / contador;
        printf("A media aritmetica dos numeros lidos entre 13 e 73 e: %.2f\n", media);
    } else {
        printf("Nenhum numero valido foi inserido.\n");
    }

   
}
