#include <stdio.h>
#include <stdbool.h>

// Protótipos das funções
int soma(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);
bool verificar_divisor(int divisor);

#define ERRO_DIVISAO_ZERO "Erro: Divisao por zero!\n"

int main() {
    int num1, num2;
    printf("Digite dois numeros inteiros (ex: 20 30): ");
    scanf("%d %d", &num1, &num2);

    printf("Soma: %d\n", soma(num1, num2));
    printf("Subtracao: %d\n", subtrair(num1, num2));
    printf("Multiplicacao: %d\n", multiplicar(num1, num2));
    
    // Divisão com tratamento de erro
    printf("Divisao (%d/%d): ", num1, num2);
    if(verificar_divisor(num2)) {
        printf("Resultado: %.2f\n", dividir(num1, num2));
    } else {
        printf(ERRO_DIVISAO_ZERO);
    }

    return 0;
}

int soma(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

bool verificar_divisor(int divisor) {
    return (divisor != 0);
}

float dividir(int a, int b) {
    return (float)a / b;
}