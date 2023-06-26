#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "biblioteca.h"


int main()
{
    inicializar_tela();

    label(2, 2, "Nome: ");

    gotoxy(1, 25);
    return 0;
}