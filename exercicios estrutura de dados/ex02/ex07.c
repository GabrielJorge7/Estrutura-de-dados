#include <stdio.h>

int main() {
    int i;
    float a, b, c;

    
    printf("Digite um valor inteiro positivo para i: ");
    scanf("%d", &i);

    printf("Digite três valores reais para a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

   
   
    printf("Valores lidos:");
    printf("i: %d", i);
    printf("a: %.2f", a);
    printf("b: %.2f", b);
    printf("c: %.2f", c);

   
}
