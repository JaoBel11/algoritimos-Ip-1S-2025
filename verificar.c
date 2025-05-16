#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int numero;

    while (1) {
        printf("Digite um numero inteiro (0 para sair): ");
        scanf("%d", &numero);

        if (numero == 0) {
            printf("Encerrando o programa.\n");
            break;
        }

        if (ehPrimo(numero)) {
            printf("%d eh um numero primo.\n", numero);
        } else {
            printf("%d nao eh um numero primo.\n", numero);
        }
    }

    return 0;
}
