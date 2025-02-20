#include <stdio.h>
#include <stdbool.h>

// Constantes e protótipos
#define OPCAO_SAIR 5
#define ERRO_DIVISAO_ZERO "Erro: Divisao por zero!\n"

void exibir_menu();
int soma(int a, int b);
int subtrair(int a, int b);
int multiplicar(int a, int b);
float dividir(int a, int b);
bool verificar_divisor(int divisor);

int main() {
    int opcao, num1, num2;
    
    do {
        exibir_menu();
        scanf("%d", &opcao);
        
        // Só pede números se for uma operação válida (1-4)
        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois numeros: ");
            scanf("%d %d", &num1, &num2);
        }
        
        switch(opcao) {
            case 1:
                printf("Soma: %d\n", soma(num1, num2));
                break;
            case 2:
                printf("Subtracao: %d\n", subtrair(num1, num2));
                break;
            case 3:
                printf("Multiplicacao: %d\n", multiplicar(num1, num2));
                break;
            case 4:
                printf("Divisao (%d/%d): ", num1, num2);
                if(verificar_divisor(num2)) {
                    printf("Resultado: %.2f\n", dividir(num1, num2));
                } else {
                    printf(ERRO_DIVISAO_ZERO);
                }
                break;
            case OPCAO_SAIR:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != OPCAO_SAIR);
    
    return 0;
}

void exibir_menu() {
    printf("\n=== Calculadora ===\n");
    printf("1. Somar\n2. Subtrair\n3. Multiplicar\n4. Dividir\n5. Sair\n");
    printf("Escolha uma opcao: ");
}

// Implementação das operações
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

bool verificar_divisor(int divisor) {
    return (divisor != 0);
}