#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void gotoxy(int x, int y) { printf("\033[%d;%dH", y, x); }

int main()
{
    int linha = 5, coluna = 10;

    system("cls"); // limpa a tela

    gotoxy(coluna, linha); // vai para a posição coluna 10, linha 5

    printf("%c", 204);

    sleep(2); // espera 2 segundos

    getchar(); // espera uma entrada do teclado

    return 0;
}