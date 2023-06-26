#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "biblioteca.h"


int main()
{
    int borda;
    char titulo[24];
    printf("Escolha o formato da borda: (0 - Borda simples | 1 - Borda dupla)\n");
    scanf("%d", &borda);
    fflush(stdin);
    printf("Digite o título que estará na parte superior da página:\n");
    fgets(titulo, sizeof(titulo), stdin);
    system("cls"); // limpa a tela
    janela(1, 1, 80, 24, titulo, borda);

    int linha, coluna;
    printf("Defina a posição X do texto: ");
    scanf("%d", &linha);
    fflush(stdin);

    printf("Defina a posição Y do texto: ");
    scanf("%d", &coluna);
    fflush(stdin);

    char texto[24] = "LABEL";
    label(linha, coluna, texto);

    gotoxy(1,81);

    return 0;
}