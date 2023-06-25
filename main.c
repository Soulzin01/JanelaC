#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "biblioteca.h"

int main()
{
    int borda;
    char titulo[20];
    scanf("%d", &borda);
    fflush(stdin);
    fgets(titulo, 20, stdin);
    system("cls"); // limpa a tela
    janela(1, 1, 80, 24, titulo, borda);

    return 0;
}