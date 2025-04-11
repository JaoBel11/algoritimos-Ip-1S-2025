#include <stdio.h>

int main() {
    int n, k;
    float mediaGeral, maiorNota, menorNota;
    int aprovados;
    char desejaReiniciar;

    do {
       
        mediaGeral = 0.0;
        maiorNota = 0.0;
        menorNota = 10.0;
        aprovados = 0;


        printf("Digite o numero de alunos da turma: ");
        scanf("%d", &n);

      
        float notas[n];

   
        for (int i = 0; i < n; i++) {
            do {
                printf("Digite a nota do aluno %d (entre 0.0 e 10.0): ", i + 1);
                scanf("%f", &notas[i]);
                if (notas[i] < 0.0 || notas[i] > 10.0) {
                    printf("Nota inválida! Digite uma nota entre 0.0 e 10.0.\n");
                }
            } while (notas[i] < 0.0 || notas[i] > 10.0);
        }
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


        printf("\nDigite a posição do aluno (1 a %d) para saber sua nota: ", n);
        scanf("%d", &k);

        if (k >= 1 && k <= n) {
            printf("A nota do aluno na posição %d é: %.2f\n", k, notas[k-1]);
        } else {
            printf("Posição inválida!\n");
        }

        
        printf("\nResultados:\n");
        printf("Média geral da turma: %.2f\n", mediaGeral);
        printf("Maior nota: %.2f\n", maiorNota);
        printf("Menor nota: %.2f\n", menorNota);
        printf("Quantidade de alunos aprovados: %d\n", aprovados);

        
        printf("\nDeseja reiniciar? (S/N): ");
        scanf(" %c", &desejaReiniciar); 

    } while (desejaReiniciar == 'S' || desejaReiniciar == 's'); 

    printf("Programa encerrado.\n");

    return 0;
}
