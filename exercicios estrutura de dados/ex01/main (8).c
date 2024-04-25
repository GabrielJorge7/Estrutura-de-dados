#include <stdio.h>

int main() {
    float base1, base2, altura, area;

   
    printf("Digite o valor da base maior do trapézio: ");
    scanf("%f", &base1);
    printf("Digite o valor da base menor do trapézio: ");
    scanf("%f", &base2);
    printf("Digite o valor da altura do trapézio: ");
    scanf("%f", &altura);

   
    area = ((base1 + base2) * altura) / 2;

    
    printf("A área do trapézio é: %.2f\n", area);

    return 0;
}
