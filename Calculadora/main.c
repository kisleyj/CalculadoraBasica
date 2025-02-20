#include <stdlib.h>
#include <stdio.h>

// Protótipos das funções
int soma(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);
int main() {
    int num1, num2;
    printf("Digite dois numeros inteiros (ex 20 30): ");
    scanf("%d %d", &num1, &num2);
    
    // Chamada das funções e exibição dos resultados
    printf("Soma: %d\n", soma(num1, num2));
    printf("Subtracao: %d\n", subtrair(num1, num2));
    printf("Multiplicacao: %d\n", multiplicar(num1, num2));
    printf("Divisao: %.2f\n", dividir(num1, num2)); 
    return 0;
}
// Implementação das funções
int soma(int a, int b) {
    return a + b;
}
int subtrair(int a, int b) {
    return a - b;
}
int multiplicar(int a, int b) {
    return a * b;
}
float dividir(int a, int b) {
    return (float)a / b;
}