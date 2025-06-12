#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int min, max, esperado;

    printf("Digite o numero minimo: ");
    scanf("%d", &min);

    printf("Digite o numero maximo: ");
    scanf("%d", &max);

    if (min >= max) {
        printf("Erro: o numero minimo deve ser menor que o maximo.\n");
        return 1;
    }

    printf("Digite o numero esperado: ");
    scanf("%d", &esperado);

    if (esperado < min || esperado > max) {
        printf("Erro: o numero esperado deve estar entre %d e %d (inclusive).\n", min, max);
        return 1;
    }

    srand((unsigned) time(NULL));
    int sorteado = (rand() % (max - min + 1)) + min;

    int sucesso = (sorteado == esperado);

    printf("Numero sorteado: %d\n", sorteado);
    if (sucesso) {
        printf("Parabens! Voce foi sorteado.\n");
    } else {
        printf("Que pena! Voce nao foi sorteado.\n");
    }

    FILE *log = fopen("log.txt", "a");
    if (log == NULL) {
        perror("Erro ao abrir o arquivo log.txt");
        return 1;
    }

    fprintf(log, "numero minimo: %d\n", min);
    fprintf(log, "numero maximo: %d\n", max);
    fprintf(log, "numero esperado: %d\n", esperado);
    fprintf(log, "numero sorteado: %d\n", sorteado);
    fprintf(log, "resultado: %s\n\n", sucesso ? "sorteado" : "não sorteado");

    fclose(log);

    return 0;
}