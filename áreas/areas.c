#include <stdio.h>
#include <math.h>

int main() {
    int opcao;
    float A, b, h, L, B, D, d, r;
    char repetir;

    do {
        printf("\n=== CALCULADORA DE AREAS ===\n");
        printf("1. Quadrado\n");
        printf("2. Retangulo\n");
        printf("3. Triangulo\n");
        printf("4. Trapezio\n");
        printf("5. Losango\n");
        printf("6. Circulo\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                printf("Informe o lado (L): ");
                scanf("%f", &L);
                A = L * L;
                printf("Area do quadrado: %.2f\n", A);
                break;
            case 2:
                printf("Informe a base (b): ");
                scanf("%f", &b);
                printf("Informe a altura (h): ");
                scanf("%f", &h);
                A = b * h;
                printf("Area do retangulo: %.2f\n", A);
                break;
            case 3:
                printf("Informe a base (b): ");
                scanf("%f", &b);
                printf("Informe a altura (h): ");
                scanf("%f", &h);
                A = (b * h) / 2;
                printf("Area do triangulo: %.2f\n", A);
                break;
            case 4:
                printf("Informe a base maior (B): ");
                scanf("%f", &B);
                printf("Informe a base menor (b): ");
                scanf("%f", &b);
                printf("Informe a altura (h): ");
                scanf("%f", &h);
                A = ((B + b) * h) / 2;
                printf("Area do trapezio: %.2f\n", A);
                break;
            case 5:
                printf("Informe a diagonal maior (D): ");
                scanf("%f", &D);
                printf("Informe a diagonal menor (d): ");
                scanf("%f", &d);
                A = (D * d) / 2;
                printf("Area do losango: %.2f\n", A);
                break;
            case 6:
                printf("Informe o raio (r): ");
                scanf("%f", &r);
                A = 3.14 * r * r;
                printf("Area do circulo: %.2f\n", A);
                break;
            case 0:
                printf("Encerrando o programa.\n");
                return 0;
            default:
                printf("Opcao invalida!\n");
                break;
        }

        printf("\nDeseja calcular outra area? (s/n): ");
        scanf(" %c", &repetir);

    } while (repetir == 's' || repetir == 'S');

    printf("Programa finalizado.\n");
    return 0;
}
