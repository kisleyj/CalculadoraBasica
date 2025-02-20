#include <stdio.h>
#include <stdlib.h>
int main() {
    int num1, num2;
    
    // Solicita entrada do usuario
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    int resultado = num1 + num2;
    printf("Resultado da soma: %d\n", resultado);
    return 0;
}
