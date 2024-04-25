#include <stdio.h>

int main() {
    int valor, dentroIntervalo = 0, foraIntervalo = 0;

    for (int i = 1; i <= 10; i++) {
        printf("Digite o %do valor: ", i);
        scanf("%d", &valor);

        if (valor >= 10 && valor <= 20) {
            dentroIntervalo++;
        } else {
            foraIntervalo++;
        }
    }

    printf("Valores dentro do intervalo [10, 20]: %d\n", dentroIntervalo);
    printf("Valores fora do intervalo [10, 20]: %d\n", foraIntervalo);

    return 0;
}
