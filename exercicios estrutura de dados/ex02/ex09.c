#include <stdio.h>

int main() {
    int anos, meses, dias;

    
    printf("Digite a idade da pessoa em anos, meses e dias (separados por espaços): ");
    scanf("%d %d %d", &anos, &meses, &dias);

    
    int idadeemdias = (anos * 365) + (meses * 30) + dias;

    
    printf("A idade da pessoa em dias é: %d", idadeemdias);

    
}
