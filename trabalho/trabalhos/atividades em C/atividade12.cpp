#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main() {

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    int numero1, numero2;

    printf("Digite um número: ");
    scanf("%d%*c", &numero1);
    printf("digite um número: ");
    scanf("%d%*c", &numero2);

    int resultado = pow(numero1, numero2);
    printf("O número %d elevado ao número %d é igual a: %d\n", numero1, numero2, resultado);
    return 0;
    
}