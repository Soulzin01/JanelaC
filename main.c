#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "biblioteca.h"


int main()
{
    int borda;
    char titulo[24];
    
    scanf("%d", &borda);
    fflush(stdin);
    fgets(titulo, sizeof(titulo), stdin);
    system("cls"); // limpa a tela
    janela(1, 1, 80, 24, titulo, borda);

    int linha, coluna;
    printf("Defina a posição X do texto: ");
    scanf("%d", &linha);
    printf("Defina a posição Y do texto: ");
    scanf("%d", &coluna);
    char texto[24];
    fgets(texto, sizeof(texto), stdin);
    label(linha, coluna, texto);

    gotoxy(1,81);

    return 0;
}