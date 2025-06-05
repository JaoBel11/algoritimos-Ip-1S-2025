#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Ponto;

float calcularDistancia(Ponto a, Ponto b) {
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main() {
    Ponto A, B;

    printf("Qual eh o ponto A (formato x y)? ");
    scanf("%f %f", &A.x, &A.y);

    printf("Qual eh o ponto B (formato x y)? ");
    scanf("%f %f", &B.x, &B.y);

    float distancia = calcularDistancia(A, B);

    printf("Distancia entre os pontos A e B: %.2f\n", distancia);

    return 0;
}