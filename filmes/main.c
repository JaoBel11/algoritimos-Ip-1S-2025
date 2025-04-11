#include <stdio.h>
#include <string.h>

int main() {
    char tipo[10];
    char genero[20];
    char subgenero[30];
    char repetir[5];

    do {
        printf("Escolha o tipo de filme (leve/intenso): ");
        scanf("%s", tipo);

        if (strcmp(tipo, "leve") == 0) {
            printf("Escolha o gênero (comedia/animacao): ");
            scanf("%s", genero);

            if (strcmp(genero, "comedia") == 0) {
                printf("Você deve assistir ao filme 'As Branquelas'.\n");
            } else if (strcmp(genero, "animacao") == 0) {
                printf("Você deve assistir ao filme 'Toy Story'.\n");
            } else {
                printf("Gênero não reconhecido.\n");
            }
        } else if (strcmp(tipo, "intenso") == 0) {
            printf("Escolha o gênero (terror/acao): ");
            scanf("%s", genero);

            if (strcmp(genero, "terror") == 0) {
                printf("Escolha o tipo de terror (psicologico/sobrenatural): ");
                scanf("%s", subgenero);

                if (strcmp(subgenero, "psicologico") == 0) {
                    printf("Você deve assistir ao filme 'Corra!'.\n");
                } else if (strcmp(subgenero, "sobrenatural") == 0) {
                    printf("Você deve assistir ao filme 'Invocação do Mal'.\n");
                } else {
                    printf("Tipo de terror não reconhecido.\n");
                }
            } else if (strcmp(genero, "acao") == 0) {
                printf("Escolha entre super-herois ou aventura realista (super/realista): ");
                scanf("%s", subgenero);

                if (strcmp(subgenero, "super") == 0) {
                    printf("Você deve assistir ao filme 'Vingadores: Ultimato'.\n");
                } else if (strcmp(subgenero, "realista") == 0) {
                    printf("Você deve assistir ao filme 'Mad Max: Estrada da Fúria'.\n");
                } else {
                    printf("Tipo de ação não reconhecido.\n");
                }
            } else {
                printf("Gênero não reconhecido.\n");
            }
        } else {
            printf("Tipo de filme não reconhecido.\n");
        }

        printf("\nDeseja escolher outro filme? (sim/nao): ");
        scanf("%s", repetir);

        printf("\n");

    } while (strcmp(repetir, "sim") == 0);

    printf("Até a próxima!\n");

    return 0;
}
