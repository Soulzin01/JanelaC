#include "biblioteca.h"
#include <stdio.h>

void janela();

void janela(int xInicial, int yInicial, int xFinal, int yFinal)
{
    for (int i = xInicial; i <= xFinal; i++)
    {
        for (int j = yInicial; j <= yFinal; j++)
        {
            if (i == xInicial && j == yInicial)
            {
                printf("SE");
            }
            else if (i == xInicial && j == yFinal)
            {
                printf("SD");
            }
            else if (i == xFinal && j == yInicial)
            {
                printf("IE");
            }
            else if (i == xFinal && j == yFinal)
            {
                printf("ID");
            }
            else if (i == xInicial || i == xFinal)
            {
                printf("=");
            }
            else if (j == yInicial || j == yFinal)
            {
                printf("|");
            }
            else
            {
                printf(" ");
            }
        }
    }
}
