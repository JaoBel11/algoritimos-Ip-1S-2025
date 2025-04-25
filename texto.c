#include <stdio.h>
#include <string.h> 

#define TAM 255

int main (int argc, char* argv[]) {

    char palavra1[] = "Conhecimento";
    char palavra2[] = {'c', 'o', 'n', 'h', 'e', 'c', 'i', 'm', 'e', 'n', 't', 'o', '\0'};
    char frase1[TAM];
    char palavra3[TAM];
    char palavra4[TAM];

    printf("%s\n", palavra1);
    printf("%s\n", palavra2);

    printf("%c\n", palavra2[4]); 

    printf("Digite uma frase: ");
    fgets(frase1, TAM, stdin);

    printf("%s\n", frase1); 

    printf("Digite uma palavra: ");
    fgets(palavra3, TAM, stdin);

    printf("Digite outra palavra: ");
    fgets(palavra4, TAM, stdin);

    palavra3[strcspn(palavra3, "\n")] = '\0';
    palavra4[strcspn(palavra4, "\n")] = '\0';

    if (strcmp(palavra3, palavra4) == 0){
        printf("As palavras sao iguais\n");
    } else {
        printf("As palavras NAO sao iguais\n");
    }

    return 0;
}



