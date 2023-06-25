#include "biblioteca.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

// void janela();
// void label();
// char ler_string();

void gotoxy(int x, int y) { printf("\033[%d;%dH", y, x); }

void janela(int xInicial, int yInicial, int xFinal, int yFinal, char titulo[20], int tipoMold)
{
    int z = 0;
    for (int i = xInicial; i <= xFinal; i++)
    {
        for (int j = yInicial; j <= yFinal; j++)
        {
            gotoxy(i, j);
            if (i == xInicial && j == yInicial)
            {
                printf("%c", (tipoMold == 1) ?  201 : 218);
            }
            else if (i == xFinal && j == yInicial)
            {
                printf("%c", (tipoMold == 1) ? 187 : 191);
            }
            else if (i == xInicial && j == yFinal)
            {
                printf("%c", (tipoMold == 1) ? 200 : 192);
            }
            else if (i == xFinal && j == yFinal)
            {
                printf("%c", (tipoMold == 1) ? 188 : 217);
            }
            else if (i == xInicial || i == xFinal)
            {
                printf("%c", (tipoMold == 1) ? 186 : 179);
            }
            else if (j == yInicial )
            {
                if(i == (xFinal/2)-((int)strlen(titulo)/2)){
                    printf("%s", titulo);
                }else if(i >= (xFinal/2)+((int)strlen(titulo)/2) || i < (xFinal/2)-((int)strlen(titulo)/2)){
                    printf("%c", (tipoMold == 1) ? 205 : 196);
                }
            }else if(j == yFinal){
                printf("%c", (tipoMold == 1) ? 205 : 196);
            }
        }
    }
}

void label(int lin, int col, char texto[24]){
    for(int i = 0; i <= strlen(texto); i++){
        gotoxy(lin+i, col);
        printf("%c", texto[i]);
    }
}