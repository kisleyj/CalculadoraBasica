#include <stdlib.h>
#include <stdio.h>

// Prototipo da funcao
int soma(int a, int b);
int subtrair(int a, int b);

int main() {
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    // Soma
    printf("Soma: %d\n", soma(num1, num2));
    // Subtracao
printf("Subtracao: %d\n", subtrair(num1, num2));
return 0;
}
// Implementacao da funcao
int soma (int a, int b) {
    return a + b;
}
int subtrair(int a, int b) {
    return a - b;
}
