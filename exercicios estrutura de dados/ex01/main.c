/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int num1, num2;
 
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);
 
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);
 
    printf("Soma dos dois números: %d\n", num1 + num2);
 
    printf("Subtração do primeiro pelo segundo: %d\n", num1 - num2);
 
    printf("Subtração do segundo pelo primeiro: %d\n", num2 - num1);
 
    printf("Multiplicação dos dois números: %d\n", num1 * num2);
   
    printf("Divisão do primeiro pelo segundo: %.2f\n", (float)num1 / num2);
 
    printf("Divisão do segundo pelo primeiro: %.2f\n", (float)num2 / num1);
 
    printf("Quociente inteiro da divisão do primeiro pelo segundo: %d\n", num1 / num2);
 
    printf("Quociente inteiro da divisão do segundo pelo primeiro: %d\n", num2 / num1);
 
    printf("Resto da divisão do primeiro pelo segundo: %d\n", num1 % num2);
 
    printf("Resto da divisão do segundo pelo primeiro: %d\n", num2 % num1);
 
    return 0;
}

