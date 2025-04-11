#include <stdio.h>

int main() {
    int n, k;
    float mediaGeral = 0.0, maiorNota = 0.0, menorNota = 10.0;
    int aprovados = 0;

    // Solicita o número de alunos
    printf("Digite o numero de alunos da turma: ");
    scanf("%d", &n);

    // Cria o vetor para armazenar as notas
    float notas[n];

    // Lê as notas dos alunos
    for (int i = 0; i < n; i++) {
        do {
            printf("Digite a nota do aluno %d (entre 0.0 e 10.0): ", i + 1);
            scanf("%f", &notas[i]);
            if (notas[i] < 0.0 || notas[i] > 10.0) {
                printf("Nota invalida! Digite uma nota entre 0.0 e 10.0.\n");
            }
        } while (notas[i] < 0.0 || notas[i] > 10.0);
    }

    // Calcula a média geral, a maior e a menor nota, e a quantidade de aprovados
    for (int i = 0; i < n; i++) {
        mediaGeral += notas[i];

        if (notas[i] > maiorNota) {
            maiorNota = notas[i];
        }

        if (notas[i] < menorNota) {
            menorNota = notas[i];
        }

        if (notas[i] >= 6.0) {
            aprovados++;
        }
    }

    mediaGeral /= n;

    // Solicita a posição de um aluno e exibe a nota correspondente
    printf("\nDigite a posicao do aluno (1 a %d) para saber sua nota: ", n);
    scanf("%d", &k);

    if (k >= 1 && k <= n) {
        printf("A nota do aluno na posicao %d é: %.2f\n", k, notas[k-1]);
    } else {
        printf("Posiçao invaclida!\n");
    }

    // Exibe os resultados
    printf("\nResultados:\n");
    printf("Media geral da turma: %.2f\n", mediaGeral);
    printf("Maior nota: %.2f\n", maiorNota);
    printf("Menor nota: %.2f\n", menorNota);
    printf("Quantidade de alunos aprovados: %d\n", aprovados);

    return 0;
}
