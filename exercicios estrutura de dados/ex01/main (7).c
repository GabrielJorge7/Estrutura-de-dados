#include <stdio.h>
#include <math.h>

int main() {
    float raio, area;
    const float pi = 3.14;

    
    printf("Digite o valor do raio do círculo: ");
    scanf("%f", &raio);

   
    area = pi * pow(raio, 2);

   
    printf("A área do círculo é: %.2f\n", area);

    return 0;
}
