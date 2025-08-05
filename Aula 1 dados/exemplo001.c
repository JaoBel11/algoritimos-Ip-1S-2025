#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa {
    char Nome[151];       // 150 caracteres + 1 para '\0'
    char Telefone[15];    // 14 caracteres + 1 para '\0'
    char Endereco[201];   // 200 caracteres + 1 para '\0'
};

int main() {
    struct Pessoa X;

    // Preenchendo os dados
    strcpy(X.Nome, "Maria Alves");
    strcpy(X.Telefone, "(61) 12345-6789");
    strcpy(X.Endereco, "SHIS QI 12 Conj. 25 Casa 13");

    // Imprimindo os dados
    printf("Nome: %s\tEndereco: %s\tTelefone: %s\n", X.Nome, X.Endereco, X.Telefone);

    return 0;
}

