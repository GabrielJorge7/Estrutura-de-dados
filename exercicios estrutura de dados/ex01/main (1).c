#include <stdio.h>


float calcular_media(float nota1, float nota2, float nota3) {
    float media = (nota1 + nota2 + nota3) / 3;
    return media;
}

// Função principal
int main() {
   
    float nota1, nota2, nota3;

  
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    
    
    float media = calcular_media(nota1, nota2, nota3);
    
   
    printf("A média das notas é: %.2f\n", media);

    return 0;
}


