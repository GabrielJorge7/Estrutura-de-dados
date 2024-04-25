#include <stdio.h>

int main() {
    int A, B, C;

    
    printf("Digite três números inteiros positivos (A, B, C): ");
    scanf("%d %d %d", &A, &B, &C);

   
    if (A >= B && A >= C) {
        if (B >= C) {
            printf("Em ordem decrescente: %d %d %d", A, B, C);
        } 
        else {
            printf("Em ordem decrescente: %d %d %d", A, C, B);
        }
    } 
    else if (B >= A && B >= C) {
       
        if (A >= C) {
            printf("Em ordem decrescente: %d %d %d", B, A, C);
        } 
        else {
            printf("Em ordem decrescente: %d %d %d", B, C, A);
        }
    } 
    else { 
       
        if (A >= B) {
            printf("Em ordem decrescente: %d %d %d", C, A, B);
        } 
        else {
            printf("Em ordem decrescente: %d %d %d", C, B, A);
        }
    }

  
}
